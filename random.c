#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100+1;
    // printf("Random number is %d",number);      
    int turn = 0;
    for(int i = 0 ; i <=100 ; i++)
    {
        int g_num;
         
        printf("Guess a number : ");
    
        scanf("%d",&g_num);
       
        turn+=1;  
       if(g_num == number)
       {
           printf("The Number that you guessed is right\n");
           printf("You took %d turns for winning\n",turn);
           break;
       }
       
       else if(g_num > number)
       {
           printf("The Number is greater plz keep it lower\n");
           
       } 
       
       else if (g_num < number)
       {
           printf("The Number is lesse plz enter a greater  number\n");
           
       }
      

    }
 

















return 0;

}