#include<stdio.h>
void main(){
            int a,b,c;
            printf("Enter first number:\n");
            scanf("%d",&a);
            printf("Enter second number:\n");
            scanf("%d",&b);
            printf("Enter third number:\n");
            scanf("%d",&c);
            if (a>=b){
                     if (a>c){
                              printf("Largest entered no. is %d",a);
                             }
                     else{
                          printf("Largest entered no. is %d",c);
                        }
                    }
            else{
                 if (b>c){
                          printf("Largest entered no. is %d",b);
                          }
                 else{
                           printf("Largest entered no. is %d",c);
                          }
                          
                }
            
}