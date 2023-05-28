#pragma once
#include"Fleet.h";
#include"Comp.h";
using namespace std;

struct Ships
{
	Fleet projectionB;
	Comp projectionC;
	Comp projectionF;
	Comp projectionG;
	bool cycles;
	bool cycles2;
	bool cycles3;
public:
	char choice;

	void RandomProcessBritish(char choise, bool& exit2);
	void ProcessBritish(char choise, bool& exit2);
	void RandomProcessPirates(char choise, bool& exit2);
	void ProcessPirates(char choise, bool& exit2);
	void Comp_Comp();
	void Rules();
	void BritishCaps();
	void PiratesCaps();
	void FourCell();
	void ThreeCell();
	void TwoCell();
	void OneCell();
	void Random_fourCell();
	void Random_threeCell();
	void Random_twoCell();
	void Random_oneCell();
	void EnemyRandom_fourCell();
	void EnemyRandom_threeCell();
	void EnemyRandom_twoCell();
	void EnemyRandom_oneCell();
	void Enemy2Random_fourCell();
	void Enemy2Random_threeCell();
	void Enemy2Random_twoCell();
	void Enemy2BRandom_oneCell();
};