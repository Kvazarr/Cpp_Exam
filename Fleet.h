#pragma once
#include"Game.h";
using namespace std;

struct Fleet
{
public:
	Ships projectionC;
	int field[9][9]{};
	void FirstStage();
	void Functionality();
};