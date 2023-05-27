#pragma once
#include"Settings.h";
using namespace std;

struct Fleet
{
	Settings projectionD;
public:
	void FirstStage(char choice);
	void SecondStage(char choice, bool& cycles);
	void ThirdStage(char choice, bool& cycles);
	void FourthStage(char choice, bool& cycles);
	void Functionality();;
};