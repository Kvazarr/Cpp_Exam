#pragma once
#include"Fleet.h";
using namespace std;

struct Settings
{
	int field[9][9];
	int temp = 0;
public:
	void Va(int coordinates);
	void Vb(int* ptr);
	void Vc(int* ptr);
	void Vd(int* ptr);
	void Ve(int* ptr);
	void Vf(int* ptr);
	void Vg(int* ptr);
	void Vh(int* ptr);
	void Vi(int* ptr);

	void Ha(int* ptr);
	void Hb(int* ptr);
	void Hc(int* ptr);
	void Hd(int* ptr);
	void He(int* ptr);
	void Hf(int* ptr);
	void Hg(int* ptr);
	void Hh(int* ptr);
	void Hi(int* ptr);

	void Show();
};