// Number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,n=1;
    srand(time(0));
    num = rand()%100 + 1; //random number b/w 1 to 100  printf("%d",num);
    do{          
          printf("Guess the number between 1 to 100\n");
          scanf("%d",&guess);
          if(num<guess)
            {        
              printf("enter the lower number please!\n");
            }
          else if(num>guess)
            {
             printf("enter the higher number please!\n");
            }
          else
            {
             printf("You guessed it in %d attempts\n",n);
            }
          n++; 
    }while(guess!=num);
return 0;
}
