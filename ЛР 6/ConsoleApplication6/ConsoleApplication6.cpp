#include <iostream>
#include <complex>
#include <complex.h>


using namespace std;
/*typedef char name; 
typedef int square;
typedef int population;
typedef char currency;*/

struct Country
{
	char nm[30];
	int  sq;
	int pl;
	char cr[3];
};


bool operator == (Country x, Country y) //перегрузка ==
{
	return (x.sq == y.sq);
}

bool operator > (Country x, Country y) //перегрузка >
{
	return (x.sq > y.sq);
}

bool operator < (Country x, Country y) //перегрузка <
{
	return (x.sq < y.sq);
}

int main()
{
	Country con1 = {"Belarus", 207600, 9.5, 'BYN' };
	Country con2 = {"Russia", 17130000, 144.4, 'RUB'};
	Country con3 = {"Ukraine", 603628, 44.3, 'UAH' };

	if (con1 < con2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (con1 > con2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (con1 == con2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (con1 == con3)
		cout << "true" << endl;
	else cout << "false" << endl;

	return 0;
}







