#include <stdio.h>
int main()
{
	int arr[100],n,p,i,k = 0,x;
	scanf("%d",&n);
	for(i = 0; i < n;i++)
		scanf("%d",&arr[i]);
	printf("Enter p\n");
	scanf("%d",&p);
	while(k < p)
	{
		x = arr[0];
		//printf("%d",x);
		for(i = 0;i < n;i++)
		{
			arr[i] = arr[i+1];
		}
		arr[n-1] = x;
		k++;
	}
	for(i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}	
	return 0;
}		
