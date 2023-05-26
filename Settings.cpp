#include<iostream>
#include"Settings.h";
#include"Fleet.h";
using namespace std;

void Settings::FirstCheck_V(char sign, int coordinates, bool& check)
{
	if (sign == 'a')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 0; j < 1; j++)
					{
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 5)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 0; j < 1; j++)
					{
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
					}
				}
				if (access == 7)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 0; j < 1; j++)
					{
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 5)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'b')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 1; j < 2; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 1; j < 2; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 1; j < 2; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'c')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 2; j < 3; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 2; j < 3; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 2; j < 3; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 2; j < 3; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'd')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 3; j < 4; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 3; j < 4; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 3; j < 4; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 3; j < 4; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'e')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 4; j < 5; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 4; j < 5; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 4; j < 5; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 4; j < 5; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'f')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 5; j < 6; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 5; j < 6; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 5; j < 6; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 5; j < 6; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'g')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 6; j < 7; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 6; j < 7; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 6; j < 7; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 6; j < 7; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'h')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 7; j < 8; j++)
					{
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 7; j < 8; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 7; j < 8; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 12)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 7; j < 8; j++)
					{
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j + 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j + 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 9)
				{
					check = true;
					return;
				}
			}
		}
	}
	else if (sign == 'i')
	{
		if (coordinates < 8)
		{
			if (coordinates == 1)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 8; j < 9; j++)
					{
						if (field[i + 3][j] == 0)
						{
							access++;
						}
						if (field[i + 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 5)
				{
					check = true;
					return;
				}
			}
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 8; j < 9; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 2][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 3][j] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 7)
		{
			if (coordinates == 8)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 8; j < 9; j++)
					{
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i + 1][j] == 0)
						{
							access++;
						}
					}
				}
				if (access == 7)
				{
					check = true;
					return;
				}
			}
			else if (coordinates == 9)
			{
				for (int i = coordinates - 1; i < coordinates; i++)
				{
					for (int j = 8; j < 9; j++)
					{
						if (field[i - 3][j] == 0)
						{
							access++;
						}
						if (field[i - 3][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 2][j - 1] == 0)
						{
							access++;
						}
						if (field[i - 1][j - 1] == 0)
						{
							access++;
						}
						if (field[i][j - 1] == 0)
						{
							access++;
						}
					}
				}
				if (access == 5)
				{
					check = true;
					return;
				}
			}
		}

	}
}

void Settings::FirstCheck_H(char sign, int coordinates, bool& check)
{
	if (sign == 'a')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
				}
			}
			if (access == 9)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'b')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 1; j < 2; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'c')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 2; j < 3; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 2; j < 3; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 2; j < 3; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'd')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 3; j < 4; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 3; j < 4; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 3; j < 4; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'e')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 4; j < 5; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 4; j < 5; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 4; j < 5; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'f')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 5; j < 6; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 5; j < 6; j++)
				{
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 5; j < 6; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 3] == 0)
					{
						access++;
					}
					if (field[i][j + 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'g')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 6; j < 7; j++)
				{
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 2] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 6; j < 7; j++)
				{
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
				}
			}
			if (access == 9)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 6; j < 7; j++)
				{
					if (field[i - 1][j + 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'h')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 7; j < 8; j++)
				{
					if (field[i][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 7; j < 8; j++)
				{
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
					if (field[i + 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 12)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 7; j < 8; j++)
				{
					if (field[i][j - 3] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j + 1] == 0)
					{
						access++;
					}
					if (field[i][j + 1] == 0)
					{
						access++;
					}
				}
			}
			if (access == 7)
			{
				check = true;
				return;
			}
		}
	}
	if (sign == 'i')
	{
		if (coordinates == 1)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 8; j < 9; j++)
				{
					if (field[i][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
		else if (coordinates > 1 && coordinates < 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 8; j < 9; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i + 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i + 1][j] == 0)
					{
						access++;
					}
				}
			}
			if (access == 9)
			{
				check = true;
				return;
			}
		}
		else if (coordinates == 9)
		{
			for (int i = coordinates - 1; i < coordinates; i++)
			{
				for (int j = 8; j < 9; j++)
				{
					if (field[i - 1][j] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 1] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 2] == 0)
					{
						access++;
					}
					if (field[i - 1][j - 3] == 0)
					{
						access++;
					}
					if (field[i][j - 3] == 0)
					{
						access++;
					}
				}
			}
			if (access == 5)
			{
				check = true;
				return;
			}
		}
	}
}

