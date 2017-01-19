#include <iostream>
using namespace std;

int main()
{
	double number1 = 7.3, number2;
	double *fPtr = &number1;
	cout << *fPtr << endl;
	number2 = *fPtr ;
	cout << number2 << endl;
	cout << &number1 << endl;
	cout << fPtr << endl;
	system("pause");
}