

#include<iostream>
#include<string>

using namespace std;

void printclass1();//prototype
void printclass2();
void printclass3();
void printt1();
void printt2();
void printw3();
void printth1();


const string class1 = "    8:00  Macroeconomics";
const string class2 = "    11:00 Calculus II";
const string class3 = "    1:30  C++";
const string t1= "    9:00  Engineering problems";
const string t2 = "    1:00  C++";
const string w3 = "    2:00  Classical Physics";
const string th1 = "    2:00  Classical Physics";

int main()
{
	cout << "Monday ";
	printclass1();
	cout << "\n";
    cout << "Monday ";
	printclass2();
	cout << "\n";
	cout<< "Monday ";
	printclass3();
	cout << "\n";
	cout << "Tuesday ";
	printt1();
	cout << "\n";
	cout << "Tueday ";
	printt2();
	cout << "\n";
	cout << "Wednesday ";
	printclass1();
	cout << "\n";
	cout << "Wednesday";
	printclass2();
	cout << "\n";
	cout << "Wednesday";
	printw3();
	cout << "\n";
	cout << "Thursdays";
	printth1();
	cout << "\n";
	return 0;

}

void printclass1()
{
	cout << class1;

}

void printclass2()
{
	cout << class2;
}

void printclass3()
{
	cout << class3;
}

void printt1()
{
	cout <<t1;
}













