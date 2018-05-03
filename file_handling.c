#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    int ch;
    fp1=fopen("D:/CPROGRAMS/text.txt","r");
    fp2=fopen("D:/CPROGRAMS/text1.txt","w");
    fp3=fopen("D:/CPROGRAMS/text1.txt","a");
    if(fp1==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        while((ch=fgetc(fp1))!=-1)
        {
            //printf("%c",ch);
            fputc(ch,fp2);
            fputc(ch,fp3);
        }
    }
    printf("\n<<Successfully copied>>\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
