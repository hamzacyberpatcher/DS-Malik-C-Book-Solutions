#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	inFile.open("inData.txt");

	inFile.ignore(100,'\n');

	int boxTicketPrice, boxTicketsSold;
	int sidelineTicketPrice, sidelineTicketsSold;
	int premiumTicketPrice, premiumTicketsSold;
	int generalTicketPrice, generalTicketsSold;

	inFile >> boxTicketPrice >> boxTicketsSold;
	inFile >> sidelineTicketPrice >> sidelineTicketsSold;
	inFile >> premiumTicketPrice >> premiumTicketsSold;
	inFile >> generalTicketPrice >> generalTicketsSold;

	int totalTicketsSold = boxTicketsSold + sidelineTicketsSold + premiumTicketsSold + generalTicketsSold;
	int profit = (boxTicketsSold * boxTicketPrice) + (sidelineTicketPrice * sidelineTicketsSold) + (premiumTicketPrice * premiumTicketsSold) + (generalTicketPrice * generalTicketsSold);

	cout << "Total tickets sold: " << totalTicketsSold << endl;
	cout << "Net Profit: " << profit << endl;

	return 0;
}
