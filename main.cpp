#include "functions.h"


int main()
{
	int choice;
	cout << "Enter Your choice : " << endl;
	cin >> choice;

	if (choice == 1)
	{

		int n;
		cout << "Enter a number : ";
		cin >> n;
		cout << "Sum of square" << endl;
	}
	else if (choice == 2)
	{
		int n;
		cout << "Enter a number : ";
		cin >> n;
		cout << "Factorial of number is : " << findFactorial(n) << endl;
	}



	return 0;
}