#pragma once
#include<stdio.h>
#include <conio.h>
#include<iostream>
#include <string>
#include <cmath>

using namespace std;

class zespolona;
typedef const zespolona lzespolona;
class zespolona
    
{
private:
	float lre, lim;
    string nazwa;
public:

    zespolona();
    zespolona (const string& nazwa, float lre = 0, float lim = 0);
    //~zespolona();
    void Nzespolona(const string& nazwa, float lre, float lim);
   
   void show();
    friend zespolona operator+(lzespolona& a, lzespolona& b);
    friend zespolona operator-(lzespolona& a, lzespolona& b);
    friend zespolona operator*(lzespolona& a, lzespolona& b);
    friend zespolona operator/(lzespolona& a, lzespolona& b);
};


