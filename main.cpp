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
	int ticketNumber;
	int ticketDay;
	int ticketMonth;
	int ticketYear;
	string clientID;
	string issueDescrip;

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
	bool ShowWorkTicket();

	// Mutators(setters):
	void SetNumber();
	void SetDay();
	void SetMonth();
	void SetYear();
	void SetID();
	void SetDescription();
	void SetWorkTicket();


};

// main function
int main()
{

}

// class definition section


