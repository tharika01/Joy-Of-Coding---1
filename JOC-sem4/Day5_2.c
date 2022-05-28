#include<stdio.h>
int main()
{
	int n,arr[25],temp,i,j;
	scanf("%d",&n);
	for(i = 0; i < n;i++)
		scanf("%d",&arr[i]);
	for(i = 0;i < n/2;i++)
	{
		temp = arr[n-i-1];
		arr[n-i-1] = arr[i];
		arr[i] = temp;
	}
	printf("Reversed list = \n");
	for(i = 0; i < n;i++)
		printf("%d ",arr[i]);
	return 0;
}
