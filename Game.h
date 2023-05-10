#pragma once
#include<string>
#include "Fleet.h";
using namespace std;

struct Ships
{
public:
	Fleet projectionB;
	char choice;
	void Rules();
	void FourCell();
};