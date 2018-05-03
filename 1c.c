#include<stdio.h>
int main()
{
    char s1[5][20],s2[20];
    int i,j,n,k,temp1,temp2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s1[i][0]);
    }
    scanf("%s",s2);
   // i=0;
   // while(i<n)
   // {
        j=0,i=0;
        while(s1[i][j]!='\0')
        {
            j=0;
            while(s1[i][j]!=s2[0]&&s1[i][j]!='\0')
                j++;
            if(s1[i][j]=='\0')
                printf("Substring not found");
            temp1=i;
            temp2=j;
            k=0;
            while(s1[i][j]!=s2[k]&&s1[i][j]!='\0'&&s2[j]!='\0')
            {
                k++;
                j++;
            }
            if(s2[j]=='\0')
            printf("substring found at %d string at the letter %d",i+1,j+1);
            if(s1[i][j]=='\0')
            printf("Substring not found");
            j=0;
            i=i+temp1;
        }

        //i++;
    //}

}
