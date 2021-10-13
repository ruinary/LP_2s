#include <iostream>
#include <conio.h>
#include <string>


using namespace std;

char* UpperW1251(char* destination, char* source)
{	
	for (int i = 0; i < strlen(source); i++)
	{
		destination[i] = toupper(source[i]);

		//if (((source[i] >= 0x61) && (source[i] <= 0x7a)) || ((source[i] >= 0xe0) && (source[i] <= 0xff)))
		//{
		//	destination[i] = source[i] - 32;
		//}
		//else destination[i] = source[i];
		//
	}

	return destination;
}

int main()
{
	//АртёмЕлизавета2003
	//ArtuomElizabeth2003
	//Артём2003Elizabeth


	//win1251 to hex
	//c0f0f2b8ecc5ebe8e7e0e2e5f2e032303033
	//417274756f6d456c697a616265746832303033
	//c0f0f2b8ec32303033456c697a6162657468

	//utf8 to hex
	//d090d180d182d191d0bcd095d0bbd0b8d0b7d0b0d0b2d0b5d182d0b032303033
	//417274756f6d456c697a616265746832303033
	//d090d180d182d191d0bc32303033456c697a6162657468

	//utf16 to hex
	//0410044004420451043c0415043b04380437043004320435044204300032003000300033
	//0041007200740075006f006d0045006c0069007a006100620065007400680032003000300033
	//0410044004420451043c00320030003000330045006c0069007a00610062006500740068

	setlocale(LC_CTYPE, "Russian");

	char win1[] = "АртёмЕлизавета2003", win2[] = "ArtuomElizabeth2003", win3[] = "Артём2003Elizabeth";
	wchar_t utf1[] = L"АртёмЕлизавета2003", utf2[] = L"ArtuomElizabeth2003", utf3[] = L"Артём2003Elizabeth";

	char source[] = "12345sdfghjlйцгшщз";
	char destination[] = "1234567890123456789";

	UpperW1251(destination, source);
	cout << destination << endl;

	system("pause");
	return 0;

}