#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int sum=0;
    int a;
    int b;
   
    printf("Input a number :  ");
    scanf("%d", &b);
    
    for(a=1; a<=b; a++){
    	sum += a;
	}
	printf("The sum of number is %d",sum);
	
	return 0;
}
