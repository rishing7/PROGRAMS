#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    int i=1,ch;
    fp1=fopen("D:/CPROGRAMS/text2.txt","w");
    while(i<=20)
    {
        putw(i,fp1);
        i++;
    }
    fclose(fp1);
    fp1=fopen("D:/CPROGRAMS/text2.txt","r");
    fp2=fopen("D:/CPROGRAMS/Even.txt","w");
    fp3=fopen("D:/CPROGRAMS/Odd.txt","w");
    while((ch=getw(fp1))!=EOF)
    {
        if(ch%2==0)
            putw(ch,fp2);
        else
            putw(ch,fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fp1=fopen("D:/CPROGRAMS/text2.txt","r");
    fp2=fopen("D:/CPROGRAMS/Even.txt","r");
    fp3=fopen("D:/CPROGRAMS/Odd.txt","r");
    printf("\nTEXT FILE IS\n");
    while((ch=getw(fp1))!=-1)
    {
        printf("%d\t",ch);
    }
    printf("\nEVEN FILE IS\n");
        while((ch=getw(fp2))!=-1)
    {
        printf("%d\t",ch);
    }
    printf("\nODD FILE IS\n");
        while((ch=getw(fp3))!=-1)
    {
        printf("%d\t",ch);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
