#include<stdio.h>
void input(float*base , float*height)
{
  printf("enter the base of the triagle:\n");
  scanf("%f",base);
  printf ("enter the height of triangle:\n");
  scanf("%f",height);
}
void find_area(float base ,float height ,float *area)
{
  *area =(base * height)/2;
}
void output(float area)
{
  printf("the area of the triangle is %f",area);
}
int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(c);
  return 0;


}



