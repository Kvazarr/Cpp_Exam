#include <iostream>
#include"Fleet.h";
#include"Game.h";
#include"Settings.h";
using namespace std;

void Fleet::FirstStage(char choice)
{
	Fleet projectionC;
	Settings projectionD;
	bool exit = false;
	char sign;
	int coordinates = 0;

	if (choice=='v'||choice=='V')
	{
		while (!exit)
		{
			system("cls");

			projectionC.Functionality();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			ptr = &coordinates;
			
			if (sign == 'a' && coordinates < 6)
			{
				projectionD.Va(coordinates);
				exit = true;
			}
			else if (sign == 'b' && coordinates < 6)
			{
				projectionD.Vb(ptr);
				exit = true;
			}
			else if (sign == 'c' && coordinates < 6)
			{
				projectionD.Vc(ptr);
				exit = true;
			}
			else if (sign == 'd' && coordinates < 6)
			{
				projectionD.Vd(ptr);
				exit = true;
			}
			else if (sign == 'e' && coordinates < 6)
			{
				projectionD.Ve(ptr);
				exit = true;
			}
			else if (sign == 'f' && coordinates < 6)
			{
				projectionD.Vf(ptr);
				exit = true;
			}
			else if (sign == 'g' && coordinates < 6)
			{
				projectionD.Vg(ptr);
				exit = true;
			}
			else if (sign == 'h' && coordinates < 6)
			{
				projectionD.Vh(ptr);
				exit = true;
			}
			else if (sign == 'i' && coordinates < 6)
			{
				projectionD.Vi(ptr);
				exit = true;
			}
			else
			{
				cout << endl;
			    cout << "  Error. Enter the coordinates correctly, with a small letter! Also consider that the ship may not fit on the field, taking into account the entered coordinates" << endl;
				system("pause");
			}
		}
	}
	else if (choice == 'h' || choice == 'H')
	{
		while (!exit)
		{
			system("cls");

			projectionC.Functionality();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			ptr = &coordinates;

			if (sign == 'a')
			{
				projectionD.Ha(ptr);
				exit = true;
				
			}
			else if (sign == 'b')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 1; j < 5; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'c')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 2; j < 6; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'd')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 3; j < 7; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'e')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 4; j < 8; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'f')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 5; j < 9; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'g')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 6; j >= 3; j--)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'h')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 7; j >= 4; j--)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'i')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 8; j >= 5; j--)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else
			{
				cout << endl;
				cout << "  Error. Enter the coordinates correctly, with a small letter! Also consider that the ship may not fit on the field, taking into account the entered coordinates" << endl;
				system("pause");
			}
		}
	}
	else
	{
		cout << endl;
		cout << " Wrong action..." << endl;
		system("pause");
	}
}

void Fleet::SecondStage(char choice)
{
	
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

void Fleet::BattleField()
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
			if (field[i][j]==1)
			{
				cout << "*";
			}
			cout << "]";
		}
		iteration++;
		cout << endl;
	}
}