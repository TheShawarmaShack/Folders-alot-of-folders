//This was made by Shrabel EN, u can tell because of how it's written
//By da way, this only works on OSs of the Windows family (Desktop OSs) because of platform exclusive commands
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

//Lets make a print to screen function cuz y not? cout is overrated anyways.
void print(string e, bool f = true);
//Countdown that i am literally only going to use once
void countdown(int num);

int main()
{
	print("What is ur naem? ", false);
	string name = "";
	cin >> name;

	print("Nice to meet you, " + name + ".");

	print("How many folders to you want to make? ", false);
	long long longShlong = 0;
	cin >> longShlong;

	print("What would you like to write in the deep file: ", false);
	string message = "";
	cin >> message;

	print("What would you like to call the file: ", false);
	string title = "";
	cin >> title;
	cout << endl;

	print("The root of all these folders and files will be: C:\\Users\\Public");
	countdown(10);


	print("Creating " + to_string(longShlong) + " folders",false);
	Sleep(500);
	print(".", false);
	Sleep(500);
	print(".", false);
	Sleep(500);
	print(".");
	Sleep(500);

	string directory = "C:\\Users\\Public";
	for (int i = 1; i <= longShlong; i += 1)
	{
		directory = directory + "\\" + to_string(i);
		print(directory);
		CreateDirectory(directory.c_str(), NULL);
	}


	string filename = directory + "\\" + title + ".txt";

	ofstream dMessage;
	dMessage.open(filename);
	dMessage << message;
	dMessage.close();

	system("pause");
	return 0;
}


void print(string e, bool f)
{
	if (f)
		cout << e << endl;
	else
		cout << e;
}

void countdown(int num)
{
	for (int j = num; j >= 1; j -= 1)
	{
		num = j;
		print(to_string(num)+ " ", false);
		Sleep(1000);
	}
}