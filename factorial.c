#include<stdio.h>
int fact(int n)
{
if(n==1)
return 1;
else
return n*fact(n-1);
}
void main()
{
int n,factorial=0;
printf("Enter a number:    ");
scanf("%d",&n);
factorial=fact(n);
printf("%d",factorial);
}
