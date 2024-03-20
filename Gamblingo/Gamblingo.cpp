#include <cstdlib> 
#include <ctime> 
#include <iostream>

int main()
{
	while (true){
	srand(time(0));
	int Money = 15;
	int MoneyWon = 0;
	int userMoneyInput = 0;
	int Random = rand() % 10 + 1;
	std::cout << "Get 50 Money you win get 0 Money your banned from pala pizza!" << "\n";
	std::cout << "Current Money:"<< Money <<"\n";

	std::cin >> userMoneyInput;

	

	if (userMoneyInput == Random) {
		MoneyWon = userMoneyInput * Random;
		Money +=  MoneyWon;
		std::cout << "You Won!" << "\n";
	}
	else  {
		Money -= userMoneyInput;
		std::cout << "Thanks for the money Nigger" << "\n";
	};

	std::cout << "Current Money:" << Money << "\n";


	if (Money >= 50) {
		std::cout << "You're A Professional Gambler! You Win!" << "\n";
	}
	else if (Money <= 0) {
		std::cout << "You're shit at Gambling. You're a Loser." << "\n";
	}

	

	

	

	
	}
	return 0;

}

