#include<stdio.h>
#include<conio.h>
int main(){
float a,d;
int f,c;
printf("enter a number:");
scanf("%f",&a);
f=a;
printf("\n the floor function is :");
printf("%d", f);
d=a-f;
if(d!=0){
    printf("\n the celling functioin is");

}
else

    printf("the celling function is:%d",f);
getch();
return 0;



}
