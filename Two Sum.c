#include<stdio.h>
int main()
{
	int i,j,key,input;
	int array[6]={10,3,2,11,6,7};
	printf("Enter your sum number:");
	scanf("%d",&key);
	for(i=0;i<6;i++)
	{
		input=key-array[i];
		for(j=i+1;j<6;j++)
		{
			if(input==array[j])
			{
				printf("%d , %d\n",array[i],array[j]);
			}
		}
	}
	
}
