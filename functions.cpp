#include <iostream>
using namespace std;


void MyFunction(string Fname, string Lname) {

}

double AddNumbers(double num1, double num2) {

	return num1 + num2;
}

double DivideNumbers(double num1, double num2) {

	return num2 / num1;
}
double SubNumbers(double num1, double num2) {

	return num1 - num2;
}
double MultiplyNumbers(double num1, double num2) {

	return num1 * num2;
}

int main() {
	double num1, num2;
	string Fname, Lname;
	int Operator;

	MyFunction;
	cout << "Enter your name and surname" << endl;
	cin >> Fname >> Lname;

	cout << "Hello, your name is " << Fname << " and your surname is " << Lname << endl;
	cout << " Enter two numbers" << endl;
	cin >> num1 >> num2;
	cout << "Choose the type of operators which you want to use " << endl;

	cout << " 1: AddNumbers " << endl;
	cout << " 2: DivideNumbers " << endl;
	cout << " 3: SubNumbers " << endl;
	cout << " 4: MultiplyNumbers " << endl;
	cin >> Operator;

	switch (Operator) {

	case 1:
		cout << AddNumbers(num1, num2) << endl;
		break;

	case 2:
		if (num2 == 0) {
			cout << "You can't divide by zero please enter other number " << endl;
			cin >> num2;

			cout << DivideNumbers(num1, num2) << endl;
		}
		else {
			cout << DivideNumbers(num1, num2) << endl;

		}
		break;

	case 3:
		cout << SubNumbers(num1, num2) << endl;
		break;

	case 4:
		cout << MultiplyNumbers(num1, num2) << endl;
		break;


	default:
		cout << "Invalid operator selected, Please enter the number operator shown above " << endl;
	}




	return 0;
}