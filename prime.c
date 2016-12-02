#include<stdio.h>
#include<conio.h>
#include<math.h>
int isprime(int num)
{
 int i;
 if(num==2)
	return 1;
 if(num%2==0)
	return 0;
 for(i=3;i<sqrt(num);i+=2) 
 { 
   if(n%i==0)
	return 0;
 }
 return 1;
}
void main()
{
 int i=2,n;
 printf("ENter the range");
 scanf("%d",&n);
 for(;i<n;i++)
	if(isprime(i))
		printf("%d",i);
 getche();
}
