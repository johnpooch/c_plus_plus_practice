
#include <iostream>
#include <limits>

using namespace std;

int userInput = 0;
int length = 3;
int pancakeAmounts[3];
int highestValue = 0;
int lowestValue = 0;
int highestIndex = 0;
int lowestIndex = 0;



int main() {
    for (int i = 0; i < length; i++) {
        cout << "Number of pancakes eaten by person " << i + 1 << " for breakfast: ";
        cin >> userInput;
        pancakeAmounts[i] = userInput;
    }
    for (int i = 0; i < length; i++) {
        if (pancakeAmounts[i] > highestValue) {
            highestValue = pancakeAmounts[i];
            highestIndex = i;
        }
    }
    cout << "Most pancakes eaten by person " << highestIndex + 1 << "\n";

    int lowestIndex = 0;
    for (int i = 1; i < length; i++) {
        if(pancakeAmounts[i] < pancakeAmounts[lowestIndex])
            lowestIndex = i;    
    }
    cout << "Least pancakes eaten by person " << lowestIndex + 1 << "\n";
}