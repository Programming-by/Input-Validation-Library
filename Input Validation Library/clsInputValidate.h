#pragma once

#include <iostream>
#include "clsDate.h"

using namespace std;

template <class T>
class clsInputValidate
{
	
public:

	static bool IsNumberBetween(T Number, T From, T To) {

		if (Number >= From && Number <= To)
			return true;
		else
			return false;
	}


	static bool IsDateBetween(T Date, T From, T To) {

	//Date>=From && Date<=To
		if ((clsDate::IsDate1AfterDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			&&
			(clsDate::IsDate1BeforeDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			)
		{
			return true;
		}

	//Date>=To && Date<=From
		
		if ((clsDate::IsDate1AfterDate2(Date, To) || clsDate::IsDate1EqualDate2(Date, To))
			&&
			(clsDate::IsDate1BeforeDate2(Date, From) || clsDate::IsDate1EqualDate2(Date, From))
			)
		{
			return true;
		}
	
		return false;

	}

	static T ReadNumber(string ErrorMessage = "Invalid Number,Enter again:\n") {
		T Number = 0;

		while (!(cin >> Number)) { 
			cin.clear();   
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');     
			cout << ErrorMessage;
		} 

		return Number;
	}
	static T ReadNumberBetween(T From , T To,string ErrorMessage = "\nNumber is not within range, please enter again\n") {
	
		T Number = ReadNumber();
		while (!IsNumberBetween(Number ,From, To)) {
			cout << ErrorMessage;
			cin >> Number;
		}
		return Number;

	}


	static bool IsValideDate(T Date) {

		return clsDate::IsValidDate(Date);
	}

};

	