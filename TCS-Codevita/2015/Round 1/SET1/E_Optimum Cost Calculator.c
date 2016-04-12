#include <stdio.h>
#include <math.h>
int main(void) {
 
	long double a,d,x,y,temp1,temp;
	scanf("%Lf",&a);
	scanf("%Lf",&d);
 
	if(a>0 && a<=(57*d) && d>0 && d<=(1.7*a))
	{
		temp= sqrt(3.0);
		x=a-d/temp;
		temp1=(a-x)*(a-x);
		y= sqrt(temp1+d*d);
		printf("X= %Lf\n",x);
		printf("Y= %Lf",y);
	}
	else
		printf("Invalid Input");
 
	return 0;
}
