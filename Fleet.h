#pragma once
#include"Game.h";
using namespace std;

struct Fleet
{
	int* ptr = nullptr;;
	int field[9][9];
public:
	void FirstStage(char choice);
	void SecondStage(char choice);
	void Functionality();
	void BattleField();
};