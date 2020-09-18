/*
* This is the main.cpp file for the WorkTicket vs file for lab 1. In this file we will add the functionality for the basic work ticket environment, which will store the 
* ticket number, date, id, name of the customer and the problem caused to them. 
* 
* Developer Name: Kaifkhan Vakil 
* Student Id: 100772820.
* Date: 18th September, 2020.
* 
*/


#include <iostream>
#include <iomanip>			
#include <sstream> 			
#include <cmath>			
#include <limits>			
#include <stdexcept>		
#include "MyConsoleInput.h" // ConsoleInput::ReadInteger()

using namespace std;
// class declaration section 
class WorkTicket
{
private:
	int myticketNumber;
	int myticketDay;
	int myticketMonth;
	int myticketYear;
	string myclientID;
	string myissueDescrip;

public:
	//Constructor: 
	WorkTicket(int ticketNumber = 0, int ticketDay = 1, int ticketMonth = 1, int ticketYear = 2000, string clientID = "", string issueDescrip = "");

	// Accesors(getters):
	int GetNumber();
	int GetDay();
	int GetMonth();
	int GetYear();
	string GetID();
	string GetDescription();
	string ShowWorkTicket() const;

	// Mutators(setters):
	void SetNumber(int ticketNumber);
	void SetDay(int ticketDay);
	void SetMonth(int ticketMonth);
	void SetYear(int ticketYear);
	void SetID(string clientID);
	void SetDescription(string issueDescrip);
	bool SetWorkTicket(int ticketNumber , int ticketDay, int ticketMonth , int ticketYear , string clientID, string issueDescrip );


};

// main function
int main()
{

}

// class definition section

WorkTicket::WorkTicket(int ticketNumber, int ticketDay, int ticketMonth, int ticketYear, string clientID, string issueDescrip)
{
	SetWorkTicket(ticketNumber, ticketDay, ticketMonth, ticketYear, clientID, issueDescrip);
}

bool WorkTicket::SetWorkTicket(int ticketNumber, int ticketDay, int ticketMonth, int ticketYear, string clientID, string issueDescrip)
{
	SetNumber(ticketNumber);
	SetDay(ticketDay);
	SetMonth(ticketMonth);
	SetYear(ticketYear);
	SetID(clientID);
	SetDescription(issueDescrip);

	return true;
}

void WorkTicket::SetNumber(int ticketNumber)
{
	if (ticketNumber > 0)
	{
		myticketNumber = ticketNumber;
	}
	else
	{
		throw invalid_argument("Error! Please enter positive whole number");
	}
}

void WorkTicket::SetDay(int ticketDay)
{
	if (ticketDay >= 1 && ticketDay <= 31)
	{
		myticketDay = ticketDay;
	}
	else
	{
		throw invalid_argument("Error! Please enter the day between 1 to 31");
	}
}

void WorkTicket::SetMonth(int ticketMonth)
{
	if (ticketMonth >= 1 && ticketMonth <= 12)
	{
		myticketMonth = ticketMonth;
	}
	else
	{
		throw invalid_argument("Error! Please enter the month between 1 to 12");
	}
}

void WorkTicket::SetYear(int ticketYear)
{
	if (ticketYear >= 2000 && ticketYear <= 2099)
	{
		myticketYear = ticketYear;
	}
	else
	{
		throw invalid_argument("Error! Please enter the Year between 2000 to 2099");
	}
}

void WorkTicket::SetID(string clientId)
{
	if (clientId.length() >= 1)
	{
		myclientID= clientId;
	}
	else
	{
		throw invalid_argument("Error! Please enter the ID in the alphanumeric format");
	}
}

void WorkTicket::SetDescription(string issueDescrip)
{
	if (issueDescrip.length() >= 1)
	{
		myissueDescrip = issueDescrip;
	}
	else
	{
		throw invalid_argument("Error! Please enter the description, do not keep it empty");
	}
}

int WorkTicket::GetNumber()
{
	return myticketNumber;
}

int WorkTicket::GetDay()
{
	return myticketDay;

}

int WorkTicket::GetMonth()
{
	return myticketMonth;
}

int WorkTicket::GetYear()
{
	return myticketYear;
}
 
string WorkTicket::GetID()
{
	return myclientID;
}

string WorkTicket::GetDescription()
{
	return myissueDescrip;
}

string WorkTicket::ShowWorkTicket() const
{

}