#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  printf("Enter the range");
  scanf("%d",&n);
  for(;n>0;n--)
    n%2==0?printf("%d",n):;
  getche();
}
