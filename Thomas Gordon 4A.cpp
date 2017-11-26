//beginning
//////////////////////////////////////////
//Name: Thomas Gordon,                  //
//Date: 10-27-17,                       //
//Assignment: Homework 3A race program, //
//class: COP2000,                       //
//class time: 6:30pm - 9:00pm           //
//////////////////////////////////////////

//this program is ment to call funtions through int main() and then perform various outputs and calculations

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void welcome();
void inputval(string, string, string, double, double, double);
void userinput(string, string, string, double, double, double);  // these are the prototypes
double raceAverage(double, double, double);

int main() // i tried to call all of the functions in int main() to be able to output most of the work 
{
	string person_in_race1;
	string person_in_race2;
	string person_in_race3;
	double set_time1 = 0;// setting them to zero was the only thing i could think of doing at the time
	double set_time2 = 0;
	double set_time3 = 0;

	welcome();//function call
	inputval(person_in_race1, person_in_race2, person_in_race3, set_time1, set_time2, set_time3);
	userinput(person_in_race1, person_in_race2, person_in_race3, set_time1, set_time2, set_time3);//function call but does not work except for the user input althought claculation and if statements do not work at all for some reason
	raceAverage(set_time1, set_time2, set_time3); //i think this wants to allways set to zero and output zero at the end of program

	system("pause");
	return 0;
}

void welcome()// this function does work its just annoying 
{
	cout << "*****************************************************************" << endl;
	cout << "Welcome to Race Results Program" << endl;
	cout << "You are asked to enter the three racers names and their associated race time." << endl << endl;

	cout << "Please enter a real number for race time (the race time must be greater than 0)." << endl << endl;

	cout << "Program Developed By: Thomas Gordon." << endl;
	cout << "*****************************************************************" << endl;
}

void userinput(string person_in_race1, string person_in_race2, string person_in_race3, double set_time1, double set_time2, double set_time3) //honestly i tried my best with this function for some reason what ever syntax or puntuation i use or how ever i say it my computer or i can simply not do if or switch statements becuaase there are always errors whenever i use them
{
	// this part works:
	cout << "what is the first name of racer #1" << endl; // 1st racer
	cin >> (person_in_race1);
	cout << "what is the time racer #1 finished" << endl;
	cin >> set_time1;
	cout << "what is the first name of racer #2" << endl; // 2nd racer
	cin >> (person_in_race2);
	cout << "what is the time racer #2 finished" << endl;
	cin >> set_time2;
	cout << "what is the first name of racer #3" << endl; // 3rd racer
	cin >> (person_in_race3);
	cout << "what is the time racer #3 finished" << endl;
	cin >> set_time3;
}

void inputval(string person_in_race1, string person_in_race2, string person_in_race3, double set_time1, double set_time2, double set_time3)
{
	if (set_time1 > 0)
	{
		set_time1 == true;
		cout << person_in_race1 << " won!!" << endl;
	}
	else set_time1 == false;

	if (set_time2 > 0)
	{
		set_time2 == true;
		cout << person_in_race2 << " won!!" << endl;
	}
	else set_time2 == false;

	if (set_time3 > 0)
	{
		set_time3 == true;
		cout << person_in_race3 << " won!!" << endl;
	}
	else set_time3 == false;

	if (set_time1 && set_time2 > 0)
	{
		set_time1 == true && set_time2 == true;
		cout << person_in_race1 << " and " << person_in_race2 << " both won!!" << endl;
	}
	else set_time1 == false && set_time2 == false;

	if (set_time2 && set_time3 > 0)
	{
		set_time2 == true && set_time3 == true;
		cout << person_in_race2 << " and " << person_in_race3 << " both won!!" << endl;
	}
	else set_time2 == false && set_time3 == false;

	if (set_time3 && set_time1 > 0)
	{
		set_time3 == true && set_time1 == true;
		cout << person_in_race3 << " and " << person_in_race1 << " both won!!" << endl;
	}
	else set_time3 == false && set_time1 == false;

	if (set_time1 && set_time2 && set_time3 != 0 || set_time1 && set_time2 && set_time3 == 0)
	{
		cout << "error you entered the wrong number " << endl;
		cout << "enter a race time higher than 0" << endl;
	}
	else cout << "everyone has won, no one is a winner" << endl;
}

//ithink for some reason this function always wants to output zero and also calculate up to zero no matter what input you use what ever happened if you could direct me that would be great for future purposes
double raceAverage(double set_time1, double set_time2, double set_time3) 
{

	double average = (set_time1 + set_time2 + set_time3) / 3;
	cout << average << endl;

	return average;
	//the program does run though its just i dont know how to fix most of the bugs so i commented whats happens in the code 
}
//end