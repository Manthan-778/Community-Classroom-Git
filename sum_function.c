#include<stdio.h>
int sum(int a, int b);
int main(){
    printf("The sum of 2 and 5 is %d",sum(2,5));
    return 0;
}
int sum(int a, int b)
{ //this is sum functio
    return a+b;
}