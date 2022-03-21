#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter %d numbers:\n",n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}

int sum_composite(int n, int a[n])
{
  int count= 0,i;
  for (int i=0;i<n;i++)
  {
    if ( (a[i])==2)
    {
      continue;
    }
    else if(a[i]%2==0)
    {
      count=count+a[i];
    }
  }
  return count;
}

void output(int sum)
{
  printf("sum of composite number is %d\n",sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_composite(n,a);
  output(result);
  return 0;
}