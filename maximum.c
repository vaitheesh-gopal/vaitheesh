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
  for(i=n-1;i>=0;i--)
    printf("%d",a[i]);
  
  return 0;
    
}
