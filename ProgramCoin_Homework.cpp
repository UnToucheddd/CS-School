#include <iostream>
using namespace std;


int main() {
    // Algorithm #3
    // Calculates the total value of quarters, dimes, and nickels in pennies.
    
const int QUARTER_VALUE = 25; // Stores the value of a quarter in pennies
const int DIME_VALUE = 10;    // Stores the value of a dime in pennies.
const int NICKEL_VALUE = 5;   // Stores the value of a nickel in pennies.
    
          
int RunAgain =1;
        while (RunAgain == 1) {
        //RunAgain Controls if the program repeats.
        // If the user enters 1 at the end, the program runs again. 

    cout << "Enter number of quarters:"; // Asks user to enter amount of Quarters. 
int Quarters; // creates integer variable called Quarters.
        cin >> Quarters; // Stores the user's input in the integer variable.
    cout << "\n"; // \n moves the cursor to a new line.

    cout << "Enter number of dimes:";
int Dimes; 
        cin >> Dimes;
    cout <<"\n";

    cout << "Enter number of nickels:"; // Repeated lines with new int name.
int Nickels;
        cin >> Nickels;
    cout <<"\n";

    cout <<"----------------------------"; // separation lines more visible to the end user.
    
    cout << "\nQuarters:" << Quarters * QUARTER_VALUE; // Displays the coin, then multiplies by the number value.
    cout << "\n";                           
    cout << "\nDimes:" << Dimes * DIME_VALUE;
    cout << "\n";
    cout << "\nNickels:" << Nickels * NICKEL_VALUE;

   
    cout << "\n----------------------------\n"; 
    cout << "All values added together in pennies: = "; // Displays the total value of all coins in  pennies.
    cout << Quarters * QUARTER_VALUE + Dimes * DIME_VALUE + Nickels * NICKEL_VALUE;   // multiplies values user entered then adds.
    cout << "\n";
    cout << "\nRun again enter 1:"; // Asks the user if they want to run the program again.
        cin >> RunAgain; // Stores the user's answer in RunAgain.

    }       
        return 0;
}