#include<stdio.h>
#define MAX 25
char stack[MAX];
int top=-1;
void push(char symbol)
{
    top=top+1;
    stack[top]=symbol;
}
char pop()
{
    char symbol;
    symbol=stack[top];
    top=top-1;
    return symbol;
}
int isoperand(char symbol)
{
    if(symbol>='a'&& symbol<='z')
        return 1;
    else
        return 0;
}
int isoperator(char symbol)
{
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/')
        return 1;
    else
        return 0;
}
int precedence(char symbol)
{
    int result;
    switch(symbol)
    {
        case '(': result=0;break;
        case '+':
        case '-':result=1;break;
        case '*':
        case '/':result=2;break;
    }
    return result;
}
int main()
{
    char infix[MAX],postfix[MAX],symbol;
    int i,j,a,b,result;
    printf("Enter the infix expression:");
    gets(infix);
    push('(');
    i=0;
    j=0;
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        if(isoperand(symbol))
        {
            postfix[j]=symbol;
            j++;
        }
        if(isoperator(symbol))
        {
            while(precedence(stack[top])>=precedence(symbol))
            {
                postfix[j]=pop();
                j++;
            }
            push(symbol);
        }
        if(symbol==')')
        {
            while(stack[top]=='(')
            {
                postfix[j]=pop();
                j++;
            }
            pop();
        }
        i++;
    }
    while(stack[top]!='(')
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    printf("postfix expression is:%s",postfix);
    i=0;
    while(postfix[i]!='\0')
    {
        symbol=postfix[i];
        if(isoperand(symbol))
            push(symbol);
        if(isoperator(symbol))
            {
                a=pop();
                b=pop();
                switch(symbol)
                {
                    case '+':result=(b-'0')+(a-'0');break;
                    case '-':result=(b-'0')-(a-'0');break;
                    case '*':result=(b-'0')*(a-'0');break;
                    case '/':result=(b-'0')/(a-'0');break;
                }
                push(result+'\0');
            }
        i++;
    }
    result=pop()-'0';
    printf("%d",result);
    return 0;
}
