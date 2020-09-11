/*
	Rebecca van der Lee
	C++ Fall 2020
	Due: 9/14/2020
	Lab 2 Exploring Output
	This lab is designed to get you familiar output to the command prompt using C++. Complete the following
	problems.

*/
	

#include<iostream> //library for cout
#include<string>//librar for string

using namespace std; 

int main()
{
	//prototype function of classes
	void printm1();
	void printm2();
	void printm3();
	void printt1();
	void printt2();
	void printw1();
	void printw2();
	void printw3();
	void printth1();

	//prototype function of days
	void printday1();
	void printday2();
	void printday3();
	void printday4();

	//prototype function of stars patterns
	void printrow1();
	void printrow2();

	//function definitions of time and class
	const string m1 = "    8:00  Macroeconomics";
	const string m2 = "    11:00 Calculus II";
	const string m3 = "    1:30  C++";
	const string t1 = "   9:00  Engineering problems";
	const string t2 = "   1:00  C++";
	const string w1 = " 11:00 Macroeconomics";
	const string w2 = " 11:00 Calculus II ";
	const string w3 = " 2:00  Classical Physics I";
	const string th1 = "  2:00  Classical Physics I";

	//function definitionns of class days
	const string day1 = "Monday";
	const string day2 = "Tuesday";
	const string day3 = "Wednesday";
	const string day4 = "Thursday";

	//function definition of star pattern
	const string row1 = "    *      *      *      *";
	const string row2 = "*      *      *      *";



	//prinitng my classes schedule

	cout << day1 << m1 << "\n"; //function call of days and classes
	cout << day1 << m2 << "\n";
	cout << day1 << m3 << "\n";
	cout << day2 << t1 << "\n";
	cout << day2 << t2 << "\n";
	cout << day3 << w1 << "\n";
	cout << day3 << w2 << "\n";
	cout << day3 << w3 << "\n";
	cout << day4 << th1 << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";



	//prinitng the star pattern
	cout << row1 << "\n"; //function call of row1 and row2
	cout << row2 << "\n";
	cout << row1 << "\n";
	cout << row2 << "\n";
	cout << row1 << "\n";
	cout << row2 << "\n";
	cout << row1 << "\n";
	cout << row2 << "\n";

	return 0;
}




	

