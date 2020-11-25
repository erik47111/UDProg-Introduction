#include "std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b) // objektum referenciát fogunk át adni// az "a" egy új név lessz az x objektumra
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}
void swap_double(double& a, double& b) // double ra műödik de a drill intre kéri
{
	double temp;
	
	temp = a;
	a = b;
	b = temp;
}
/*
void swap_cr(const int& a, const int& b) // nem fordiltja le mert a és b csak olvasható referenciák
{										 //--> oka: megprobáltunk értéket rendelni neki const a& nak -||-
	int temp;
	
	temp = a;
	a = b;
	b = temp;
}
*/

int main()
{
	int x = 7;
	int y = 9;

	swap_v(x,y); // nm cserél, csak az argumentumaink másolatát kezeli (void fv)
	cout <<"x: " << x << " y: " << y << endl;

	swap_r(x,y); // forditás van és cserél 
	cout <<"x: " << x << " y: " << y << endl;

//	swap_v(7,9);// fordit DE nm tudjuk kiírni mert nincs inicializálva és amikor befejezi az x y értéke vissza áll a normálra


	const int cx = 7;
	const int cy = 9;

	swap_v(cx,cy);// fordirja de nm cserél 
	cout << "cx: " << cx << "  cy: " << cy << '\n';
/*
	swap_r(cx,cy); //const fix adat csdak olvasható nem változtatható hibát jelezz
	cout << "cx: " << cx << "  cy: " << cy << '\n';
	
	
*///*Az alap hiba ,hogy a fv inteket kezel és ez double és így info loss van .)
	double dx = 7.7;
	double dy = 9.9;
   //cout << "dx: " << dx << " dy2:" << dy << '\n';
	//swap_v(dx,dy); // leforditja de a fv csak a másolatokat kezeli igy nm történik csere
	//cout << "dx: " << dx << " dy:" << dy << '\n';
	//swap_r(dx,dy); // U.a a problléma mint elözzőnél double int --> info loss lessz

	cout << "dx: " << dx << " dy:" << dy << '\n'; 


// a problléma mint elözzőnél double int --> info loss lenne de megcsináltam doublere
	double dz = 7.7;
	double du = 9.9;

	//swap_double(dz,du); 
	cout << "dz: " << dz << " du:" << du << '\n';
	swap_double(dz,du); 

	cout << "dz: " << dz << " du:" << du << '\n'; 


	return 0;
}