#include <iostream>
#include"Fleet.h";
#include"Game.h";
using namespace std;

void Fleet::FirstStage(char choice)
{
	int arr[4]{};
	if (choice=='v'||choice=='V')
	{
		
	}
	else if (choice=='h'||choice=='H')
	{
		
	}
	else
	{
		system("cls");
		cout << "Wrong action..." << endl;
		system("pause");
	}
}

void Fleet::Functionality()
{
	int ascii = 97;
	int iteration = 1;

	for (int i = 0; i < 9; i++)
	{
		cout << "  " << (char)ascii;
		ascii++;
	}

	cout << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << iteration;
		for (int j = 0; j < 9; j++)
		{
			cout << "[ ]";
		}
		iteration++;
		cout << endl;
	}
}