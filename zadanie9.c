#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char nazwisko[100];
    char imie[100];
    int rok_urodzenia;
    char miejscowosc[100];
    char kierunek[100];
    int rok_studiow;
};

struct student studenci[10];

int main()
{   
    FILE* file = fopen("dane.txt","r");
    int index = 0;
    char imie[100];
    char nazwisko[100];
    int rok_ur;
    char miejscowosc[100];
    char kierunek[100];
    int rok;
    
    while(fscanf(file,"%s %s %d %s %s %d",nazwisko, imie, &rok_ur, miejscowosc, kierunek, &rok)==6){
        // printf("%s %s %d %s %s %d\n", imie, nazwisko, rok_ur, miejscowosc, kierunek, rok);
        strcpy(studenci[index].imie, imie);
        strcpy(studenci[index].nazwisko, nazwisko);
        studenci[index].rok_urodzenia = rok_ur;
        strcpy(studenci[index].miejscowosc, miejscowosc);
        strcpy(studenci[index].kierunek, kierunek);
        studenci[index].rok_studiow = rok;

        // printf("%s %s %d %s %s %d\n", studenci[index].imie,studenci[index].nazwisko, studenci[index].rok_urodzenia, 
        //                             studenci[index].miejscowosc, 
        //                             studenci[index].kierunek, 
        //                             studenci[index].rok_studiow);
        index++;
    }

    int i, lat_temp;
    char wybor;
    printf("\nPodaj litere:");
    scanf("%c",&wybor);
    for(i = 0 ; i < index; i++){
        lat_temp = 2018 - studenci[i].rok_urodzenia;
        if(i==0){}
        }
    }
}