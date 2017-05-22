#include<bits/stdc++.h>
#define size 20
int bs(int * ,int ,int ,int );
int main()
{
	int a[size],n,ans,f,l,key,i,t;
	printf("enter n= ");
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&t);
	while(t--)
	{
	printf("enter key= ");
	scanf("%d",&key);
	f=0;
	l=n-1;
	ans=bs(a,key,f,l);
	if(ans!=-1)
    {
    	printf("%d\n",key,ans+1);
	}
	else
	{
		printf("no not found\n");
	}
}
	return 0;
}

int bs(int a[],int key,int f,int l)
{
	int m;
	if(l<f)
		return -1;
	else
    {
   	m=(l+f)/2;
	if(a[m]==key)      return m;
	else if(a[m]>key)  bs(a,key,f,m-1);
	else               bs(a,key,m+1,l);
}
}
