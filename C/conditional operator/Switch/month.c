#include<stdio.h>
void main(){
            int month;
            printf("Enter month no.\n For e.g 2 for feb");
            scanf("%d",&month);
            switch (month)
            {
                case 1 : printf("\nThere are 31 days in Jan");
                         break;
                case 2 : printf("\nThere are 28 days in Feb");
                         break;
                case 3 : printf("\nThere are 31 days in March");
                         break;
                case 4 : printf("\nThere are 30 days in April");
                         break;
                case 5 : printf("\nThere are 31 days in May");
                         break;
                case 6 : printf("\nThere are 30 days in Jun");
                         break;
                case 7 : printf("\nThere are 31 days in July");
                         break;
                case 8 : printf("\nThere are 31 days in Aug");
                         break;
                case 9 : printf("\nThere are 30 days in Sept");
                         break;
                case 10 : printf("\nThere are 31 days in Oct");
                         break;
                case 11 : printf("\nThere are 30 days in Nov");
                         break;
                case 12 : printf("\nThere are 31 days in Dec");
                         break;
                default : printf("\nInput Valid no.");
            }
}