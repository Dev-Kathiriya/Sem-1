#include<stdio.h>
void main(){
            int day1;
            printf("Enter first number:\n");
            scanf("%d",&day1);
            switch (day1)
            {
                case 1 : printf("\nToday is Sunday");
                         break;
                case 2 : printf("\nToday is Monday");
                         break;
                case 3 : printf("\nToday is Tuesday");
                         break;
                case 4 : printf("\nToday is Wednesday");
                         break;
                case 5 : printf("\nToday is Thursday");
                         break;
                case 6 : printf("\nToday is Friday");
                         break;
                case 7 : printf("\nToday is Saturday");
                         break;
                default : printf("\nInput Valid no.");
            }
}