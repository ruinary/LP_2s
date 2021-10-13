#include <iostream>
#include <math.h>


int fun()
{
	return 7;
}


int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	

	int n = 2;


	bool ba=true, bb=false;

	const char cha[] = "a";

	const wchar_t wcha[2] = L"а";

	short Xa = 9 + n, Xb = -(9 + n);

	//X to hex
	//B

	//-X to hex
	//-B

	//32767 to hex (max short)
	short SHMa = 0x7fff;

	//-32767 to hex (min short)
	short SHm = -0x7fff;

	//65535 to hex (max un. short)
	unsigned short unSHMa = 0xffff;

	//0 to hex (min un. short)
	unsigned short  unSHma = 0x0;

	int Ya = 10 + n, Yb = -(10 + n);

	//Y to hex
	//C
	
	//-Y to hex
	//-C

	//-2147483647 to hex (min int)
	int Im = -0x7fffffff;

	//2147483647 to hex (max int)
	int IM = 0x7fffffff;

	//0 to hex (min un. int)
	unsigned int unIm = 0x0;

	//4294967295 to hex (max un. int)
	unsigned int inIM = 0xffffffff;

	long Za = 11 + n, Zb = -(11 + n);

	//Z to hex
	//D
	
	//-Z to hex
	//-D

	//2147483647 to hex (max long)
	long Lm = 0x7fffffff;

	//-2147483647 to hex (min long)
	long lm = -0x7fffffff;

	//0 to hex (min un. long)
	unsigned long unLm = 0;

	//4 294 967 295 to hex (max un. long)
	unsigned long unLM = 0xffffffff;

	float Sa = 1.0 + n, Sb = -(1.0 + n);

	//S to hex
	//3

	//-S to hex
	//-3

	int nan1 = sqrt(-1); 
	double nan2 = log(0); 
	//int nan3 = 0/0;

	/*char ch[2] = "s";
	char *с = &ch;
	*c += 3;
	char &uс = ch;*/

	char ch = 'w';
	char* pch = &ch;
	*pch += 3;
	char& lch = ch;

	wchar_t wcht = L'f';
	wchar_t* wc = &wcht;
	*wc += 3;
	wchar_t &uwc = wcht;

	short sh = 3;
	short *s = &sh;
	*s += 3;
	short &us = sh;


	int i = 1;
	int* ii = &i;
	*ii += 3;
	int &uii = i;

	float fl = 8.5;
	float *f = &fl;
	*f += 3;
	float &uf = fl;

	double dbl = 100.58; 
	double *db = &dbl;
	*db += 3;
	double &udb = dbl;

	int (*fcn)() = fun;

}