#include<iostream>
using namespace std;
void quick(int* arr,int left,int right)
{
        int i,j,flag=1;
        if(left<right)
        {
            int pivot=arr[left];
            i=left+1;
            j=right;
            while(flag)
            {
                while(arr[i]<pivot&&i<right)
                    i++;
                while(arr[j]>pivot&&j>left)
                    j--;
                if(i<j)
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                else
                    flag=0;
            }
        }
        int temp=arr[left];
        arr[left]=arr[j];
        arr[j]=temp;
        quick(arr,left,j-1);
        quick(arr,j+1,right);
}
int main()
{
    int testcase,n;
    cin>>testcase;
    for(int i=0;i<testcase;i++)
    {
        cin>>n;
        int *arr=(int *)malloc(n*sizeof(int));
        for(int j=0;j<n;j++)
        cin>>arr[j];
        quick(arr,0,n-1);
        for(int j=0;j<n;j++)
        cin>>arr[j];
    }
	return 0;
}
