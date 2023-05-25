#include <iostream>
#include"Game.h";
#include"Fleet.h";
#include"Settings.h";
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