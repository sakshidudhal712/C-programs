#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int no,i;
	long fact=1;
printf("enter no");
scanf("%d",&no);
	 for(i=1;i<=no;i++)
	 {
	 	fact=fact*i;
	 }
	
	printf("%ld",fact);
	
	
	
	return 0;
}
