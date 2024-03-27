#include<stdio.h>
#include<conio.h>
float power(float,int);
int main()
{
	float b,rs;
	int p;
	printf("enter power and base:");
	scanf("%d",&p);
	scanf("%f",&b);
	rs=power(b,p);
	printf("result=%.2f",rs);
	getch();
}
float power(float b,int p)
{
	if(p==0)
	return (1.0);
	else if(p>0)
	return(b*power(b,p-1));
	else
	return(power(b,p+1)/b);
}


