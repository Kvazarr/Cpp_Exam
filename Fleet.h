#pragma once
#include"Game.h";
using namespace std;

struct Fleet
{
public:
	int field[9][9]{};
	void FirstStage(char choice);
	void Functionality();
};