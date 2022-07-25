#include<stdio.h>
void main(){
            float u; float t; float a; float s;
            printf("Enter initial velocity: ");
            scanf("%f",&u);
            printf("Enter time: ");
            scanf("%f",&t);
            printf("Enter acceleration: ");
            scanf("%f",&a);
            s=u*t+(a*t*t)/2;
            printf("distance is %f",s);
}