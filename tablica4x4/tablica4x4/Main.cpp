#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define WIERSZ 4
#define KOLUMNA 4

//int tablica[WIERSZ][KOLUMNA];
void menu()
{
	printf("1 - Wprowadz dane\n2 - Wyswietl dane\n3 - Oblicz srednia i mediane\n4 - Zamien wartosc minimalna i maksymalna\n");
	printf("5 - Generuj losowe liczby\nz - Zapisz do pliku\nk - koniec\n\n");
}
void Wprowadz(int tab[][KOLUMNA])
{
	for (int w = 0; w < WIERSZ; w++)
	{
		for (int k = 0; k < KOLUMNA; k++)
		{
			printf("[%d][%d]\n", w, k);
			scanf_s("%d", &tab[w][k]);
		}
	}

	
}
int main()
{
	int tablica[WIERSZ][KOLUMNA];
	//menu();
	Wprowadz(tablica[WIERSZ][KOLUMNA]);
	/*printf("Wprowadz macierz\n");
	for (int w = 0; w < WIERSZ; w++)
	{
		for (int k = 0; k < KOLUMNA; k++)
		{
			printf("[%d][%d]\n", w, k);
			scanf_s("%d", &tablica[w][k]);
		}
	}*/

	//WYSWIETL
	printf("\n\n");
	for (int w = 0; w < WIERSZ; w++)
	
		for (int k = 0; k < KOLUMNA; k++)
		{
			printf("%d", tablica[w][k]);
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}