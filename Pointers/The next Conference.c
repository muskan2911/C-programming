#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int cmp(const void *a,const void *b)
{
    return ((*(int *)a)-(*(int *)b));
}
int n,a[200001],b,l,r;
long long ans;
int main()
{int i,l;
	scanf("%d",&n);
	r=n;
	for( i=1;i<=n;i++)
        scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	 scanf("%d",&b),a[i]-=b;
	qsort(a+1,n,sizeof(int),cmp);
	for(l=1;l<=n;l++)
	{
		while(a[l]+a[r]>0)
		 r--;
		ans+=n-max(l,r);
	}
	printf("%lld",ans);
	return 0;
}
