#include <iostream>
#include <cstdlib>
#include"Game.h";
using namespace std;

void Ships::Rules()
{
	system("cls");
	cout << "\t\t///This is your battlefield where your ships will be located. Your opponent will have the same.\\\\\\" << endl;
	cout << endl;

	projectionB.Functionality();

	cout << endl;
	cout << " Now let's place your ships on the battlefield. In your shipyard you have: \n#four one-cell ships;\n#three two-cell ships;\n#two three-cell ships;\n#one four-cell ship;" << endl;
	cout << endl;
	cout << " Place your ships using the field coordinates.The placement of ships will go from larger to smaller." << endl;
	cout << "Place the ship so that all the cells are either vertically or horizontally behind each other" << endl;
	system("pause");
}

void Ships::BritishCaps()
{
	system("cls");
	cout << endl;
	cout << "\t#Admiral Horatio Nelson - was an outstanding British naval commander, Vice-Admiral, 1st Baronet Viscount Nelson, \t1st Duke of Brontë.";
	cout << "He was noted for his outstanding leadership skills and mastery of strategy." << endl;
	cout << endl;
	cout << "\t#Admiral John Jervis - British admiral, 1st Earl of St Vincent, participated in the Revolutionary and Napoleonic \twars." << endl;
	cout << endl;
	cout << "\t#Admiral Edward Pellew - English admiral, 1st Earl of St Vincent, Commander-in-Chief of the British Mediterranea \tFleet." << endl;
	cout << endl;
	system("pause");
}

void Ships::PiratesCaps()
{
	system("cls");
	cout << endl;
	cout << "\t#Black beard - Edward Tich was a famous British pirate who operated in the Caribbean in 1716-1718.";
	cout << "\n\tDespite his piracy in the UK, he is considered a national folk hero" << endl;
	cout << endl;
	cout << "\t#Bartholomew Roberts - is one of the most successful and famous pirates of all time, also known as Black Bart.  " << endl;
	cout << "\tIn just three years, he managed to capture more than 400 ships. He operated in the Atlantic and the Caribbean." << endl;;
	cout << endl;
	cout << "\t#Sam Bellamy - also known as \"Black Sam Bellamy\", was an English pirate who was active in the early 18th century" << endl;
	cout << "\tHe is known as one of the most successful pirates in history and one of the faces of the Golden Age of Piracy." << endl;
	cout << endl;
	system("pause");
}

void Ships::FourCell()
{
	system("cls");
	cout << "Four-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]: ";
	cin >> choice;
	projectionB.FirstStage(choice);
}

void Ships::ThreeCell()
{
	for (int i = 0; i < 2; i++)
	{
		cycles = false;
		while (!cycles)
		{
			system("cls");
			cout << "Three-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]:";
			cin >> choice;
			projectionB.SecondStage(choice, cycles);
		}
	}
}

void Ships::TwoCell()
{
	for (int i = 0; i < 3; i++)
	{
		cycles = false;
		while (!cycles)
		{
			system("cls");
			cout << "Two-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]: ";
			cin >> choice;
			projectionB.ThirdStage(choice, cycles);
		}
	}
}

void Ships::OneCell()
{
	for (int i = 0; i < 4; i++)
	{
		cycles = false;
		while (!cycles)
		{
			system("cls");
			cout << "One-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]: ";
			cin >> choice;
			projectionB.FourthStage(choice, cycles);
		}
	}
}

void Ships::Random_fourCell()
{
	projectionC.FirstStage();
}

void Ships::Random_threeCell()
{
	for (int i = 0; i < 2; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionC.SecondStage(cycles);
		}
	}
}

void Ships::Random_twoCell()
{
	for (int i = 0; i < 3; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionC.ThirdStage(cycles);
		}
	}
}

void Ships::Random_oneCell()
{
	for (int i = 0; i < 4; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionC.ThirdStage(cycles);
		}
	}
}

void Ships::EnemyRandom_fourCell()
{
	projectionF.FirstStage();
}

void Ships::EnemyRandom_threeCell()
{
	for (int i = 0; i < 2; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionF.SecondStage(cycles);
		}
	}
}

void Ships::EnemyRandom_twoCell()
{
	for (int i = 0; i < 3; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionF.ThirdStage(cycles);
		}
	}
}

void Ships::EnemyRandom_oneCell()
{
	for (int i = 0; i < 4; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionF.ThirdStage(cycles);
		}
	}
}

void Ships::Enemy2Random_fourCell()
{
	projectionG.FirstStage();
}

void Ships::Enemy2Random_threeCell()
{
	for (int i = 0; i < 2; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionG.SecondStage(cycles);
		}
	}
}

