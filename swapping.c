#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter the values of a and b:");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapping values of a=%d and b=%d:",a,b);
getch();
}
