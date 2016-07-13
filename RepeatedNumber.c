#include<stdio.h>
int cmp(const void *a, const void *b)
{
  return (*(int*)a-*(int*)b);
 
}

int main()
{
  int *a,n,i,c=0;
  
  scanf("%d",&n);
  a=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
  qsort(a,n,sizeof(int),cmp);
  for(i=1;i<n;i++)
  {
    if(a[i-1]==a[i]&&c==0)
    {
      printf("%d",a[i]);
      c=1;
    }
    else
      c=0;
      
  }
  
  return 0;
    
}
