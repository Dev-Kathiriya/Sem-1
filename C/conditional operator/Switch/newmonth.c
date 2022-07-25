#include<stdio.h>
void main(){
            int month;
            printf("Enter month no.\n For e.g 2 for feb\n");
            scanf("%d",&month);
            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12 : printf("\nThere are 31 ");
                         break;
                case 2 : printf("\nThere are 28 ");
                         break;
                case 4:
                case 6:
                case 9:
                case 11 : printf("\nThere are 30 ");
                         break;
                default : printf("\nInput Valid no.");
            }
}