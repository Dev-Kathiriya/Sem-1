#include<stdio.h>
void main(){
			float bs,hra,da,gs;
			printf("Enter your Basic Salary\n");
			scanf("%f",&bs);
			if (20000>bs && bs>=10000)
			{
				hra=20*bs/100;
				da=80*bs/100;
			}
			if (30000>bs && bs>=20000)
			{
				hra=25*bs/100;
				da=90*bs/100;
			}
			if (bs>=30000)
			{
				hra=30*bs/100;
				da=95*bs/100;
			}
			gs=bs+hra+da;
			printf("Your gross salary is: %f",gs);
}