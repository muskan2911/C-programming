#include <stdio.h>
int main(){
  int h[100001];
  int i,j,max=0,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&h[i]);
    if(h[i]>max)
    max=h[i];
  }
  int s[100]={0};
  for(i=0;i<n-1;i++)
  {
    if(h[i]>h[i+1])
  { 
      for(j=h[i+1];j<h[i];j++)
      s[j]++;
  }
  if(h[i]<h[i+1])
  {
      for(j=h[i];j<h[i+1];j++)
      s[j]++;
  }
  }
  int k=0;
  for(j=0;j<max;j++)
  {
    if(s[j]>k)
    k=s[j];
  }
  printf("%d",k);
	return 0;
}
