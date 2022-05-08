// Conversion of total number of days into days, months and years or days, months, years into total number of days

#include <stdio.h>
int main() {
     int ndays,y,m,d,choice;
     printf("CHOOSE!!");
     printf("\n1. Total number of days into Days, Months and Years");
     printf("\n2. Days, Months, Years into total number of days");
 printf("\nPrint the choice what you want to do: ");
 scanf(" %d", &choice);
 switch(choice)
 {
     case 1: printf("Enter the number of days: ");
             scanf(" %d", &ndays);
              y=ndays/365;
              m=ndays%365;
              d=m%30;
              m=m/30;
             printf("\nNumber of Years: %d Y(s)",y);
             printf("\nNumber of Months: %d M(s)",m);
             printf("\nNumber of Days: %d D(s)",d);
                 break;
     case 2: printf("\nNumber of Days: ");
             scanf(" %d", &d);
             printf("\nNumber of Months: ");
             scanf(" %d", &m);
             printf("\nNumber of Years: ");
             scanf(" %d",&y);
                ndays=d+(m*30)+(y*365);
             printf("\nTotal number of days: %d",ndays);
              break;
   default:printf("WRONG CHOICE !!!");
 }
    return 0;
}
