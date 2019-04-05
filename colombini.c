#include <stdio.h>

int main(void) {

    double preisTonne = 0.0;
    double qmTonne = 0.0;
    double frachtTonne = 0.0;
    double endPreis = 0.0;
    double preisqm = 0.0;
    double frachtqm = 0.0;

    printf("Preis pro Tonne: ");
    scanf("%lf", &preisTonne);

    printf("m² pro Tonne: ");
    scanf("%lf", &qmTonne);

    printf("Fracht pro Tonne: ");
    scanf("%lf", &frachtTonne);

    preisqm = preisTonne / qmTonne;
    frachtqm = frachtTonne / qmTonne;

    endPreis = preisqm + frachtqm;

    printf("\n");
    printf("Preis pro m² inkl. Fracht: %.2lf €\n\n", endPreis);

    return 0;
}