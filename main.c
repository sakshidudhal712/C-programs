#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int dividend,divisor,quotient,remainder;
printf("enter th dividend ");
scanf("%d",&dividend);
printf("enter th divisor ");
scanf("%d",&divisor);
quotient=dividend/divisor;
remainder=dividend%divisor;
printf("\n quotient %d" ,quotient);

printf("\n remainder %d" ,remainder);
return 0;
}
