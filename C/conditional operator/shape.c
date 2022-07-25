#include<stdio.h>
void main(){
            int shape;
            printf("Enter 1 for Circle\nEnter 2 for Triangle\nEnter 3 for Rectangle\nEnter 4 for Square\n");
            scanf("%d", &shape);
            switch(shape)
            {
                case 1 : {
                          float r;
                          printf("Enter Value of radius\n");
                          scanf("%f", &r);
                          printf("Area is %f", (3.14*r*r));
                          break;
                         }
                case 2 : {
                          float b,h;
                          printf("Enter Value of base and height\n");
                          scanf("%f %f", &b,&h);
                          printf("Area is %f", (0.5*b*h));
                          break;
                         }
                case 3 : {
                          float l,h;
                          printf("Enter Value of length and height\n");
                          scanf("%f %f", &l,&h);
                          printf("Area is %f", (l*h));
                          break;
                         }
                case 4 : {
                          float a;
                          printf("Enter Value of length of side of square\n");
                          scanf("%f", &a);
                          printf("Area is %f", (a*a));
                          break;
                         }
                default : printf("\nInput Valid no.");
            }
            }