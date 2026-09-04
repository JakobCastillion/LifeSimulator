#include <iostream>
#include <cstdlib>
int CrimeHistory = 0;
int Day = 0;
int CrimeChance = 100;
//Handles Bank functions
class BankAccount {
private:
public:
	int Balance = 100;
	void GetBalance() {
		std::cout << "Your Total Balance is" << std::endl;
		std::cout << Balance << std::endl;
	};
	void Deposit(int money) {
		Balance += money;
	};
	void fee(int money) {
		Balance -= money;
	};
}; // This Handles the Bank Functions
BankAccount Bank;
// Checks for Y/N answers
void CheckAnswer(std::string Answer) {
	if (Answer == "Y") {

	}
	else if (Answer == "N") {
		exit(0);
	}
}  
// Random daily events
void RandomEvent() {
	srand(time(0));
	int seed = rand() % 101;
	if (seed <= 10) {
		std::cout << "Your Car Broke down ! -90 for Repairs" << std::endl;
		Bank.fee(90);
	}
	else if (seed <= 20) {
		std::cout << "Friends Birthday ! pay out 30 !" << std::endl;
		Bank.fee(30);
	}
	else if (seed <= 30) {
		std::cout << "It was a Normal day" << std::endl;
	}
	else if (seed <= 40) {
		std::cout << "It was a Normal day" << std::endl;
	}
	else if (seed <= 50) {
		std::cout << "It was a Normal day" << std::endl;
	}
	else if (seed <= 60) {
		std::cout << "It was a Normal day" << std::endl;
	}
	else if (seed <= 70) {
		std::cout << "It was a Normal day" << std::endl;
	}
	else if (seed <= 80) {
		std::cout << "Found money on the ground ! gain 20" << std::endl;
		Bank.Deposit(20);
	}
	else if (seed <= 90) {
		std::cout << "Christmas money ! gain 40" << std::endl;
		Bank.Deposit(40);
	}
	else if (seed <= 99) {
		std::cout << "Tax return Comes back ! gain 100" << std::endl;
		Bank.Deposit(100);
	}
	else if (seed == 100) {
		Bank.Deposit(10000);
		std::cout << "YOU HIT THE LOTTERY !!!!!!, GAIN 10000" << std::endl;
	}
}
// Tracks the days
void DayCounter() {
	Day++;
	CrimeHistory--;
	std::cout << "Day" << std::endl;
	std::cout << Day << std::endl;
}
// Daily Fee message
void Fee(int Num) {
	Bank.fee(Num);
	std::cout << "Daily Fee of" << std::endl;
	std::cout << Num << std::endl;
}
// Tracks reputation meter
enum Reputation {
	GoodieTwoShoes,
	Good,
	Neutral,
	Bad,
	Wanted,
	Notorious
};

void CrimeRep(Reputation Rep) {
	switch (Rep) 
	{
	case GoodieTwoShoes:
		 CrimeChance = 100;
		break;
	case Good:
		 CrimeChance = 80;
		break;
	case Neutral:
		 CrimeChance = 60;
		break;
	case Bad:
		 CrimeChance = 40;
		break;
	case Wanted:
		 CrimeChance = 20;
		break;
	case Notorious:
		 CrimeChance = 10;
		break;
	}

}

