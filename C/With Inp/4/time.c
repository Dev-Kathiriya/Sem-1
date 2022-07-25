#include<stdio.h>
void main(){
            int h; int m; int s; int ss;
            printf("Enter value of seconds ");
            scanf("%d",&ss);
            h=ss/3600;
            m=(ss%3600)/60;
            s=(ss%3600)%60;
            printf("%d : %d : %d", h,m,s);
}