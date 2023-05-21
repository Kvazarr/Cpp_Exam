#include <iostream>
#include"Game.h";
#include"Fleet.h";
using namespace std;

void Ships::Rules()
{
	Fleet projectionB;
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

void Ships::FourCell()
{
	Fleet projectionB;
	system("cls");
	cout << "Four-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]: ";
	cin >> choice;
	projectionB.FirstStage(choice);
}

void Ships::ThreeCell()
{
	Fleet projectionB;
	system("cls");
	cout << "Three-cell ship: select the position of the ship: vertical or horizontal.\nEnter next[v][h]:";
	cin >> choice;
	projectionB.SecondStage(choice);
}