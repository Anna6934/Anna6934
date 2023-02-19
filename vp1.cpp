#include<iostream>
using namespace std;
 
int Rom2Num(char *rom)
{
    int adding, num = 0;
    for (int i = 0; rom[i]; i++)
    {
        switch (rom[i]) 
        {
            case 'I': 
                adding = 1;
                if (rom[i + 1])
                {
                    if (rom[i + 1] == 'X')
                    {
                        adding = 9;
                        i++;
                    }
                    else if (rom[i + 1] == 'V')
                    {
                        adding = 4;
                        i++;
                    }
                }
                break;
 
            case 'V':
                adding = 5;
                break;
 
            case 'X':
                adding = 10;
                if (rom[i + 1])
                {
                    if (rom[i + 1] == 'C')
                    {
                        adding = 90;
                        i++;
                    }
                    else if (rom[i + 1] == 'L')
                    {
                        adding = 40;
                        i++;
                    }
                }
                break;
 
            case 'L':
                adding = 50;
                break;
 
            case 'C':
                adding = 100;
                if (rom[i + 1])
                {
                    if (rom[i + 1] == 'M')
                    {
                        adding = 900;
                        i++;
                    }
                    else if (rom[i + 1] == 'D')
                    {
                        adding = 400;
                        i++;
                    }
                }
                break;
 
            case 'D':
                adding = 500;
                break;
 
            case 'M':
                adding = 1000;
                break;
 
            default: 
                adding = 0; //на всякий случай.
        }
        num += adding;
    }
    return num;
}
 
int main()
{
 
    int  z;
    char a[32], b[32];
 
    cout << "введите 2 числа" << endl;
    cin >> a >> b;
    int s1 = Rom2Num(a);
    int s2 = Rom2Num(b);
 
    cout << s1 << "  " << s2 << endl << "что вы хотите сделать" << endl <<
        "1.сложить" << endl <<
        "2.вычесть" << endl <<
        "3.умножить" << endl <<
        "4.делить" << endl;
 
    cin >> z;
    switch (z)
 
    {
        case 1:
            cout << s1 + s2 << endl;
            break;
 
        case 2:
            cout << s1 - s2 << endl;
            break;
 
        case 3:
            cout << s1 * s2 << endl;
            break;
 
        case 4:
            cout << (float)s1 / s2 << endl;
            break;
 
        default:
            cout << "ОШИБКА" << endl;
            break;
    }
}