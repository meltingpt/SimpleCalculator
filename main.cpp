#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int choice; //Menu choice
	double	first_term,
			second_term,
			total; //output total

		//Display the menu and get the user's choice
		cout << "\nPlease make a selection: " << endl;
		cout << "1) Addition" << endl;
		cout << "2) Subtraction" << endl;
		cout << "3) Multiplication" << endl;
		cout << "4) Division" << endl;
		cout << "5) Quit" << endl << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		while (choice < 1 || choice > 5) //If user does not input 1-5, this will give them the option to make another selection
		{
			cout << "The valid choices are 1 through 5. " << endl;
			cout << "Make a selection from the menu: ";
			cin >> choice;
		}

		if (choice == 5) //Quit program
		{
			system("pause");
			return 0;
		}

		//Process the menu choice
		cout << "First term: ";
		cin >> first_term;
		cout << "Second term: ";
		cin >> second_term;

		//Do calculations based on the user's choice
		switch (choice) {
		  case 1: total = first_term + second_term;
			  cout << first_term << " + " << second_term << " = " << total << endl;
			  break;
		  case 2: total = first_term - second_term;
			  cout << first_term << " - " << second_term << " = " << total << endl;
			   break;
		  case 3: total = first_term * second_term;
			  cout << first_term << " * " << second_term << " = " << total << endl;
			  break;
		  case 4: total = first_term / second_term;
			  cout << first_term << " / " << second_term << " = " << total << endl;
			  break;
		}
	} while (choice >= 1 && choice <= 4);	

	system("pause");
	return 0;
}
