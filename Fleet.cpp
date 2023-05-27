#include <iostream>
#include"Fleet.h";
using namespace std;

void Fleet::FirstStage(char choice)
{
	bool exit = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		while (!exit)
		{
			system("cls");

			projectionD.Show();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Va_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vb_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vc_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vd_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Ve_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vf_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vg_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vh_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Vi_fourCell(coordinates);
				projectionD.Show();
				system("pause");
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

			projectionD.Show();

			cout << "Select the alphabetical coordinates: ";
			cin >> sign;
			cout << "Enter the numeric coordinates: ";
			cin >> coordinates;

			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Ha_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hb_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hc_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hd_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.He_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hf_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hg_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.Hh_fourCell(coordinates);
				projectionD.Show();
				system("pause");
				exit = true;
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.HI_fourCell(coordinates);
				projectionD.Show();
				system("pause");
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
	bool exit = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		while (!exit)
		{
			system("cls");

			projectionD.Show();

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
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vb_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vc_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vd_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Ve_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vf_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vg_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vh_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_V(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Vi_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
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

		projectionD.Show();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		while (!exit)
		{
			if (sign == 'a' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Ha_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hb_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hc_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hd_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.He_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hf_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hg_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hh_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
			}
			else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
			{
				projectionD.FirstCheck_H(sign, coordinates, check);
				if (check == true)
				{
					projectionD.Hi_threeCell(coordinates);
					projectionD.Show();
					system("pause");
					cycles = true;
					exit = true;
				}
				else if (check == false)
				{
					cout << " Fatal! It is not possible to position a ship in this area." << endl;
					system("pause");
				}
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
	bool exit = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		system("cls");

		projectionD.Show();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Va_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vb_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vc_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vd_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Ve_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vf_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vg_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vh_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vi_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
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

		projectionD.Show();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Ha_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hb_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hc_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hd_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.He_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hf_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hg_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hh_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.SecondCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hi_twoCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
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
	bool exit = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	if (choice == 'v' || choice == 'V')
	{
		system("cls");

		projectionD.Show();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Va_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vb_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vc_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vd_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Ve_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vf_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vg_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vh_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_V(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Vi_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
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

		projectionD.Show();

		cout << "Select the alphabetical coordinates: ";
		cin >> sign;
		cout << "Enter the numeric coordinates: ";
		cin >> coordinates;

		if (sign == 'a' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Ha_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'b' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hb_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'c' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hc_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'd' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hd_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'e' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.He_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'f' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hf_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'g' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hg_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'h' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hh_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
		}
		else if (sign == 'i' && coordinates >= 1 && coordinates < 10)
		{
			projectionD.ThirdCheck_H(sign, coordinates, check);
			if (check == true)
			{
				projectionD.Hi_oneCell(coordinates);
				projectionD.Show();
				system("pause");
				cycles = true;
				exit = true;
			}
			else if (check == false)
			{
				cout << " Fatal! It is not possible to position a ship in this area." << endl;
				system("pause");
			}
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