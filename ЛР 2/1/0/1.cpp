#include "stdafx.h"


using namespace std;


int sum(int a, int b);


int sub(int a, int b);


int mul(int a, int b);


int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите число А и Б:" << endl;
    cin >> a >> b;
    cout << endl;
    cout << "Сумма чисел А и Б: " << sum(a, b) << endl;
    cout << "Разность чисел А и Б: " << sub(a, b) << endl;
    cout << "Произведение чисел А и Б: " << mul(a, b) << endl;

    system("pause");
}

