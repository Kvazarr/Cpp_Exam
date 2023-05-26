#include <iostream>
#include"Fleet.h";
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

			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Va_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vb_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vc_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vd_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Ve_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vf_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vg_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vh_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
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

			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Ha_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hb_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hc_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hd_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.He_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hf_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hg_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hh_fourCell(coordinates);
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
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

void Fleet::SecondStage(char choice, bool& cycles)
{
	Fleet projectionC;
	bool exit = false;
	bool check = false;
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

			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates,check);
				if (check == true)
				{
					projectionD.Va_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area."<<endl;
				system("pause");
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vb_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vc_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vd_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Ve_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vf_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vg_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vh_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vi_threeCell(coordinates);
					cycles = true;
					exit = true;
				}
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
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
			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Ha_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hb_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hc_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hd_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.He_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hf_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hg_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hh_threeCell(coordinates);
				cycles = true;
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
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

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Va_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vb_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vc_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vd_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Ve_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vf_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vg_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vh_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vi_twoCell(coordinates);
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
	else if (choice == 'h' || choice == 'H')
	{
		system("cls");

		projectionC.Functionality();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Ha_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hb_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hc_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hd_twoCell(coordinates);
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.He_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hf_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hg_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hh_twoCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
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

void Fleet::FourthStage(char choice, bool& cycles)
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

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Va_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vb_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vc_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vd_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Ve_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vf_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vg_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vh_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Vi_oneCell(coordinates);
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
	else if (choice == 'h' || choice == 'H')
	{
		system("cls");

		projectionC.Functionality();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Ha_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hb_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hc_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hd_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.He_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hf_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hg_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hh_oneCell(coordinates);
			cycles = true;
			exit = true;
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.Hi_oneCell(coordinates);
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