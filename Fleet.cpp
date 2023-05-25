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

	if (choice == 'v' || choice == 'V')
	{
		while (!exit)
		{
			system("cls");

			projectionC.Functionality();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			if (sign == 'a' && coordinates >= 1)
			{
				projectionD.Va_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1)
			{
				projectionD.Vb_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1)
			{
				projectionD.Vc_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1)
			{
				projectionD.Vd_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1)
			{
				projectionD.Ve_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1)
			{
				projectionD.Vf_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1)
			{
				projectionD.Vg_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1)
			{
				projectionD.Vh_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1)
			{
				projectionD.Vi_fourCell(coordinates);
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

			if (sign == 'a' && coordinates >= 1)
			{
				projectionD.Ha_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1)
			{
				projectionD.Hb_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1)
			{
				projectionD.Hc_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1)
			{
				projectionD.Hd_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1)
			{
				projectionD.He_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1)
			{
				projectionD.Hf_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1)
			{
				projectionD.Hg_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1)
			{
				projectionD.Hh_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1)
			{
				projectionD.HI_fourCell(coordinates);
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

void Fleet::SecondStage(char choice,bool& cycles)
{
	Fleet projectionC;
	bool exit = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		while (!exit)
		{
			system("cls");

			projectionC.Functionality();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			if (sign == 'a' && coordinates >= 1)
			{
				projectionD.Va_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1)
			{
				projectionD.Vb_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1)
			{
				projectionD.Vc_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1)
			{
				projectionD.Vd_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1)
			{
				projectionD.Ve_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1)
			{
				projectionD.Vf_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1)
			{
				projectionD.Vg_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1)
			{
				projectionD.Vh_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1)
			{
				projectionD.Vi_threeCell(coordinates);
				cycles = true;
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
		system("cls");

		projectionC.Functionality();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		while (!exit)
		{
			if (sign == 'a' && coordinates >= 1)
			{
				projectionD.Ha_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1)
			{
				projectionD.Hb_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1)
			{
				projectionD.Hc_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1)
			{
				projectionD.Hd_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1)
			{
				projectionD.He_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1)
			{
				projectionD.Hf_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1)
			{
				projectionD.Hg_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1)
			{
				projectionD.Hh_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1)
			{
				projectionD.Hi_threeCell(coordinates);
				cycles = true;
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

void Fleet::ThirdStage(char choice, bool& cycles)
{

	Fleet projectionC;
	bool exit = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		system("cls");

		projectionC.Functionality();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1)
		{
			projectionD.Va_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1)
		{

		}
		else if (sign == 'c' && coordinates >= 1)
		{

		}
		else if (sign == 'd' && coordinates >= 1)
		{

		}
		else if (sign == 'e' && coordinates >= 1)
		{

		}
		else if (sign == 'f' && coordinates >= 1)
		{

		}
		else if (sign == 'g' && coordinates >= 1)
		{

		}
		else if (sign == 'h' && coordinates >= 1)
		{

		}
		else if (sign == 'i' && coordinates >= 1)
		{

		}
		else
		{
			cout << endl;
			cout << "  Error. Enter the coordinates correctly, with a small letter! Also consider that the ship may not fit on the field, taking into account the entered coordinates" << endl;
			system("pause");
		}
	}
	else if (choice == 'h' || choice == 'H')
	{
		system("cls");

		projectionC.Functionality();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1)
		{
			projectionD.Ha_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1)
		{

		}
		else if (sign == 'c' && coordinates >= 1)
		{

		}
		else if (sign == 'd' && coordinates >= 1)
		{

		}
		else if (sign == 'e' && coordinates >= 1)
		{

		}
		else if (sign == 'f' && coordinates >= 1)
		{

		}
		else if (sign == 'g' && coordinates >= 1)
		{

		}
		else if (sign == 'h' && coordinates >= 1)
		{

		}
		else if (sign == 'i' && coordinates >= 1)
		{
			projectionD.Hi_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else
		{
			cout << endl;
			cout << "  Error. Enter the coordinates correctly, with a small letter! Also consider that the ship may not fit on the field, taking into account the entered coordinates" << endl;
			system("pause");
		}
	}
	else
	{
		cout << endl;
		cout << " Wrong action..." << endl;
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