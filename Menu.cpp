#include <iostream>
#include "Menu.h";
#include "Game.h";
using namespace std;

void Menu()
{
	Ships projectionA;
	char choise;
	bool exit = false;
	bool exit1 = false;
	bool exit2 = false;

	while (!exit)
	{
		exit1 = false;
		system("cls");
		cout << "\n\n\n\t\t\t\t\t////Choose a game mode\\\\\\\\\n\n\t\t\t\ta)Human-Computer;\t\tb)Computer-Computer;" << endl;
		cin >> choise;
		if (choise == 'a' || choise == 'A')
		{
			system("cls");
			cout << "/////////Hail to you, sea wolf\n//////Choose the side you want to fight for:\n\n\t\t\ta)The British Royal Navy;\t\tb)Pirates of the Caribbean seas;\n\t\t\tx)Exit" << endl;
			cin >> choise;
			if (choise == 'a' || choise == 'A')
			{
				while (!exit1)
				{
					system("cls");
					cout << "/////////Good choice. You are fighting for the Crown, and honour is your main companion\n//////Now choose your hero:\n\n\t\ta)Admiral Horatio Nelson;\t\tb)Admiral John Jervis;\t\tc)Admiral Edward Pellew;\n\t\t\tf)About each admiral;\t\t\tx)Back;" << endl;
					cout << endl;
					cin >> choise;
					if (choise == 'a' || choise == 'A')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessBritish(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'a';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessBritish(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'b' || choise == 'B')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessBritish(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'b';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessBritish(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'c' || choise == 'C')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessBritish(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'c';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessBritish(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'f' || choise == 'F')
					{
						projectionA.BritishCaps();
					}
					else if (choise == 'x' || choise == 'X')
					{
						exit1 = true;
					}
					else
					{
						cout << "Wrong choise...";
						system("pause");
					}
				}
			}
			else if (choise == 'b' || choise == 'B')
			{
				while (!exit1)
				{
					system("cls");
					cout << "/////////An ambitious choice he he he. So your soul desires gold and glory, and your heart belongs to the sea. Choose your own legend of the seas:\n\n\t\ta)Black beard;\t\tb)Bartholomew Roberts;\t\tc)Sam Bellamy;\n\t\t\tf)About each pirates;\t\t\tx)Back;" << endl;
					cin >> choise;
					if (choise == 'a' || choise == 'A')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessPirates(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'a';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessPirates(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'b' || choise == 'B')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessPirates(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'b';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessPirates(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'c' || choise == 'C')
					{
						system("cls");
						cout << "\n\n\n\t\t\t\t////Now choose how you want to arrange the ships\\\\\\\\\n\n\t\t\t\t\ta)By hand;\t\tb)Randomly;" << endl;
						cin >> choise;
						if (choise == 'a' || choise == 'A')
						{
							while (!exit2)
							{
								projectionA.Rules();
								projectionA.FourCell();
								projectionA.ThreeCell();
								projectionA.TwoCell();
								projectionA.OneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.ProcessPirates(choise, exit2);
							}
							return;
						}
						else if (choise == 'b' || choise == 'B')
						{
							while (!exit2)
							{
								choise = 'c';
								projectionA.Rules();
								projectionA.Random_fourCell();
								projectionA.Random_threeCell();
								projectionA.Random_twoCell();
								projectionA.Random_oneCell();
								projectionA.EnemyRandom_fourCell();
								projectionA.EnemyRandom_threeCell();
								projectionA.EnemyRandom_twoCell();
								projectionA.EnemyRandom_oneCell();
								projectionA.RandomProcessPirates(choise, exit2);
							}
							return;
						}
					}
					else if (choise == 'f' || choise == 'F')
					{
						projectionA.PiratesCaps();
					}
					else if (choise == 'x' || choise == 'X')
					{
						exit1 = true;
					}
					else
					{
						cout << "Wrong choise...";
						system("pause");
					}
				}
			}
			else if (choise == 'x' || choise == 'X')
			{
				system("cls");
				cout << "Happy hunting IRL" << endl;
				exit = true;
			}
			else
			{
				cout << "Wrong action..." << endl;
				system("pause");
			}
		}
		else if (choise == 'b' || choise == 'B')
		{
			projectionA.Rules();
			projectionA.EnemyRandom_fourCell();
			projectionA.EnemyRandom_threeCell();
			projectionA.EnemyRandom_twoCell();
			projectionA.EnemyRandom_oneCell();
			projectionA.Enemy2Random_fourCell();
			projectionA.Enemy2Random_threeCell();
			projectionA.Enemy2Random_twoCell();
			projectionA.Enemy2BRandom_oneCell();
			projectionA.Comp_Comp();
		}
	}
}