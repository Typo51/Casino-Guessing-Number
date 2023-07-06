#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;



double getChips(double chips);


int main()
{
	
	system("cls");
	
	double number;
	double playerNumber;
	double money;
	double wager;
	char decider;
	
	cout << "                                  ---------------------------------------------- " << endl;
	cout << "                                        Welcome to the Casino Guessing Game!" << endl;
	cout << "                                  ---------------------------------------------- " << endl;
	cout << endl;
	cout << endl;
	cout << "                                  You will have to pick a number from 1 to 3" << endl;
	cout << "                 You will have to enter your money brought and you will have to enter the amount you wagered" << endl;
	cout << "                 You need to guess the number given by the machine with the number you picked" << endl;
	cout << "           If you're correct, the amount you wagered will be doubled and will be added to your money brought" << endl;
	cout << "           If you're incorrect, the amount you wagered will be doubled and will be deducted to your money brought" << endl;
	cout << endl;
	cout << endl;
	cout << "                                                  READY!?" << endl;
	cout << endl;

	money = getChips(money);
	
	checkpoint :

	system ("cls");
	
	

	
	cout << "                                  ---------------------------------------------- " << endl;
	cout << "                                        Welcome to the Casino Guessing Game!" << endl;
	cout << "                                  ---------------------------------------------- " << endl;
	cout << endl;
	cout << endl;
	cout << "                                  " << "Money Left: " << money << endl;
	cout << endl;
	
	cout << "                                          Please enter your wager: " ;
	cin >> wager;
	
	if (wager > money)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                          Error! Value exceeding, please try again!" << endl;	
		system ("pause");
		goto checkpoint;
	}
	
	system("cls");
	
	cout << "                                  ---------------------------------------------- " << endl;
	cout << "                                        Welcome to the Casino Guessing Game!" << endl;
	cout << "                                  ---------------------------------------------- " << endl;
	cout << endl;
	cout << endl;
	cout << "                                  " << "Money Left: " << money << endl;
	cout << "                                  " << "You wagered: " << wager << endl;
	
	srand (time(0));
	
	number = 1 + rand ()% (3 - 1 + 1);
	
	checkpoint2 :
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                          Please enter your number: ";
	cin >> playerNumber;
	
	if (playerNumber > 3)
	{
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                          Error! Value exceeding, please try again!" << endl;
		goto checkpoint2;
		system("pause");
	}
	
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                          The number is " << number << endl;

	
	if (number == playerNumber)
	{
		money = money + wager * 2;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                          You're correct" << endl;
	}
	
	else if (number != playerNumber)
	{
		money = money - wager * 2;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                          You're wrong" << endl;
	}
	
	system ("pause");
	
	if (money <= 0)
	{
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "                                               OH NO! YOU'RE BANKRUPT!" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		system("pause");
		goto checkpoint3;
	}
	
	checkpointnew :
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	
	cout << "                                              Wanna try again? (Y/N): ";
	cin >> decider;
	if (decider == 'y' || decider == 'Y')
	{
	goto checkpoint;
	}
	else if (decider == 'n' || decider == 'N')
	{
		goto checkpoint3;
	}
	
	else if (decider != 'y' || decider != 'Y' || decider != 'n' || decider != 'N' )
	{
	
		goto checkpointnew;
	}
	return 0;
	
	checkpoint3 :
	
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                 THANKS FOR PLAYING! GOODBYE!" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;	

}


double getChips(double chips)
{
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                 Please enter the amount of money you have: ";
	cin >> chips;
	return chips;
}



