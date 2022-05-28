#include<stdio.h>
#include <string.h>
int main()
{
	int i ,max=0,j=0,max_i;
	int count=0;
	char str[] = {"abigblackbearsatonabigblackrug"};
	char alpha[] = {'a','b','e','g','i','k','l','n','o','r','s','t'};
	for(i = 0;i < strlen(alpha);i++)
	{
		for(j = 0;j < strlen(str);j++)
		{
			count=0;
			//printf("%c",str[j]);
			if(alpha[i]==str[j])
			{
				if(count > max)
				{
					max = count;
					max_i= j;
				}
			}
		}
	}
	printf("%c",alpha[max_i]);
	return 0;
}	
