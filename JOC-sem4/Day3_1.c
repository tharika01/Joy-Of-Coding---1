#include <stdio.h>
int main()
{
	int i,j,k,m,n,arr[20][20],new[20][20];
	printf("Enter no. of rows\n");
	scanf("%d",&m);
	printf("Enter the no. of columns\n");
	scanf("%d",&n);
	for(i = 0;i <m;i++)
		for(j = 0;j <n;j++)
			scanf("%d",&arr[i][j]);
	for(i = 0;i<m;i++)
	{
		for(j = n-1,k=0;j>=0;j--,k++)
		{
			new[k][i] = arr[i][j];
		}
	}
	printf("\n");
	for(i = 0;i <m;i++)
	{
		for(j = 0;j <n;j++)
		{
			printf("%d ",new[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
