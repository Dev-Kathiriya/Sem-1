#include<stdio.h>
void main(){
            float m;
            float p;
            float h;
            float a;
            float c;
            float e;
            printf("Enter Marks of Math ");
            scanf("%f",&m);
            printf("Enter Marks of Physics ");
            scanf("%f",&p);
            printf("Enter Marks of Chemistry ");
            scanf("%f",&h);
            printf("Enter Marks of Computer ");
            scanf("%f",&c);
            printf("Enter Marks of English ");
            scanf("%f",&e);
            a=(m+p+h+c+e)/5;
            printf("Ovarall Average marks is %f",a);
}