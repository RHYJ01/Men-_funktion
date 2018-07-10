#include <stdio.h>
#include <stdlib.h>
//--Header-------------------------------------
//Titel: Tage im Jahr 2018
//Datum: 10.06.2108
//Ersteller: Justin Rhyner
//Dateiname: Tagerechner.c
//
//
//Beschreibung: Berechnet nach der Eingabe einer Zahl von 1 - 365,s welcher Wochentag dies im Jahr 2018 war.

int main()
{

    short Tage;
    short Tage2;
    printf("Tag im Jahr 2018 (1..365):");

    scanf("%d", &Tage);
    getchar();
    Tage2 = Tage;
    if(Tage>365 || Tage < 1){
        Tage=0;
    }
    while(Tage > 7){

        Tage = Tage -7;

    }

    switch (Tage){

        case 1 : printf("Tag %d im Jahr 2018 ist ein Montag", Tage2); break;

        case 2 : printf("Tag %d im Jahr 2018 ist ein Dienstag", Tage2); break;

        case 3 : printf("Tag %d im Jahr 2018 ist ein Mittwoch", Tage2); break;

        case 4 : printf("Tag %d im Jahr 2018 ist ein Donnerstag", Tage2); break;

        case 5 : printf("Tag %d im Jahr 2018 ist ein Freitag", Tage2); break;

        case 6 : printf("Tag %d im Jahr 2018 ist ein Samstag", Tage2); break;

        case 7 : printf("Tag %d im Jahr 2018 ist ein Sonntag", Tage2); break;

        default: printf("Falscher Wert eingegeben");
    }

    return 0;
}
