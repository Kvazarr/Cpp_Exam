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

	while (!exit)
	{
		exit1 = false;

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
					projectionA.Rules();
					projectionA.FourCell();
					projectionA.Test();
				}

				else if (choise == 'b' || choise == 'B')
				{
					projectionA.Rules();
				}
				else if (choise == 'c' || choise == 'C')
				{
					projectionA.Rules();
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

				}
				else if (choise == 'b' || choise == 'B')
				{

				}
				else if (choise == 'c' || choise == 'C')
				{

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
}