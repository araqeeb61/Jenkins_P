#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float H,hsq,hsq2,bmi;
	int W;
	printf("Enter you weight in(kg):\n");
	scanf("%d",&W);
	printf("Enter your Height in (Cm):\n");
	scanf("%f",&H);
	//convert cm into meter
	hsq=H/100;
	//square of height in meter
	hsq2=hsq*hsq;
	//BMI
	bmi=W/hsq2;
	printf("your BMI is:%f\n",bmi);
	
	if (bmi>24)
	{printf("\nyou are over weighted");}
	

    else if (18<bmi>24)
    {printf("\nyou are under weighted");
	}
    else
    {printf("\n Congratulations you are HEALTHY!!!");
	}
	return 0;
}
