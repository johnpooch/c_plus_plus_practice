
#include <iostream>
#include <limits>

using namespace std;


int main(){

    char drinks [5][7] = { "Coke", "Sprite", "Fanta", "Lilt", "Water" }; 
    int userInput = 0;
    
    cout << "Choose a beverage: \n\n1-Coke \n2-Sprite \n3-Fanta \n4-Lilt \n5-Water\n";
    cin >> userInput;
    
    while (userInput < 1 || userInput > 5) {
        cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    cout << "Invalid input. Must enter number between 1 and 5. Try again: ";
	    cin >> userInput;
    }
    cout << drinks[(userInput - 1)];
    return 0;
}