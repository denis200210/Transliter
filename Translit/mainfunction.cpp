#include "pch.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


void main()
{
    int N = 500;
    cout << "Input string (max " << N << " bytes) from inputtranslate.txt read... " << endl;
    char* str = new char[N];
    ifstream FInput;
    FInput.open("inputtranslit.txt", ios::in);
    FInput >> str;
    cout << "Translit: " << translitfunction(str) << endl;
    cout << endl;
}