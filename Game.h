#pragma once
#include"Fleet.h";
using namespace std;

struct Ships
{
	Fleet projectionB;
	bool cycles;
public:
	char choice;
	void Rules();
	void BritishCaps();
	void PiratesCaps();
	void FourCell();
	void ThreeCell();
	void TwoCell();
};