#include <iostream>
#include <string>
#include <random>
using std::cout;
using std::cin;

int main()
{

int Enter;
int Select;
int will; 
int Equipped;
int Choice = 1;
int Start = 1;
while (Start !=0) {
cout << "Select your class:\n";
    cout << "-------------------\n";


    cout << "Select 1: Dark knight\n";
    cout << "--------------------\n";
    cout << "What may your choice be?: ";
    cin >> Select;

    if (Select == 2) {
        cout << "---------------------------\n";
        cout << "Golem...nice choice warrior!\n\n";
    }
    else if (Select == 1) {
        cout << "Welcome the Dark knight...\n";
        cout << "Enter any key to begin";
            cin >> Enter;
    
    }  
    cout << "And so our journey begins...\n";
    cout << "Your goal is to make it as far as you can!\n\n";
        cout << "Enter S to begin: ";    
        cin >> Enter;

    cout << "Level 1\n";
    cout << "----------\n";
    cout << "You're about to encounter an gobin!\n";
    cout << "----------\n";
    cout << "-Player HP: 100\n";
    cout << "-Goblin HP: 50\n";
    cout << "----------------------------------------\n";

    cout << "Enter 1 to select sword:\n"; 
    cout << "Enter 2 to select sheild:\n";
    cout << "----------------------------\n";
    cout << "What will it be?: ";
    cin >> will;

    while (will != 1 && will != 2) {
        cout << "Invaild choice! Please enter 1 or 2: ";
        cin >> will;
    }
   
    if (will == 1) {
        cout << "------------------\n";
        cout << "Sword Equipped!\n";
        cout << "-------------------\n";
        cin >> Equipped;   
    }

    else if (will == 2) {
        cout << "Sheild Equipped\n";
    }

    // combat
    int PlayerHP = 100;    
    int GoblinHP = 50;
    int swordDamage = 25;
    int SkeletonHP = 75;
    int BabyDragonHP = 100;
    while (PlayerHP > 0 && GoblinHP > 0) {

        // Your turn
        cout << "You attacked the goblin!\n";
        GoblinHP -= swordDamage;
        cout << "Gobin HP: " << GoblinHP << "\n";

        cout << "Press 1 to continue: ";
        cin >> Enter;

        // Goblin's turn
        if (GoblinHP > 0) {
            cout << "The goblin attacks you!\n";
            PlayerHP -= 20;
            cout << "Player HP: " << PlayerHP << "\n";

            cout << "Press 1 to continue: ";
            cin >> Enter;
        }
    }

    cout << "yay you killed your first enemy! but your HP is\n" << PlayerHP << "\n";
    cout << "--------------\n"; 
    cout << "Enter 1: to use a heal pot\n";
    cout << "Enter 2: to continue with no healing HARD MODE\n";
    cin >> Choice; 

    if (Choice == 1) {
        PlayerHP += 20;
        cout << "Player HP: " << PlayerHP << "\n";
    }
    else {
        cout << "risky player I see";
    }   cout << "Enter 1 to continue: ";
    cin >> Enter;
    cout << "-------------------------\n";
    cout << "Level 2\n";
    cout << "-------------------------\n";
    cout << "You're about to encounter a skeleton!\n";
    cout << "-------------------------\n";
    cout << "-Player HP: " << PlayerHP << "\n";
    cout << "-Skeleton HP: " << SkeletonHP << "\n";
    cout << "-------------------------\n";
    cout << "Enter 1 to attack the skeleton: ";
    cin >> Enter;
while (PlayerHP > 0 && SkeletonHP > 0) {

    // Your turn
    cout << "You attacked the skeleton!\n";
    SkeletonHP -= swordDamage;

    cout << "Skeleton HP: " << SkeletonHP << "\n";

    cout << "Enter 1 to continue: ";
    cin >> Enter;

    if (SkeletonHP > 0) {
        cout << "The skeleton attacks you!\n";

        PlayerHP -= 20;

        cout << "Player HP: " << PlayerHP << "\n";

        cout << "Press 1 to continue: ";
        cin >> Enter;
    }

        }
             
        cout << "--------------\n"; 
        cout << "Enter 1: to use a heal pot\n";
        cout << "Enter 2: to continue with no healing HARD MODE\n";
        cin >> Choice; 

    if (Choice == 1) {
        PlayerHP += 20;
       cout << "--------------\n";
        cout << "Player HP: " << PlayerHP << "\n";
    }
    else {
        cout << "risky player I see";
    }   cout << "Player HP: " << PlayerHP << "\n";
        cout << "Enter 1 to continue: ";
        cin >> Enter;
        cout << "-------------------------\n";
        cout << "Level 3\n";
        cout << "-------------------------\n";
        cout << "You're about to encounter a baby dragon!\n";
        cout << "-------------------------\n";  
        cout << "Enter 1 to continue: ";
        cin >> Enter;       
        cout << "-Player HP: " << PlayerHP << "\n";
        cout << "-Baby Dragon HP: 100\n";
        cout << "-------------------------\n";  
        cout << " Baby Dragon DMG: 15-50\n";
        cout << "-------------------------\n";
        cout << "Enter 1 to attack the baby dragon: ";        
        cout << "-------------------------\n";
         cin >> Enter; 
      std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> randomNumber(15, 50);

while (PlayerHP > 0 && BabyDragonHP > 0) {

    // Your turn
    cout << "You attacked the baby dragon!\n";
    BabyDragonHP -= swordDamage;

    cout << "Baby Dragon HP: " << BabyDragonHP << "\n";

    cout << "Press 1 to continue: ";
    cin >> Enter;

    if (BabyDragonHP > 0) {

        cout << "The baby dragon attacks you!\n";

        int number = randomNumber(gen);
        PlayerHP -= number;

        cout << "Baby Dragon deals " << number << " damage!\n";
        cout << "Player HP: " << PlayerHP << "\n";

        cout << "Press 1 to continue: ";
        cin >> Enter;
    }
}
    if (PlayerHP <= 0) {
        cout << "You died! Game over!\n";
        cout << "-------------------------\n";
         cout << "Would you like to play again?\n";
        cout << "Enter any key to continue to main menu\n";
        }
    
    else if (BabyDragonHP <= 0) {
        cout << "Congratulations! You defeated the baby dragon!\n";
        cout << "You have completed the game with " << PlayerHP << " HP remaining!\n";
    }

        cout << "Enter 1 to play again, 0 to exit: ";
        cin >> Start;
}
        return 0;
}

