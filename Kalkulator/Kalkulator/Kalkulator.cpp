#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include "matematyka.h"
#pragma warning(disable : 4996)



void operacje()
{
    printf("\n\nDostepne operacje:\nadd - dodawanie \nsub - odejmowanie \nmul - mnozenie \ndiv - dzielenie\n");
}

void usage(const char* program_name)
{
    printf("\nProgram zadziala po wywolaniu w nastepujasy sposob: %s liczba_1 operacja liczba_2", program_name);
    operacje();
    exit(1);
}

int main(int argc, char const* argv[])
{
    if (argc < 4) usage(argv[0]);

    float a, b, wynik = 0;

    a = atof(argv[1]);
    b = atof(argv[3]);

    if (strcmp(argv[2], "add") == 0)  wynik = add(a, b);
    else if (strcmp(argv[2], "sub") == 0) wynik = sub(a, b);
    else if (strcmp(argv[2], "mul") == 0) wynik = mul(a, b);
    else if (strcmp(argv[2], "div") == 0) wynik = div(a, b);
    else printf_s("\nOpercja wpisana niepoprawnie!!! Wynik podany ponizej nie jest prawidlowy!!!");

    printf_s("\nWynik operacji: %f\n", wynik);

    FILE* fptr;

    fopen_s(&fptr, "log.txt", "a");

    if (fptr == 0)
    {
        printf("Blad otwierania pliku\n");
        exit(1);
    }

    time_t czas;
    time(&czas);
    char* data = ctime(&czas);

    fprintf(fptr, "%sWykonano opercje %s %s %s\nWynik: %f\n\n", data, argv[1], argv[2], argv[3], wynik);
    fclose(fptr);



}
