#include<stdio.h>
#define ROZMIAR 10
void wprowadzaj(int tab1[], int rozmiar);
void wypisz(int tab1[], int rozmiar);
void szukaj_min(int tab1[], int rozmiar);
void szukaj_max(int tab1[], int rozmiar);
int suma(int tab1[], int rozmiar);
float srednia(int tab1[], int rozmiar);

int main(){
    int tab1[ROZMIAR];
    wprowadzaj(tab1, ROZMIAR);
    wypisz(tab1, ROZMIAR);
    szukaj_min(tab1, ROZMIAR);
    szukaj_max(tab1, ROZMIAR);
    printf("\nsuma = %d", suma(tab1, ROZMIAR));
    printf("\nsrednia = %.2f", srednia(tab1, ROZMIAR));
    return 0;
}

void wprowadzaj(int tab1[], int rozmiar){
printf("Podaj elementy tab1:\n");
for(int i=0; i<rozmiar; i++){
scanf(" %d", &tab1[i]);
}
}

void wypisz(int tab1[], int rozmiar){
for(int i=0; i<rozmiar; i++){
    printf("%d ", tab1[i]);
}
}

void szukaj_min(int tab1[], int rozmiar){

  int min=tab1[0];
    int ind=0;
    for(int i=0; i<10; i++){
        if(tab1[i]<min){
            min=tab1[i];
            ind=i;
        }
    }
    printf("\nmin =%d , ind =%d ", min, ind);
}

void szukaj_max(int tab1[], int rozmiar){
    int max=tab1[0];
    int ind=0;
    for(int i=0; i<10; i++){
        if(tab1[i]>max){
            max=tab1[i];
            ind=i;
        }
    }
    printf("\nmax =%d , ind =%d ", max, ind);

}

int suma(int tab1[], int rozmiar){
    int suma=0;
    for(int i=0; i<rozmiar; i++){
        suma=suma+tab1[i];
    }
    return suma;
}

float srednia(int tab1[], int rozmiar){
    return suma(tab1, rozmiar)/(float)rozmiar;
}
