#include "zespolona.h"
#include<iostream>

zespolona::zespolona()
{
    nazwa = "bez nazwy";
    lre = 0;
    lim = 0;
}

zespolona::zespolona(const string& name, float Re, float Im)
{
    nazwa = name;
    lre = Re;
    lim = Im;
}

void zespolona::Nzespolona(const string& name, float Re, float Im)
{
    nazwa = name;
    lre = Re;
    lim = Im;
}



void zespolona::show()
{
    if (lim < 0)
        cout << "Complex: \t" << nazwa << "\t= " << lre << lim << "i" << endl;
    else if (lim >= 0)
        cout << "Complex: \t" << nazwa << "\t= " << lre << "+" << lim << "i" << std::endl;
}

zespolona operator+(lzespolona& a, lzespolona& b)
{
    float result_Re, result_Im;
    result_Re = a.lre + b.lre;
    result_Im = a.lim + b.lim;
    return zespolona("z_add", result_Re, result_Im);
}

zespolona operator-(lzespolona& a, lzespolona& b)
{
  
    float result_Re, result_Im;
    result_Re = a.lre - b.lre;
    result_Im = a.lim - b.lim;
    return zespolona("z_sub", result_Re, result_Im);
}

zespolona operator*(lzespolona& a, lzespolona& b)
{
    float result_Re, result_Im;
    result_Re = (a.lre * b.lre) + (a.lim * b.lim) * -1;
    result_Im = (a.lre * b.lim) + (a.lim * b.lre);
    return zespolona("z_mul", result_Re, result_Im);
}

zespolona operator/(lzespolona& a, lzespolona& b)
{
    if (b.lre == 0 && b.lim == 0)
        throw "Nie jestem pewien czy mo¿na dzielic liczbê zespolon¹ przez 0+-0i";        // mechanizm wyj¹tków !
    float result_Re, result_Im;
    float con = -b.lre;
    result_Re = ((a.lre * b.lre) + (a.lim * con) * -1) / abs(((b.lre * b.lre) + (b.lim * b.lim)));
    result_Im = ((a.lre * con) + (a.lim * b.lre)) / abs(((b.lre * b.lre) + (b.lim * b.lim)));
    return zespolona("z_div", result_Re, result_Im);
}

