#include <iostream>
#include <conio.h>

using namespace std;
void Ersem(char X[][80])
{
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			X[r][c] = ' ';
		}
	}

	for (int c = 0; c < 80; c++)
	{
		X[0][c] = 205;
		X[22][c] = 205;
		X[23][c] = 205;
	}
	for (int r = 0; r < 24; r++)
	{
		X[r][0] = 186;
		X[r][79] = 186;
	}

}
void Disp(char X[][80])
{
	system("cls");
	for (int r = 0; r < 24; r++)
	{
		for (int c = 0; c < 80; c++)
		{
			cout << X[r][c];
		}
	}
}

//void ErsemEnmy(char X[][80], int rEnmy, int cEnmy)
//
// 
// 
//
//void HarakEnmy(int& rEnmy, int& cEnmy, int& dirEnmy)
//{
	//if (dirEnmy == 1)
//	{
		//cEnmy++;
	//}
	//if (dirEnmy == -1)
	//{
	//	cEnmy--;
	//}

	//if (cEnmy == 79)
	//{
	//	dirEnmy = -1;
	//}
	//if (cEnmy == 0)
	//{
	//	dirEnmy = 1;
	//}

//}
void HarakHero(int& rHero, int& cHero, char mv)
{
	//if (mv == 'w')
	//{
		//rHero--;
	//}//
	///if (mv == 's')
	//{
		//rHero++;
	///}
	if (mv == 'a')
	{
		cHero--;
	}
	if (mv == 'd')
	{
		cHero++;
	}

}
void ErsemHero(char X[][80], int rHero, int cHero)
{
	X[rHero][cHero] = '^';
	X[rHero][cHero + 1] = ')';
	X[rHero][cHero - 1] = '(';
	X[rHero + 1][cHero] = 179;
	X[rHero+1][cHero + 1] = 92;
	X[rHero+1][cHero - 1] = '/';
	X[rHero + 2][cHero] = 179;
	X[rHero + 3][cHero + 1] = 92;
	X[rHero + 3][cHero - 1] = '/';
}
void  ErsmWeapon(char X[][80], int rHero, int cHero)
{
	X[rHero + 1][cHero + 1] = 194;
	X[rHero + 1][cHero + 2] = 196;
	X[rHero + 1][cHero + 3] = '>';
	X[rHero + 1][cHero - 1] = 218;
	
}
void HarakWeapon(int& rHero, int& cHero, char mv)          
{
	//if (mv == 'w')
	//{
		//rHero--;
	//}
	//if (mv == 's')
	//{
		//rHero++;
	//}
	if (mv == 'a')
	{
		cHero--;
	}
	if (mv == 'd')
	{
		cHero++;
	}
}
void ErsmReload(char X[][80], int rHero, int cHero)
{
	X[rHero + 1][cHero + 1] = 92;
	X[rHero + 2][cHero + 2] = 'v';
	X[rHero + 1][cHero - 1] = 218;
}
//void ErsmSlm(char X[][80], int rSlm, int cSlm)//
//{//

//}//


void main()
{
	int f1=0;
	char X[24][80];
	int rHero = 19, cHero = 2, rSlm, cSlm;

	for (;;)
	{
		for (; !_kbhit();)
		{
			Ersem(X);
			ErsemHero(X, rHero, cHero);
			/////هيبقي فى كوندشن جوا حرك هيرو يغيرها ل 1 ///////
			//if (f1 == 1)//
			//{//
				//ErsmWeapon(X, rHero, cHero);//
			//}//
			////هيبقي فى كوندشن ي ريلود السلاح له علاقه بعدد الطلق اللى هيخرج منه و يوقف الكوندشن بتاع ارسم ويبون و الشوتنج/////////
			///if (ct == 0)//
			///{//
			//	ErsmReload(X, rHero, cHero);//
			///}//
			Disp(X);
		}

		char ch = _getch();
		HarakHero(rHero, cHero, ch);
		/////هيبقي فى كوندشن جوا حرك هيرو يغيرها ل 1 ///////
		//if (f1 == 1)//
		//{//
			//HarakWeapon(rHero, cHero, ch);//
		//}//
		ErsemHero(X, rHero, cHero);
	}

}