#include <stdio.h>
int main()
{
	int n,arr[25],i,j,k,x,sum = 0;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i = 0;i < n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the sum\n");
	scanf("%d",&x);
	for(i = 0;i <n;i++)
	{
		sum=0;
		/*while((sum != x)&&(j<n))
		{
			j = i;
			sum+=arr[j];
			j++;
			//printf("%d\n",sum);	
		}*/
		for(j = i;j < n;j++)
		{
			sum += arr[j];
		
			if(sum == x)
			{
				printf("%d %d\n",i,j);
				for(k = i;k <=j;k++)
				{
					printf("%d ",arr[k]);
				}
			}
		}
	}
	
	
	return 0;
} 			
