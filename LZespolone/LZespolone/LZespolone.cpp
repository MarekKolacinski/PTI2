
#include<stdio.h>
#include <conio.h>
#include<iostream>
#include <string>
#include <cmath>
#include "zespolona.h"

void menu()
{
    cout << "\nWybierz dzia³anie na liczbach zespolonych" << std::endl;
    cout << "1 - Dodawanie" << std::endl;
    cout << "2 - Odejmowanie" << std::endl;
    cout << "3 - Mno¿enie" << std::endl;
    cout << "4 - Dzielenie" << std::endl;
    cout << "k - Koniec programu" << std::endl;
}


int main()
{
   // setlocale(LC_ALL, "");

    double re1, im1, re2, im2;

    cout << "Podaj Re pierwszej liczby zespolonej: ";
    cin >> re1;
    cout << "Podaj Im pierwszej liczby zespolonej: ";
    cin >> im1;
    cout << "Podaj Re drugiej liczby zespolonej: ";
    cin >> re2;
    cout << "Podaj Im drugiej liczby zespolonej: ";
    cin >> im2;

    zespolona z1("z1", re1, im1);
    zespolona z2("z2", re2, im2);

    z1.show();
    z2.show();

    do
    {
        menu();
        switch (_getch())
        {
        case 49:
        {
            zespolona z_result_add = z1 + z2;
            z_result_add.show();
            break;
        }

        case 50:
        {
            zespolona z_result_sub = z1 - z2;
            z_result_sub.show();
            break;
        }

        case 51:
        {
            zespolona z_result_mul = z1 * z2;
            z_result_mul.show();
            break;
        }

        case 52:
        {
            try                                                          // mechanizm wyj¹tków !
            {
                zespolona z_result_div = z1 / z2;
                z_result_div.show();
            }
            catch (const char* s)
            {
                std::cout << s << std::endl;
                abort();
            }
            break;
        }

        case 107:
        {
            exit(1);
            break;
        }

        default:
        {
            std::cout << "\nB³êdny wybór!!!\n";
        }
        }
    } while (_getch() != 107);
}