void Ships::Enemy2Random_twoCell()
{
	for (int i = 0; i < 3; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionG.ThirdStage(cycles);
		}
	}
}

void Ships::Enemy2BRandom_oneCell()
{
	for (int i = 0; i < 4; i++)
	{
		cycles = false;
		while (!cycles)
		{
			projectionF.ThirdStage(cycles);
		}
	}
}

void Ships::ProcessBritish(char choise, bool& exit2)
{
	char coordinates1;
	int coordonates2 = 0;
	int coordinates3 = 0;
	int access = 0;
	int PlayerA = 0;
	int PlayerB = 0;

	if (choise == 'a' || choise == 'A')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Black beard" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'b' || choise == 'B')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Bartholomew Roberts" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'c' || choise == 'C')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Edward Pellew\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Sam Bellamy" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
}

void Ships::RandomProcessBritish(char choise, bool& exit2)
{
	char coordinates1;
	int coordonates2 = 0;
	int coordinates3 = 0;
	int access = 0;
	int PlayerA = 0;
	int PlayerB = 0;

	if (choise == 'a' || choise == 'A')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Black beard" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'b' || choise == 'B')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}


				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Bartholomew Roberts" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'c' || choise == 'C')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Edward Pellew\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\Sam Bellamy" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! You're a lousy admiral..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
}

void Ships::ProcessPirates(char choise, bool& exit2)
{
	char coordinates1;
	int coordonates2 = 0;
	int coordinates3 = 0;
	int access = 0;
	int PlayerA = 0;
	int PlayerB = 0;

	if (choise == 'a' || choise == 'A')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Black beard\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'b' || choise == 'B')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Bartholomew Roberts\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral John Jervis" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'c' || choise == 'C')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Sam Bellamy\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Edward Pellew" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionB.projectionD.Show();
					projectionF.projectionE.ShowEnemy();

					projectionB.projectionD.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
}

void Ships::RandomProcessPirates(char choise, bool& exit2)
{
	char coordinates1;
	int coordonates2 = 0;
	int coordinates3 = 0;
	int access = 0;
	int PlayerA = 0;
	int PlayerB = 0;

	if (choise == 'a' || choise == 'A')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Black beard\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Horatio Nelson" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 = true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'b' || choise == 'B')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Bartholomew Roberts\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral John Jervis" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.ShowEnemy();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
	else if (choise == 'c' || choise == 'C')
	{
		cycles = false;
		while (!cycles)
		{
			cycles2 = false;
			cycles3 = false;

			while (!cycles2)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "\\\\\\Sam Bellamy\nTo exit the game, press x. To restart the game, press r." << endl;
					cout << endl;

					projectionC.projectionE.Show();
					projectionF.projectionE.Show();

					cout << endl;
					cout << "Your turn. \nEnter Alphabetical coordinates for the salvo: ";
					cin >> coordinates1;

					if (coordinates1 == 'x')
					{
						exit2 = true;
						return;
					}
					else if (coordinates1 == 'r')
					{
						return;
					}

					cout << "Enter digital coordinates for the salvo: ";
					cin >> coordonates2;

					projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == false)
					{
						system("cls");
						cout << "\n\n\n\n\t\t\t\t\tYou cannot shoot at the same coordinates!" << endl;
						cout << endl;
						system("pause");
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerA++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles2 = true;
				}
				system("pause");
			}

			if (PlayerA == 20)
			{
				cout << "You win! Congratulations..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}

			while (!cycles3)
			{
				cycles4 = false;
				access = 0;

				while (!cycles4)
				{
					system("cls");
					cout << "///Admiral Edward Pellew" << endl;
					cout << endl;

					coordinates3 = 1 + rand() % 9;
					if (coordinates3 == 1)
					{
						coordinates1 = 'a';
					}
					else if (coordinates3 == 2)
					{
						coordinates1 = 'b';
					}
					else if (coordinates3 == 3)
					{
						coordinates1 = 'c';
					}
					else if (coordinates3 == 4)
					{
						coordinates1 = 'd';
					}
					else if (coordinates3 == 5)
					{
						coordinates1 = 'e';
					}
					else if (coordinates3 == 6)
					{
						coordinates1 = 'f';
					}
					else if (coordinates3 == 7)
					{
						coordinates1 = 'g';
					}
					else if (coordinates3 == 8)
					{
						coordinates1 = 'h';
					}
					else if (coordinates3 == 9)
					{
						coordinates1 = 'i';
					}

					coordonates2 = 1 + rand() % 9;

					projectionC.projectionE.Show();
					projectionF.projectionE.Show();

					projectionC.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

					if (cycles4 == true)
					{
						cout << endl;
						cout << "The opponent's move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
					}
				}

				if (access == 1)
				{
					cout << endl;
					cout << "\t\t\t\t\t\tHit!" << endl;
					PlayerB++;
				}
				else
				{
					cout << endl;
					cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
					cycles3 = true;
				}
				system("pause");
			}

			if (PlayerB == 20)
			{
				cout << "You Lose! Go to the bottom of the kraken..." << endl;
				cout << endl;
				system("pause");
				exit2 = true;
				return;
			}
		}
	}
}

