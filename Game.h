#pragma once
#include <iostream>
using namespace std;

struct Ships
{
private:
	int* field = new int[300] {};
public:
	void Battle();
};