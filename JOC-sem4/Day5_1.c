#include <stdio.h>
int main()
{
	int arr[8],i,j,k;
	//scanf("%d",&n);
	printf("Enter the number on balloon\n");
	int box[8]={0};
	for(i = 0;i <8;i++)
		scanf("%d",&arr[i]);
	for(i = 0,k =0;i <8;i++,k++)
	{
		for(j = 0;j < 8;j++)
		{
			if(arr[i] == box[j])
				break;
			
		}
		//printf("%d ",j);
		if(j == 8)
			box[k]=arr[i];
	}
	for(i = 0;i <sizeof(box)/sizeof(int);i++)
		printf("%d ",box[i]);
	return 0 ;
}
