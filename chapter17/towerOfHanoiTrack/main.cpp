#include <iostream>
using namespace std;

void printRodState(int a_count, int b_count, int c_count) {
    cout << "Rod A: " << a_count << " disks" << endl;
    cout << "Rod B: " << b_count << " disks" << endl;
    cout << "Rod C: " << c_count << " disks" << endl;
    cout << endl;
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, int &a_count, int &b_count, int &c_count) {
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        if (from_rod == 'A') a_count--;
        else if (from_rod == 'B') b_count--;
        else if (from_rod == 'C') c_count--;

        if (to_rod == 'A') a_count++;
        else if (to_rod == 'B') b_count++;
        else if (to_rod == 'C') c_count++;

        printRodState(a_count, b_count, c_count);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, a_count, b_count, c_count);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

    if (from_rod == 'A') a_count--;
    else if (from_rod == 'B') b_count--;
    else if (from_rod == 'C') c_count--;

    if (to_rod == 'A') a_count++;
    else if (to_rod == 'B') b_count++;
    else if (to_rod == 'C') c_count++;

    printRodState(a_count, b_count, c_count);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, a_count, b_count, c_count);
}

int main() {
    int n = 20; // Number of disks
    int a_count = n, b_count = 0, c_count = 0;

    cout << "Initial state:\n";
    printRodState(a_count, b_count, c_count);

    towerOfHanoi(n, 'A', 'C', 'B', a_count, b_count, c_count);

    return 0;
}
