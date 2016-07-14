#include<stdio.h>
#include<string.h>
 int comp(const char *a,const char *b)
 {
    return strcmp(a,b);
 }
 
 int main()
 {
  int n,i,k;
  char *a;
  gets(a);
  scanf("%d",&k)
  n=strlen(a);
  
  qsort(a,n,sizeof(char),cmp);
  
  for(i=0;i<n-k;i++)
    printf("%c",a[i]);
    
    return 0;
  
 }
