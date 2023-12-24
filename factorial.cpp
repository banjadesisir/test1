#include<stdio.h>
#include<conio.h>
int factorial(int );
int main()
{
    int n, fact;
    printf("enter the value of n");
    scanf("%d", &n);
    fact=factorial(n);
    printf("\n the factorial is %d",fact);
    getch();
    return 0;
}
int factorial(int n){
if(n==1||n==0)
    return n;
else
    return (n * factorial (n-1));
}




