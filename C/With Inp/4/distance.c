#include<stdio.h>
void main(){
            float k; float f; float m; float i; float cm;
            printf("Enter distance in kilometers: ");
            scanf("%f",&k);
            m=k*1000;
            f= m*0.306;
            i= f*12;
            cm=m*100;
            printf("Distance in meter is %f",m);
            printf("Distance in feet is %f",f);
            printf("Distance in inch is %f",i);
            printf("Distance in centimeter is %f",cm);
}