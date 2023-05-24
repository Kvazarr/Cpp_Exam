#include <iostream>
#include"Fleet.h";
#include"Game.h";
#include"Settings.h";
using namespace std;

void Fleet::FirstStage(char choice)
{
	Fleet projectionC;
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
			
			if (sign == 'a' && coordinates < 6)
			{
				projectionD.Va(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'b' && coordinates < 6)
			{
				projectionD.Vb(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'c' && coordinates < 6)
			{
				projectionD.Vc(coordinates);
				exit = true;
			}
			else if (sign == 'd' && coordinates < 6)
			{
				projectionD.Vd(coordinates);
				exit = true;
			}
			else if (sign == 'e' && coordinates < 6)
			{
				projectionD.Ve(coordinates);
				exit = true;
			}
			else if (sign == 'f' && coordinates < 6)
			{
				projectionD.Vf(coordinates);
				exit = true;
			}
			else if (sign == 'g' && coordinates < 6)
			{
				projectionD.Vg(coordinates);
				exit = true;
			}
			else if (sign == 'h' && coordinates < 6)
			{
				projectionD.Vh(coordinates);
				exit = true;
			}
			else if (sign == 'i' && coordinates < 6)
			{
				projectionD.Vi(coordinates);
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
				projectionD.Ha(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
				
			}
			else if (sign == 'b')
			{
				projectionD.Hb(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'c')
			{
				projectionD.Hc(coordinates);
				exit = true;
			}
			else if (sign == 'd')
			{
				projectionD.Hd(coordinates);
				exit = true;
			}
			else if (sign == 'e')
			{
				projectionD.He(coordinates);
				exit = true;
			}
			else if (sign == 'f')
			{
				projectionD.Hf(coordinates);
				exit = true;
			}
			else if (sign == 'g')
			{
				projectionD.Hg(coordinates);
				exit = true;
			}
			else if (sign == 'h')
			{
				projectionD.Hh(coordinates);
				exit = true;
			}
			else if (sign == 'i')
			{
				projectionD.Hi(coordinates);
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