void Settings::SecondCheck_V(char sign, int coordinates, bool& check)
{

}

void Settings::SecondCheck_H(char sign, int coordinates, bool& check)
{

}

void Settings::Va_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vb_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vc_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vd_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ve_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vf_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vg_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vh_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vi_fourCell(int coordinates)
{
	if (coordinates > 6)
	{
		for (int i = coordinates - 1; i > coordinates - 5; i--)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 6)
	{
		for (int i = coordinates - 1; i < coordinates + 3; i++)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ha_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hb_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hc_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 2; j < 6; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hd_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 3; j < 7; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::He_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 4; j < 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hf_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 5; j < 9; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hg_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 6; j >= 3; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hh_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 7; j >= 4; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::HI_fourCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 8; j >= 5; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Va_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vb_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vc_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vd_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ve_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vf_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vg_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vh_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vi_threeCell(int coordinates)
{
	if (coordinates > 7)
	{
		for (int i = coordinates - 1; i > coordinates - 4; i--)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 7)
	{
		for (int i = coordinates - 1; i < coordinates + 2; i++)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ha_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hb_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hc_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 2; j < 5; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hd_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 3; j < 6; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::He_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 4; j < 7; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hf_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 5; j < 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hg_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 6; j < 9; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hh_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 7; j >= 5; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hi_threeCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 8; j >= 6; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Va_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 0;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vb_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 1;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vc_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 2;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vd_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 3;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ve_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 4;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vf_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 5;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vg_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 6;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vh_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 7;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Vi_twoCell(int coordinates)
{
	if (coordinates > 8)
	{
		for (int i = coordinates - 1; i > coordinates - 3; i--)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
	else if (coordinates <= 8)
	{
		for (int i = coordinates - 1; i < coordinates + 1; i++)
		{
			temp = 8;
			for (int j = temp; j <= temp; j++)
			{
				field[i][j] = 1;
			}
		}
	}
}

void Settings::Ha_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hb_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hc_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 2; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hd_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 3; j < 5; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::He_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 4; j < 6; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hf_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 5; j < 7; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hg_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 6; j < 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hh_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 7; j <= 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hi_twoCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 8; j >= 7; j--)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Va_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 0;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vb_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 1;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vc_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 2;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vd_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 3;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ve_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 4;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vf_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 5;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vg_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 6;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vh_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 7;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Vi_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		temp = 8;
		for (int j = temp; j <= temp; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Ha_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hb_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 1; j < 2; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hc_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 2; j < 3; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hd_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 3; j < 4; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::He_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 4; j < 5; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hf_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 5; j < 6; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hg_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 6; j < 7; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hh_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 7; j < 8; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Hi_oneCell(int coordinates)
{
	for (int i = coordinates - 1; i < coordinates; i++)
	{
		for (int j = 8; j < 9; j++)
		{
			field[i][j] = 1;
		}
	}
}

void Settings::Show()
{
	int ascii = 97;
	int iteration = 1;

	for (int i = 0; i < 9; i++)
	{
		cout << "  " << (char)ascii;
		ascii++;
	}

	cout << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << iteration;
		for (int j = 0; j < 9; j++)
		{
			if (field[i][j] == 1)
			{
				cout << "[x]";
			}
			else
			{
				cout << "[ ]";
			}
		}
		iteration++;
		cout << endl;
	}
}