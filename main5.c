#include <stdio.h>
#define pi 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float r;
    float area;
	
    printf("enter the value of radius");
	scanf("%f",&r);
	area=(pi*r*r);
	printf("area of circle %f",area);
	return 0;
	}
