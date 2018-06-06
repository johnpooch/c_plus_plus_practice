#include <iostream>
#include <limits>
 
using namespace std;


int main() {

    cout << "Please enter grade: ";

	int grade = 0;
	while(!(cin >> grade)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Must enter integer value. Try again: ";
	}
	
	while (grade > 100 || grade < 0) {
	    cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    cout << "Invalid input. Must enter integer between 0 and 100. Try again: ";
	    cin >> grade;
	}

    if (grade >= 90 && grade <= 100) {
       cout << "Your grade: 'A' \n";
    }
    else if (grade >= 80 && grade <= 89) {
       cout << "Your grade: 'B' \n";
    }
    else if (grade >= 70 && grade <= 79) {
       cout << "Your grade: 'C' \n";
    }
    else if (grade >= 60 && grade <= 69) {
       cout << "Your grade: 'D' \n";
    }
    else {
       cout << "Your grade: 'F' \n";
    }
   
    if (grade == 100){
       cout << "You got a perfect score!";
    }
    return 0;
}
