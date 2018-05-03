#include<stdio.h>
int main()
{
	int t,A[100],i,n,n1,flag=1,j;
	scanf("%d",&n);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		scanf("%d",&n1);
		for(j=0;j<n;j++)
		scanf("%d",&A[i]);
		for(j=0;j<n;j++)
		{
			if(A[i]<=n1)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		printf("1\n");
		else
		printf("0");

	}
	return 0;
}
