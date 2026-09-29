#include <iostream>
#include <string>
#include <random>

using std::cout;
using std::cin;

int main() {

    int choice = 1;
    int Enter;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> randomNumber(1, 10);

    cout << "Enter 1 to roll the dice: ";
    cin >> Enter;

    while (choice != 2) {

        int number = randomNumber(gen);
        
        cout << "You rolled: " << number << "\n";

        if (number >= 5) {
            cout << "Fucking off yourself today\n";
        }
        else {
            cout << "Not today\n";
        }

        cout << "1. Spin again\n";
        cout << "2. Stop\n";
        cin >> choice;
    }

    return 0;
}