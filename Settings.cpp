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

void Settings::Vb(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 1;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vc(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 2;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vd(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 3;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ve(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 4;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vf(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 5;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vg(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 6;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vh(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 7;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vi(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates + 3; i++)
	{
		temp = 8;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ha(int coordinates)
{
	for (int i = coordinates -1; i < coordinates; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hb(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hc(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 2; j < 6; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hd(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 3; j < 7; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::He(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 4; j < 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hf(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 5; j < 9; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hg(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 6; j >= 3; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hh(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 7; j >= 4; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hi(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 8; j >= 5; j--)
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
			cout << "[ ";
			if (field[i][j] == 1)
			{
				cout << "x";
			}
			cout << "]";
		}
		iteration++;
		cout << endl;
	}
}