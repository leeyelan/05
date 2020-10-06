#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

   int answer = 59;
   int a=0;
   int trial = 0;

   
   
    do{
     printf("Input a number : ");
   	scanf("%i", &a);
   	
	   if(a<answer)
   	 printf("LOW\n");
   	 else if(a>answer)
   	 printf("HIGH\n");
   	
	    trial++;
   }
   while(a != answer);
   
   printf("Conglaturation, number of trial : %i\n", trial);
   
  
   
   
   
   return 0;
}
