#include<stdio.h>
int input_side()
{
  int n;
  printf("enter a side of triangle :\n");
  scanf ("%d,&n");
  return n;
}
int check_scalene(int a ,int b,int c)
{
  if(a!=b&&a!=c&&b!=c)
  {
    return 1;
  }
  return 0;
}
void output(int a,int b ,int c,int isScalene)
{
  if (isScalene ==0)
  {
    printf("the triangle with side %d,%dand %d is scalene."a,b,c;);
  }
  else
  {
    printf("the triangle with side %d,&d and %d is not scalene ."a,b,c);
  }
}
int  main()
{
int a,b,isScalene;
a=input_side();
b=input_side();
c=input_side();
isScalene = check_scalene(a,b,c);
return 0;
}