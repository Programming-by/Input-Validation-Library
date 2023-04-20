
#include <iostream>
#include "clsInputValidate.h"
#include "clsDate.h"
using namespace std;

int main()
{

	cout << clsInputValidate<int>::IsNumberBetween(5, 1, 10) << endl;
	cout << clsInputValidate<double>::IsNumberBetween(5.5, 1.3, 10.5) << endl;

	cout << clsInputValidate<clsDate>::IsDateBetween(clsDate(), clsDate(8, 12, 2022), clsDate(31, 12, 2022)) << endl;
	cout << clsInputValidate<clsDate>::IsDateBetween(clsDate(),clsDate(31,12,2022), clsDate(8, 12, 2022)) << endl;

	cout << "\nPlease Enter a Number:\n";
	int x = clsInputValidate<int>::ReadNumber("Invalid Number,Enter again:\n");
	cout << "x= " << x;

	cout << "\nPlease Enter a Number Between 1 and 5:\n";
	int y = clsInputValidate<int>::ReadNumberBetween(1,5,"Number is not with range,Please enter again:\n");
	cout << "y= " << y;

	cout << "\nPlease Enter a Double Number:\n";
	double a = clsInputValidate<double>::ReadNumber("Invalid Number,Enter again:\n");
	cout << "a= " << a;

	/*cout << "\nPlease Enter a Number Between 1 and 5:\n";
	double b = clsInputValidate::ReadDblNumberBetween(1, 5, "Number is not with range,Please enter again:\n");
	cout << "b= " << b;*/

	cout << endl << clsInputValidate<clsDate>::IsValideDate(clsDate(35, 12, 2022)) << endl;


	system("pause>0");
	return 0;
}
