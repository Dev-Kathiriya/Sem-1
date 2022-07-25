#include<stdio.h>
void main(){
            int d, y, w, dd;
            printf("Enter number of days: ");
            scanf("%d",&d);
            y=d/365;
            w=(d%365)/7;
            dd=(d%365)%7;
            printf("%d : %d : %d", y,w,dd);
}