Reputation CurrentRep = GoodieTwoShoes;
// Crime Chances
void DoCrime() {
	srand(time(0));
	int seed = rand() % CrimeChance;
	if (seed <= 2) {
		std::cout << "The Law Determines you get put to death" << std::endl;
		exit(0);
	}
	else if (seed <= 3) {
		std::cout << "Pay out 1000 Fee for Crimes" << std::endl;
		Bank.fee(1000);
	}
	else if (seed <= 10) {
		std::cout << "100 Fee for crimes" << std::endl;
		Bank.fee(100);
	}
	else if (seed <= 40) {
		std::cout << "You didnt notice any crimes to do" << std::endl;
	}
	else if (seed <= 50) {
		std::cout << "You didnt notice any crimes to do" << std::endl;
	}
	else if (seed <= 60) {
		std::cout << "You didnt notice any crimes to do" << std::endl;
	}
	else if (seed <= 70) {
		std::cout << "You Pickpocketed 100 " << std::endl;
			Bank.Deposit(100);
	}
	else if (seed <= 80) {
		std::cout << "Robbed A house, Gained 300" << std::endl;
		Bank.Deposit(300);
	}
	else if (seed <= 90) {
		std::cout << "Laundered Money, gain 500" << std::endl;
		Bank.Deposit(500);
	}
	else if (seed <= 99) {
		std::cout << "Tax Fraud" << std::endl;
		Bank.Deposit(1000);

	}
	else if (seed == 100) {
		Bank.Deposit(100000);
		std::cout << "You somehow Managed to find a vault full of gold, and robbed it without a trace, gain 100000" << std::endl;
	}
}
// Reputation Track
void SetRep() {
	if (CrimeHistory <= 2) {
		Reputation CurrentRep = GoodieTwoShoes;
		CrimeRep(CurrentRep);
	}
	else if (CrimeHistory <= 4) {
		Reputation CurrentRep = Good;
		CrimeRep(CurrentRep);
	}
	else if (CrimeHistory <= 6) {
		Reputation CurrentRep = Neutral;
		CrimeRep(CurrentRep);
	}
	else if (CrimeHistory <= 8) {
		Reputation CurrentRep = Bad;
		CrimeRep(CurrentRep);
	}
	else if (CrimeHistory <= 10) {
		Reputation CurrentRep = Wanted;
		CrimeRep(CurrentRep);
	}
	else if (CrimeHistory > 10) {
		Reputation CurrentRep = Notorious;
		CrimeRep(CurrentRep);
	}
}
// Gamble Chances
void Gamble() {
	int seed = rand() % 101;
	if (seed <= 10) {
		std::cout << "You Spiraled out of control and lost 1000 at the slots" << std::endl;
		Bank.fee(1000);
	}
	else if (seed <= 20) {
		std::cout << "Bad luck, lost 500" << std::endl;
		Bank.fee(500);
	}
	else if (seed <= 30) {
		std::cout << "Better luck next time, lost 200" << std::endl;
		Bank.fee(200);
	}
	else if (seed <= 40) {
		std::cout << "Not a great day, lost 100" << std::endl;
		Bank.fee(100);
	}
	else if (seed <= 50) {
		std::cout << "You somehow lost a singular dollar" << std::endl;
		Bank.fee(1);
	}
	else if (seed <= 60) {
		std::cout << "Left with no earnings, but you didnt lose any eaither" << std::endl;
	}
	else if (seed <= 70) {
		std::cout << "Left with no earnings, but you didnt lose any eaither" << std::endl;
	}
	else if (seed <= 80) {
		std::cout << "Turned a profit, gain 100" << std::endl;
		Bank.Deposit(100);
	}
	else if (seed <= 90) {
		std::cout << "Great winnings ! gain 200" << std::endl;
		Bank.Deposit(200);
	}
	else if (seed <= 99) {
		std::cout << "Jackpot ! gain 500" << std::endl;
		Bank.Deposit(500);
	}
	else if (seed == 100) {
		Bank.Deposit(5000);
		std::cout << "After a 5 Hour winning streak, you gained 5000 at the casino" << std::endl;
	}
}
// Checks for daily actions
void CheckMAnswer(std::string Answer) {
	if (Answer == "Work") {
		Bank.Deposit(50);
		std::cout << "You made 50 For a Hard Days Work" << std::endl;
	}
	else if (Answer == "Crime") {

		DoCrime();
		CrimeHistory += 2;
		SetRep();
	}
	else if (Answer == "Gamble") {
		Gamble();
	}

}

void main() {


	std::string Yn;
	std::cout << "Welcome ! This game is based on keeping your bank balance above 0, there will be daily fees" << std::endl;
	std::cout << "and you must make money, you will start with 100" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Pressing Y will continue, N to close program / answer no" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Type Y to Continue" << std::endl;
	std::cin >> Yn;
	
	CheckAnswer(Yn);

	while (Bank.Balance > 0) {
	DayCounter();

	std::cout << "Time to Make Money, Would you like to Gamble,Work,or Crime ?" << std::endl;
	std::cout << "" << std::endl;
	std::cin >> Yn;
	CheckMAnswer(Yn);

	std::cout << "" << std::endl;

	std::cout << "Event-" << std::endl;

	RandomEvent();

	std::cout << "" << std::endl;

	Fee(50);

	std::cout << "" << std::endl;
	Bank.GetBalance();

	if (Bank.Balance <= 0) {
	std::cout << "You Ran out of money" << std::endl;
	exit(0);
	}


	std::cout << "Continue?" << std::endl;
	std::cout << "" << std::endl;
	std::cin >> Yn;
	CheckAnswer(Yn);
	}
};

