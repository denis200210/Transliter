#include "pch.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

char* translitfunction(char* string1)
{
    int i, k, N;
    N = 500;
    char* translitstr = new char[N];
    char* str = new char[N];
   
    for (i = 0; i < N; ++i)
    {
        str[i] = 0;
        translitstr[i] = 0;
    }

    str = string1;


    i = 0;
    k = 0;
    while (str[i] != 0)
    {
        if (str[i] == -47)
        {
            if (str[i + 1] == -111)
            {
                translitstr[k] = 'y';
                translitstr[k + 1] = 'o';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -128)
            {
                translitstr[k] = 'r';
                ++k;
            }
            if (str[i + 1] == -127)
            {
                translitstr[k] = 's';
                ++k;
            }
            if (str[i + 1] == -126)
            {
                translitstr[k] = 't';
                ++k;
            }
            if (str[i + 1] == -125)
            {
                translitstr[k] = 'u';
                ++k;
            }
            if (str[i + 1] == -124)
            {
                translitstr[k] = 'f';
                ++k;
            }
            if (str[i + 1] == -123)
            {
                translitstr[k] = 'h';
                ++k;
            }
            if (str[i + 1] == -122)
            {
                translitstr[k] = 'c';
                ++k;
            }
            if (str[i + 1] == -121)
            {
                translitstr[k] = 'c';
                translitstr[k + 1] = 'h';
                ++k;
                ++k;
            }
            if (str[i + 1] == -120)
            {
                translitstr[k] = 's';
                translitstr[k + 1] = 'h';
                ++k;
                ++k;
            }
            if (str[i + 1] == -119)
            {
                translitstr[k] = 's';
                translitstr[k + 1] = 'c';
                translitstr[k + 2] = 'h';
                ++k;
                ++k;
                ++k;
            }
            if (str[i + 1] == -118)
            {
                translitstr[k] = '|';
                ++k;
            }
            if (str[i + 1] == -117)
            {
                translitstr[k] = 'y';
                ++k;
            }
            if (str[i + 1] == -116)
            {
                translitstr[k] = '/';
                ++k;
            }
            if (str[i + 1] == -115)
            {
                translitstr[k] = 'e';
                translitstr[k + 1] = 'h';
                ++k;
                ++k;
            }
            if (str[i + 1] == -114)
            {
                translitstr[k] = 'y';
                translitstr[k + 1] = 'u';
                ++k;
                ++k;
            }
            if (str[i + 1] == -113)
            {
                translitstr[k] = 'y';
                translitstr[k + 1] = 'a';
                ++k;
                ++k;
            }
            ++i;
            ++i;
        }
        else if (str[i] == -48)
        {
            if (str[i + 1] == -80)
            {
                translitstr[k] = 'a';
                ++k;
            }
            else if (str[i + 1] == -79)
            {
                translitstr[k] = 'b';
                ++k;
            }
            else if (str[i + 1] == -78)
            {
                translitstr[k] = 'v';
                ++k;
            }
            else if (str[i + 1] == -77)
            {
                translitstr[k] = 'g';
                ++k;
            }
            else if (str[i + 1] == -76)
            {
                translitstr[k] = 'd';
                ++k;
            }
            else if (str[i + 1] == -75)
            {
                translitstr[k] = 'e';
                ++k;
            }
            else if (str[i + 1] == -74)
            {
                translitstr[k] = 'z';
                translitstr[k + 1] = 'h';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -73)
            {
                translitstr[k] = 'z';
                ++k;
            }
            else if (str[i + 1] == -72)
            {
                translitstr[k] = 'i';
                ++k;
            }
            else if (str[i + 1] == -71)
            {
                translitstr[k] = 'y';
                ++k;
            }
            else if (str[i + 1] == -70)
            {
                translitstr[k] = 'k';
                ++k;
            }
            else if (str[i + 1] == -69)
            {
                translitstr[k] = 'l';
                ++k;
            }
            else if (str[i + 1] == -68)
            {
                translitstr[k] = 'm';
                ++k;
            }
            else if (str[i + 1] == -67)
            {
                translitstr[k] = 'n';
                ++k;
            }
            else if (str[i + 1] == -66)
            {
                translitstr[k] = 'o';
                ++k;
            }
            else if (str[i + 1] == -65)
            {
                translitstr[k] = 'p';
                ++k;
            }
            else if (str[i + 1] == -112)
            {
                translitstr[k] = 'A';
                ++k;
            }
            else if (str[i + 1] == -111)
            {
                translitstr[k] = 'B';
                ++k;
            }
            else if (str[i + 1] == -110)
            {
                translitstr[k] = 'V';
                ++k;
            }
            else if (str[i + 1] == -109)
            {
                translitstr[k] = 'G';
                ++k;
            }
            else if (str[i + 1] == -108)
            {
                translitstr[k] = 'D';
                ++k;
            }
            else if (str[i + 1] == -107)
            {
                translitstr[k] = 'E';
                ++k;
            }
            else if (str[i + 1] == -127)
            {
                translitstr[k] = 'Y';
                translitstr[k + 1] = 'O';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -106)
            {
                translitstr[k] = 'Z';
                translitstr[k + 1] = 'H';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -105)
            {
                translitstr[k] = 'Z';
                ++k;
            }
            else if (str[i + 1] == -104)
            {
                translitstr[k] = 'I';
                ++k;
            }
            else if (str[i + 1] == -103)
            {
                translitstr[k] = 'Y';
                ++k;
            }
            else if (str[i + 1] == -102)
            {
                translitstr[k] = 'K';
                ++k;
            }
            else if (str[i + 1] == -101)
            {
                translitstr[k] = 'L';
                ++k;
            }
            else if (str[i + 1] == -100)
            {
                translitstr[k] = 'M';
                ++k;
            }
            else if (str[i + 1] == -99)
            {
                translitstr[k] = 'N';
                ++k;
            }
            else if (str[i + 1] == -98)
            {
                translitstr[k] = 'O';
                ++k;
            }
            else if (str[i + 1] == -97)
            {
                translitstr[k] = 'P';
                ++k;
            }
            else if (str[i + 1] == -96)
            {
                translitstr[k] = 'R';
                ++k;
            }
            else if (str[i + 1] == -95)
            {
                translitstr[k] = 'S';
                ++k;
            }
            else if (str[i + 1] == -94)
            {
                translitstr[k] = 'T';
                ++k;
            }
            else if (str[i + 1] == -93)
            {
                translitstr[k] = 'U';
                ++k;
            }
            else if (str[i + 1] == -92)
            {
                translitstr[k] = 'F';
                ++k;
            }
            else if (str[i + 1] == -91)
            {
                translitstr[k] = 'H';
                ++k;
            }
            else if (str[i + 1] == -90)
            {
                translitstr[k] = 'C';
                ++k;
            }
            else if (str[i + 1] == -89)
            {
                translitstr[k] = 'C';
                translitstr[k + 1] = 'H';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -88)
            {
                translitstr[k] = 'S';
                translitstr[k + 1] = 'H';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -87)
            {
                translitstr[k] = 'S';
                translitstr[k + 1] = 'C';
                translitstr[k + 2] = 'H';
                ++k;
                ++k;
                ++k;
            }
            else if (str[i + 1] == -86)
            {
                translitstr[k] = '|';
                ++k;
            }
            else if (str[i + 1] == -85)
            {
                translitstr[k] = 'Y';
                ++k;
            }
            else if (str[i + 1] == -84)
            {
                translitstr[k] = '/';
                ++k;
            }
            else if (str[i + 1] == -83)
            {
                translitstr[k] = 'E';
                translitstr[k + 1] = 'H';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -82)
            {
                translitstr[k] = 'Y';
                translitstr[k + 1] = 'U';
                ++k;
                ++k;
            }
            else if (str[i + 1] == -81)
            {
                translitstr[k] = 'Y';
                translitstr[k + 1] = 'A';
                ++k;
                ++k;
            }
            ++i;
            ++i;
        }
        else
        {
            translitstr[k] = str[i];
            ++k;
            ++i;
        }

    }
    return translitstr;
}