#include <iostream>
#include"Fleet.h";
#include"Game.h";
using namespace std;

void Fleet::FirstStage(char choice)
{
	Fleet projectionC;
	bool exit = false;
	char sign;
	int arr[4]{};
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

			if (sign == 'a' && coordinates < 6)
			{
				for (int i = coordinates-1; i <coordinates+3; i++)
				{
					for (int j = 0; j < 1;)
					{
						field[i][j] = 1;
					}
				}
				projectionC.BattleField();
				system("pause");
				exit = true;
			}
			else if (sign == 'b' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 1; j < 2;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'c' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 2; j < 3;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'd' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 3; j < 4;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'e' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 4; j < 5;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'f' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 5; j < 6;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'g' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 6; j < 7;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'h' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 7; j < 8;)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
			}
			else if (sign == 'i' && coordinates < 6)
			{
				for (int i = coordinates - 1; i < coordinates + 3; i++)
				{
					for (int j = 8; j < 9;)
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

			if (sign == 'a')
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 0; j < 4; j++)
					{
						field[i][j] = 1;
					}
				}
				exit = true;
				projectionC.BattleField();
				system("pause");
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
			if (field[i][j] = 1)
			{
				cout << "*";
			}
			cout << "]";
		}
		iteration++;
		cout << endl;
	}
}