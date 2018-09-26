#include <stdio.h>

int main()
{
    int start = 0;
    int auswertung = 0;
    int i = 0;
    printf("Bitte geben sie einen Wert ein: \n");
    scanf("%d", &start);
    printf("Hier ist ihre Turmrechnung für den Wert: %d \n",start);
    for(i=1;i<10;i++)
    {
        auswertung = start * i;
        printf("%d*%d \n",start,i);
        start = auswertung;
    }
    for(int j = i-1;j>0;j--)
    {
        auswertung = start / j;
        printf("%d/%d \n",start,j);
        start = auswertung;
    }
    
    return 0;
}
