#pragma once
#include"Fleet.h";
using namespace std;

struct Settings
{
	int field[9][9];
	int temp = 0;
public:
	void Va(int coordinates);
	void Vb(int coordinates);
	void Vc(int coordinates);
	void Vd(int coordinates);
	void Ve(int coordinates);
	void Vf(int coordinates);
	void Vg(int coordinates);
	void Vh(int coordinates);
	void Vi(int coordinates);

	void Ha(int coordinates);
	void Hb(int coordinates);
	void Hc(int coordinates);
	void Hd(int coordinates);
	void He(int coordinates);
	void Hf(int coordinates);
	void Hg(int coordinates);
	void Hh(int coordinates);
	void Hi(int coordinates);

	void Show();
};