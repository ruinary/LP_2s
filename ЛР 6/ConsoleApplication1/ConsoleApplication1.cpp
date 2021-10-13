#include <iostream>
#include <complex>
#include <complex.h>
using namespace std;
typedef short day; //диапозон short -32 768 до 32 768
typedef short month;
typedef short year;

struct Date
{
	day dd;
	month mm;
	year yyyy;
};


bool operator == (Date x, Date y) //перегрузка ==
{
	return (x.yyyy == y.yyyy && x.mm == y.mm && x.dd == y.dd);
}

bool operator > (Date x, Date y) //перегрузка >
{
	return (x.yyyy > y.yyyy || (x.yyyy == y.yyyy && x.mm > y.mm) || (x.yyyy == y.yyyy && x.mm == y.mm && x.dd > y.dd));
}

bool operator < (Date x, Date y) //перегрузка <
{
	return (x.yyyy < y.yyyy || (x.yyyy == y.yyyy && x.mm < y.mm) || (x.yyyy == y.yyyy && x.mm == y.mm && x.dd < y.dd));
}

int main()
{
	Date date1 = { 7,1,1980 };
	Date date2 = { 7,2,1993 };
	Date date3 = { 7,1,1980 };

	if (date1 < date2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (date1 > date2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (date1 == date2)
		cout << "true" << endl;
	else cout << "false" << endl;

	if (date1 == date3)
		cout << "true" << endl;
	else cout << "false" << endl;

	return 0;
}







