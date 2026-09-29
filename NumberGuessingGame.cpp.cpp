#include <iostream>
using namespace std;

int main() {
    
 int PlayAgain =1;
        while (PlayAgain == 1) {


    int enter;
        cout << "Welcome to the number guessing game!  type 1 then enter to continue\n\n";
        cin >> enter; 
        
        int to; 
        cout << "Guess the number 1 to 10\n\n";
        cin >> to; 
         
        if (to == 5) {
            cout << "YES";
        }    
        while (to != 5) {

        
           cout << "Not quite\n\n";
            cin >> to;
        }
            cout << "YAY YOU GUESSED CORRECTLY\n";

            cout << "To play again? 1 = yes, 0 = no\n\n";
            cin >> PlayAgain;
        }  
            return 0;

} 