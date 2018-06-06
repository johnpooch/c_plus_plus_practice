
#include <iostream>
#include <limits>
 
using namespace std;

int main() {
    
    int userInput = 0;
    for(int i = 0; i < 10; i++) {
        cout << "Enter any number other than "<< i <<".\n";
        cin >> userInput;
        if (userInput == i) {
            cout << "Hey! You weren't supposed to enter "<< i << "!";
            return 0;
        }
    }
    cout << "Wow, you're more patient then I am, you win!";
    return 0;
}