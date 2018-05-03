#include<stdio.h>
int main()
{
    char s1[255],s2[255];
    int num1[255],num2[255],sum[255];
    int i,j,l1=0,l2=0,carry=0,k;
    printf("Enter the first number:");
    scanf("%s",s1);
    printf("Enter the second number:");
    scanf("%s",s2);
    i=0;
    while(s1[i]!='\0')
    {
        num1[i]=s1[i]-'0';
        i++;
        l1++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        num2[i]=s2[i]-'0';
        i++;
        l2++;
    }
    for(i=0;i<l1;i++)
        printf("%d",num1[i]);
        printf("+");
    for(i=0;i<l2;i++)
        printf("%d",num2[i]);
        printf("\nsize of num1:%d\nsize of num2:%d\n",l1,l2);
    i=l1-1;
    j=l2-1;
    k=0;
    while(i>=0&&j>=0)
    {
    	sum[k]=(num1[i]+num2[j]+carry)%10;
    	carry=(num1[i]+num2[j]+carry)/10;
    	k++;
    	i--;
    	j--;
	}
	if(l1>l2)
	{
		while(i>=0)
		{
			sum[k]=(num1[i]+carry)%10;
			carry=(num1[i]+carry)/10;
			k++;
			i--;
		}
	}
    else if(l1<l2)
    {
    	while(j>=0)
    	{
    		sum[k]=(num2[j]+carry)%10;
    		carry=(num2[j]+carry)/10;
    		k++;
    		j--;
		}
	}
	else if(carry>0)
	sum[k++]=carry;
	printf("\n=RESULT=\n");
	i=k-1;
	while(i>=0)
    {
        printf("%d",sum[i]);
        i--;
    }
	return 0;
}
