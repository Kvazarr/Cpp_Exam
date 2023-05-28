#pragma once
#include"Settings.h";
using namespace std;

struct Comp
{
	Settings projectionE;
	int random = 0;
	void FirstStage();
	void SecondStage(bool& cycles);
	void ThirdStage(bool& cycles);
	void FourthStage(bool& cycles);
};