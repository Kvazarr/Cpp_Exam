#pragma once
#include"Game.h";
#include"Settings.h";
using namespace std;

struct Fleet
{
	Settings projectionD;
public:
	void FirstStage(char choice);
	void SecondStage(char choice);
	void Functionality();
};