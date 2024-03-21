#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    srand(time(0));

    int Money = 25;

    std::ifstream file("Money.txt");
    if (file.is_open()) {
        file >> Money;
        file.close();
    }
    else {
        std::ofstream newFile("Money.txt");
        newFile << Money;
        newFile.close();
    }

    std::cout << "Choose Game Mode\n";

    int choice;
    std::cout << "1. 10 Time Money\n";
    std::cin >> choice;

    switch (choice) {
    case 0:
        std::cout << "Choose Game Mode:\n";
        break;

    case 1: {
        int MoneyWon = 0;
        int userMoneyInput = 0;

        while (true) {
            int Random = rand() % 10 + 1;
            std::cout << "Current Money: " << Money << "\n";

            std::cin >> userMoneyInput;

            if (Money - userMoneyInput < 0) {
                std::cout << "You don't have enough balance!\n";
                continue;
            }
            else if (userMoneyInput >= 11) {
                std::cout << "The maximum amount to gamble is 10!" << "\n";
                continue;
            }

            if (userMoneyInput == Random) {
                MoneyWon = userMoneyInput * Random;
                Money += MoneyWon;
                std::cout << "You Won!" << "\n";
            }
            else {
                Money -= userMoneyInput;
                std::cout << "You Lose!" << "\n";
            }

        }
        if (Money <= 0) {
            std::cout << "Delete Money.txt To Try Again!" << "\n";
            break;
        }



        std::ofstream file("Money.txt");
        file << Money;
        file.close();
    }
          system("pause");
    }

    
    return 0;
};




    


