#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int n,temp,i,j;
	printf("enter size");
	scanf("%d\n",&n);
	int *a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=1;j<n-1;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	printf("%d",a[1]);
	return 0;
}
