#include<stdio.h>
int prime(int no);
main()
{
int num;
printf("enter the number to be checked");
scanf("%d",&num);
if(prime(num)==0)
printf("number is not prime");
else
printf("number is prime");
}
int prime(int no)
{
int i;
for(i=2;i<no;i++)
if(no%i==0)
return 0;
}
