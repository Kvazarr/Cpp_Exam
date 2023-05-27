#include <cstdlib>
#include"Comp.h";
using namespace std;

void Comp::FirstStage()
{
	bool exit1 = false;
	bool exit2 = false;
	bool exit3 = false;
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