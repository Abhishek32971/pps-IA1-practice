#include<stdio.h>
int input()
{
  int a;
  printf("enter the value \n");
  scanf("%d",&a);
  return a;
}
int cmp(int a, int b, int c)
{
  int largest;
  if(a>b&&a>c)
  largest=a;
  else if(b>c)
  largest=b;
  else 
  largest=c;
}
void output(int a, int b, int c, int largest)
{
  printf("the largest among %d,%d,%d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(a,b,c,l);
  return 0;
}