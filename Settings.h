#pragma once
using namespace std;

struct Settings
{
	int field[9][9]{};
	int access = 0;
	int temp = 0;
	bool check = false;
public:
	void FirstCheck_V(char sign, int coordinates, bool& check);
	void FirstCheck_H(char sign, int coordinates, bool& check);
	void SecondCheck_V(char sign, int coordinates, bool& check);
	void SecondCheck_H(char sign, int coordinates, bool& check);
	void ThirdCheck_V(char sign, int coordinates, bool& check);
	void ThirdCheck_H(char sign, int coordinates, bool& check);

	void Va_fourCell(int coordinates);
	void Vb_fourCell(int coordinates);
	void Vc_fourCell(int coordinates);
	void Vd_fourCell(int coordinates);
	void Ve_fourCell(int coordinates);
	void Vf_fourCell(int coordinates);
	void Vg_fourCell(int coordinates);
	void Vh_fourCell(int coordinates);
	void Vi_fourCell(int coordinates);
	void Ha_fourCell(int coordinates);
	void Hb_fourCell(int coordinates);
	void Hc_fourCell(int coordinates);
	void Hd_fourCell(int coordinates);
	void He_fourCell(int coordinates);
	void Hf_fourCell(int coordinates);
	void Hg_fourCell(int coordinates);
	void Hh_fourCell(int coordinates);
	void HI_fourCell(int coordinates);

	void Va_threeCell(int coordinates);
	void Vb_threeCell(int coordinates);
	void Vc_threeCell(int coordinates);
	void Vd_threeCell(int coordinates);
	void Ve_threeCell(int coordinates);
	void Vf_threeCell(int coordinates);
	void Vg_threeCell(int coordinates);
	void Vh_threeCell(int coordinates);
	void Vi_threeCell(int coordinates);
	void Ha_threeCell(int coordinates);
	void Hb_threeCell(int coordinates);
	void Hc_threeCell(int coordinates);
	void Hd_threeCell(int coordinates);
	void He_threeCell(int coordinates);
	void Hf_threeCell(int coordinates);
	void Hg_threeCell(int coordinates);
	void Hh_threeCell(int coordinates);
	void Hi_threeCell(int coordinates);

	void Va_twoCell(int coordinates);
	void Vb_twoCell(int coordinates);
	void Vc_twoCell(int coordinates);
	void Vd_twoCell(int coordinates);
	void Ve_twoCell(int coordinates);
	void Vf_twoCell(int coordinates);
	void Vg_twoCell(int coordinates);
	void Vh_twoCell(int coordinates);
	void Vi_twoCell(int coordinates);
	void Ha_twoCell(int coordinates);
	void Hb_twoCell(int coordinates);
	void Hc_twoCell(int coordinates);
	void Hd_twoCell(int coordinates);
	void He_twoCell(int coordinates);
	void Hf_twoCell(int coordinates);
	void Hg_twoCell(int coordinates);
	void Hh_twoCell(int coordinates);
	void Hi_twoCell(int coordinates);

	void Va_oneCell(int coordinates);
	void Vb_oneCell(int coordinates);
	void Vc_oneCell(int coordinates);
	void Vd_oneCell(int coordinates);
	void Ve_oneCell(int coordinates);
	void Vf_oneCell(int coordinates);
	void Vg_oneCell(int coordinates);
	void Vh_oneCell(int coordinates);
	void Vi_oneCell(int coordinates);
	void Ha_oneCell(int coordinates);
	void Hb_oneCell(int coordinates);
	void Hc_oneCell(int coordinates);
	void Hd_oneCell(int coordinates);
	void He_oneCell(int coordinates);
	void Hf_oneCell(int coordinates);
	void Hg_oneCell(int coordinates);
	void Hh_oneCell(int coordinates);
	void Hi_oneCell(int coordinates);

	void Show();
	void ShowEnemy();
	void ProjectionShow(char sign, int coordinates,int& access);
};
