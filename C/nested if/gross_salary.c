#include<stdio.h>
void main(){
			float bs,hra,da,gs;
			printf("Enter your Basic Salary\n");
			scanf("%f",&bs);
			if (bs>=10000)
			{
				hra=20*bs/100;
				da=80*bs/100;
				if (20000>bs)
				{
					hra=25*bs/100;
					da=90*bs/100;
					if (30000>bs)
					{
					hra=30*bs/100;
					da=95*bs/100;
					}	
				}
			gs=bs+hra+da;
			printf("Your gross salary is: %f",gs);
			}
	
			printf("Invalid Basic Salary");
}