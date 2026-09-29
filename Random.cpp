#include <iostream> 
using namespace std;

int main() {

    int Enter;
    cout << "Enter 1 to start Calculator...\n";
    cin >> Enter;

    cout << "You may begin...\n";
    cout << "Enter first number\n";

    int num1;
   cin >> num1;
      cout << "Enter second number\n";
   int num2; 
   cin >> num2;
  
    cout << "Enter Operation\n";
    cout << "1 = Addition\n";
    cout << "2 = Subtraction\n";
    cout << "3 = Multiplication\n";
    cout << "4 = Division\n";
    cin >> Enter;



   if (Enter == 1) {
        cout << num1 + num2;
   }
   else if (Enter == 2) {
        cout << num1 - num2;
   }    
   else if (Enter == 3) {
     cout << num1 * num2;
}
   else if (Enter == 4) {
     cout << num1 / num2;
   }

   cout << "Enter to exit...";
     cin.get();
     cin.get();
 
     

    return 0;
}