#include<stdio.h>
int main()
{
    char* time=(char*)malloc(100*(sizeof(char)));
    scanf("%s",time);
    char am[]="AM";
    char pm[]="PM";
    //time=12:55:32AM
    int j,i,flag1=0,flag2=0,k,time1,time_result=0;
    j=0;
    i=8;
        while(time[i]==am[j]&&time[i]!='\0'&&am[j]!='\0')
        {
            i++;
            j++;
            flag1++;
        }
        if(flag1>0)
        {
            time1=0;
            printf("Time is in am format\n");

            k=0;
            while(k<2)
            {
                time1=(time[k]-'0')+time1*10;
                k++;
            }
            time1=time1+12;
            if(time1==24)
            {
                time[0]='0';
                time[1]='0';
            }
            else if(time1<24)
            {
                k=1;
                while(time1!=0)
                {
                    time[k--]=time1%10+'0';
                    time1=time1/10;
                }
            }
                    i=0;
        while(time[i]!='A')
        {
            printf("%c",time[i]);
            i++;
        }
        }
        j=0;
        i=8;
        while(time[i]==pm[j]&&time[i]!='\0'&&pm[j]!='\0')
        {
            i++;
            j++;
            flag2++;
        }
        if(flag2>0)
        {
            time1=0;
            printf("Time is in pm format\n");
            k=0;
            while(k<2)
            {
                time1=(time[k]-'0')+time1*10;
                k++;
            }
            time1=time1+12;
            if(time1==24)
            {
                time[0]='0';
                time[1]='0';
            }
            else if(time1<24)
            {
                k=1;
                while(time1!=0)
                {
                    time[k--]=time1%10+'0';
                    time1=time1/10;
                }
            }
                    i=0;
        while(time[i]!='P')
        {
            printf("%c",time[i]);
            i++;
        }
        }

    return 0;
}
