#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int a;
    printf("Input a number:");
    scanf("%i", &a);
    
   
    if(a < 0)
    a=a*(-1);
    printf("Absolute value is %i", a );
    

    
    return 0;
    
}
