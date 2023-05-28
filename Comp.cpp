#include <cstdlib>
#include"Comp.h";
using namespace std;

void Comp::FirstStage()
{
	bool exit1 = false;
	bool exit2 = false;
	bool exit3 = false;
	int coordinates = 0;

	while (!exit1)
	{
		random = 1 + rand() % 2;

		if (random == 1)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Va_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 2)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vb_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 3)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vc_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 4)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vd_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 5)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Ve_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 6)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vf_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 7)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vg_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 8)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vh_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 9)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Vi_fourCell(coordinates);
							return;
						}
					}
				}

			}
		}
		else if (random == 2)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Ha_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 2)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hb_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 3)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hc_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 4)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hd_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 5)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.He_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 6)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hf_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 7)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hg_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 8)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.Hh_fourCell(coordinates);
							return;
						}
					}
				}
				else if (random == 9)
				{
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.HI_fourCell(coordinates);
							return;
						}
					}
				}
			}
		}
	}
}

void Comp::SecondStage(bool& cycles)
{
	bool exit1 = false;
	bool exit2 = false;
	bool exit3 = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	while (!exit1)
	{
		random = 1 + rand() % 2;

		if (random == 1)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Va_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vb_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vc_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vd_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ve_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vf_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vg_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vh_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vi_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
		else if (random == 2)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ha_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hb_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hc_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hd_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.He_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hf_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hg_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hh_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.FirstCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hi_threeCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
	}
}

void Comp::ThirdStage(bool& cycles)
{
	bool exit1 = false;
	bool exit2 = false;
	bool exit3 = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	while (!exit1)
	{
		random = 1 + rand() % 2;

		if (random == 1)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Va_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vb_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vc_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vd_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ve_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vf_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vg_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vh_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vi_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
		else if (random == 2)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ha_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hb_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hc_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hd_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.He_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hf_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hg_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hh_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.SecondCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hi_twoCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
	}
}

void Comp::FourthStage(bool& cycles)
{
	bool exit1 = false;
	bool exit2 = false;
	bool exit3 = false;
	bool check = false;
	char sign;
	int coordinates = 0;

	while (!exit1)
	{
		random = 1 + rand() % 2;

		if (random == 1)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Va_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vb_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vc_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vd_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ve_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vf_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vg_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vh_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_V(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Vi_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
		else if (random == 2)
		{
			while (!exit2)
			{
				random = 1 + rand() % 9;

				if (random == 1)
				{
					sign = 'a';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Ha_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 2)
				{
					sign = 'b';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hb_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 3)
				{
					sign = 'c';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hc_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 4)
				{
					sign = 'd';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hd_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 5)
				{
					sign = 'e';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.He_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 6)
				{
					sign = 'f';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hf_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 7)
				{
					sign = 'g';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hg_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 8)
				{
					sign = 'h';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hh_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
				else if (random == 9)
				{
					sign = 'i';
					exit3 = false;
					while (!exit3)
					{
						coordinates = 1 + rand() % 9;
						if (coordinates >= 1 && coordinates < 10)
						{
							projectionE.ThirdCheck_H(sign, coordinates, check);
							if (check == true)
							{
								projectionE.Hi_oneCell(coordinates);
								cycles = true;
								return;
							}
							else if (check == false)
							{
								exit3 = true;
							}
						}
					}
				}
			}
		}
	}
}