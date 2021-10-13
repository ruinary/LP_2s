#include "FST.h"
#include <iostream>

using namespace std;

//a(b) + ((c+d+e)f)*b+g

int main() {
	setlocale(LC_CTYPE, "Russian");

	char line1[] = "abbg";
	FST::FST_linecheck(line1);

	char line2[] = "abcfdfefbg";
	FST::FST_linecheck(line2);

	char line3[] = "abbcfcfdfdfefefbbg";
	FST::FST_linecheck(line3);

	char line4[] = "abbbcfcfcfdfdfdfefefefbbbg";
	FST::FST_linecheck(line4);

	char line5[] = "abcfcfcfcfbg";
	FST::FST_linecheck(line5);

	char line6[] = "abcfcfdfdfefefbg";
	FST::FST_linecheck(line6);

	char line7[] = "abbbcfdfdfbg";
	FST::FST_linecheck(line7);

	char line8[] = "acfdfefg";				//в цепочке нет обязательного символа 'b'
	FST::FST_linecheck(line8);

	char line9[] = "abcfdfefb";			//более одного символа 'g'
	FST::FST_linecheck(line9);

	return 0;
}
