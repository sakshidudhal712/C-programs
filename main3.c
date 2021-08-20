#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int a,b,temp;
printf("a ");
scanf("%d",&a);
printf("b ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("a after swapping is %d",a);
printf("b after swapping is %d",b);
return 0;
}
