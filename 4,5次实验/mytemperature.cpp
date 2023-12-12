#include<iostream>
#include<iomanip>
using namespace std;


#include"mytemperature.h"

double celsius_to_fah(double cel)
{
	cout << "Celsius    Fahrenheit" << endl;
	do {
		cout << cel << "            " << setprecision(4)<<32.0 + (cel * 1.8) << endl;
		cel =cel-1.0;



	} while (cel > 30.0);
	return 0;




}
double fahrenheit_to_cels(double fah)
{
	cout << "Fahrenheit       Celsius" << endl;
	do {


		cout << fah << "            "  <<(fah - 32.0) / 1.8 << endl;
		fah -= 1.0;
	} while (fah > 30.0);
	return 0;







}