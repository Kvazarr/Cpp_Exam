#include <iostream>
#include "Menu.h";
#include "Game.h";
using namespace std;

void Menu()
{
	Ships projection;
	char choise;
	bool exit = false;
	bool exit1 = false;

	while (!exit)
	{
		exit1 = false;

		system("cls");
		cout << "/////////Hail to you, sea wolf\n//////Choose the side you want to fight for:\n\n\t\t\ta)The British Royal Navy;\t\tb)Pirates of the Caribbean seas;\n\t\t\tx)Exit"<<endl;
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
					cout << "\t\t///This is your battlefield where your ships will be located. Your opponent will have the same.\\\\\\" << endl;;
					projection.Battle();
					cout << "///Now let's place your ships on the battlefield. In your shipyard you have: \n#four one-cell ships [ ] [ ] [ ] [ ] \n\n#three two-cell ships [ ][ ] [ ][ ] [ ][ ] \n\n#two three-cell ships [ ][ ][ ] [ ][ ][ ] \n\n#one four-cell ship [ ][ ][ ][ ] " << endl;
					system("pause");
				}

				else if (choise == 'b' || choise == 'B')
				{

				}
				else if (choise == 'c' || choise == 'C')
				{

				}
				else if (choise == 'f' || choise == 'F')
				{
					system("cls");
					cout << endl;
					cout << "\t#Admiral Horatio Nelson - was an outstanding British naval commander, Vice-Admiral, 1st Baronet Viscount Nelson, \t1st Duke of Brontë.";
					cout << "He was noted for his outstanding leadership skills and mastery of strategy." << endl;
					cout << endl;
					cout << "\t#Admiral John Jervis - British admiral, 1st Earl of St Vincent, participated in the Revolutionary and Napoleonic \twars."<<endl;
					cout << endl;
					cout << "\t#Admiral Edward Pellew - English admiral, 1st Earl of St Vincent, Commander-in-Chief of the British Mediterranea \tFleet." << endl;
					cout << endl;
					system("pause");
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