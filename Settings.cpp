#include<iostream>
#include"Settings.h";
#include"Fleet.h";
using namespace std;

void Settings::Va(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 0;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vb(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 1;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vc(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 2;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vd(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 3;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ve(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 4;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vf(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 5;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vg(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 6;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vh(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 7;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vi(int* ptr)
{
	for (int i = (*ptr) - 1; i < (*ptr) + 3; i++)
	{
		temp = 8;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ha(int* ptr)
{
	for (int i = (*ptr)-1; i < (*ptr); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Show()
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
			cout << "[";
			if (field[i][j] == 1)
			{
				cout << "*";
			}
			cout << "]";
		}
		iteration++;
		cout << endl;
	}
}