void Ships::Comp_Comp()
{
	char coordinates1;
	int coordonates2 = 0;
	int coordinates3 = 0;
	int access = 0;
	int PlayerA = 0;
	int PlayerB = 0;

	cycles = false;
	while (!cycles)
	{
		cycles2 = false;
		cycles3 = false;

		while (!cycles2)
		{
			cycles4 = false;
			access = 0;

			while (!cycles4)
			{
				system("cls");
				cout << "///Admiral Edward Pellew" << endl;
				cout << endl;

				coordinates3 = 1 + rand() % 9;
				if (coordinates3 == 1)
				{
					coordinates1 = 'a';
				}
				else if (coordinates3 == 2)
				{
					coordinates1 = 'b';
				}
				else if (coordinates3 == 3)
				{
					coordinates1 = 'c';
				}
				else if (coordinates3 == 4)
				{
					coordinates1 = 'd';
				}
				else if (coordinates3 == 5)
				{
					coordinates1 = 'e';
				}
				else if (coordinates3 == 6)
				{
					coordinates1 = 'f';
				}
				else if (coordinates3 == 7)
				{
					coordinates1 = 'g';
				}
				else if (coordinates3 == 8)
				{
					coordinates1 = 'h';
				}
				else if (coordinates3 == 9)
				{
					coordinates1 = 'i';
				}

				coordonates2 = 1 + rand() % 9;

				projectionF.projectionE.Show();
				projectionG.projectionE.ShowEnemy();

				projectionG.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

				if (cycles4 == true)
				{
					cout << endl;
					cout << "The Admiral Edward Pellew move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
				}
			}

			if (access == 1)
			{
				cout << endl;
				cout << "\t\t\t\t\t\tHit!" << endl;
				PlayerA++;
			}
			else
			{
				cout << endl;
				cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
				cycles2 = true;
			}
			system("pause");
		}

		if (PlayerA == 20)
		{
			cout << "Admiral Edward Pellew!" << endl;
			cout << endl;
			system("pause");
			return;
		}

		while (!cycles3)
		{
			cycles4 = false;
			access = 0;

			while (!cycles4)
			{
				system("cls");
				cout << "\\\\\\Sam Bellamy" << endl;
				cout << endl;

				coordinates3 = 1 + rand() % 9;
				if (coordinates3 == 1)
				{
					coordinates1 = 'a';
				}
				else if (coordinates3 == 2)
				{
					coordinates1 = 'b';
				}
				else if (coordinates3 == 3)
				{
					coordinates1 = 'c';
				}
				else if (coordinates3 == 4)
				{
					coordinates1 = 'd';
				}
				else if (coordinates3 == 5)
				{
					coordinates1 = 'e';
				}
				else if (coordinates3 == 6)
				{
					coordinates1 = 'f';
				}
				else if (coordinates3 == 7)
				{
					coordinates1 = 'g';
				}
				else if (coordinates3 == 8)
				{
					coordinates1 = 'h';
				}
				else if (coordinates3 == 9)
				{
					coordinates1 = 'i';
				}

				coordonates2 = 1 + rand() % 9;

				projectionG.projectionE.Show();
				projectionF.projectionE.ShowEnemy();

				projectionF.projectionE.ProjectionShow(coordinates1, coordonates2, access, cycles4);

				if (cycles4 == true)
				{
					cout << endl;
					cout << "The Sam Bellamy move. Coordinates of the salvo: " << coordinates1 << coordonates2 << endl;
				}
			}

			if (access == 1)
			{
				cout << endl;
				cout << "\t\t\t\t\t\tHit!" << endl;
				PlayerB++;
			}
			else
			{
				cout << endl;
				cout << "\t\t\t\t\t\tDidn't hit :(" << endl;
				cycles3 = true;
			}
			system("pause");
		}

		if (PlayerB == 20)
		{
			cout << "Sam Bellamy Pellew!" << endl;
			cout << endl;
			system("pause");
			return;
		}
	}
}