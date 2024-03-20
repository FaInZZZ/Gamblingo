#include <cstdlib>
#include <ctime>
#include <iostream>
#include <Windows.h>

int main()
{
    srand(time(0));
    int Money = 18;
    int MoneyWon = 0;
    int userMoneyInput = 0;

    while (true) {
        int Random = rand() % 10 + 1;
        std::cout << "Current Money: " << Money << "\n";

        std::cin >> userMoneyInput;

        if (userMoneyInput >= 11) {
            std::cout << "The Maximum Amount To Gamble is 10!" << "\n";
        }
        else if (userMoneyInput == Random) {
            MoneyWon = userMoneyInput * Random;
            Money = Money + MoneyWon;
            std::cout << "You Won!" << "\n";
        }
        else {
            Money = Money - userMoneyInput;
            std::cout << "You Lose!" << "\n";
        }

        if (Money >= 50) {
            std::cout << "You're A Professional Gambler! You Win!" << "\n";
            break;
        }
        else if (Money <= 0) {
            std::cout << "You're bad at Gambling. You're a Loser." << "\n";
            break;
        }
    }
    system("pause");
    return 0;
}
