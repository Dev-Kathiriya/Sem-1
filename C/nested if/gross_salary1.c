#include<stdio.h>
void main(){
			float bs,hra,da,gs;
			printf("Enter your Basic Salary\n");
			scanf("%f",&bs);
			if (bs>=10000)
			{
				if(bs<20000)
				{
					hra=20*bs/100;
					da=80*bs/100;
				}
				else if (30000<bs)
				{
					hra=25*bs/100;
					da=90*bs/100;
				else
					{
					hra=30*bs/100;
					da=95*bs/100;
					}	
				}
	
			printf("Invalid Basic Salary");
}