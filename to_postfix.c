#include<stdio.h>
#include<stdlib.h>
#define max 25
int stack[max];
int top=-1;
void push(char symbol)
{
    if(top==max-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        top=top+1;
        stack[top]=symbol;
    }
}
char pop()
{
    char symbol;
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        symbol=stack[top];
        top=top-1;
    }
    return symbol;
}
int isoperand(char symbol)
{
    if(symbol>='a'&&symbol<='z')
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
        case '(' :result=0;break;
        case '+':
        case '-':result=1;break;
        case '*':
        case '/':result=2;break;
    }
    return result;
}
int main()
{
    char infix[max],postfix[max],symbol,temp;
    int i,j;
    i=j=0;
    printf("Enter the infix expression:");
    gets(infix);
    push('(');
    while(infix[i]!='\0')
    {
        symbol=infix[i];
        if(isoperand(symbol))
        {
            postfix[j]=symbol;
            j=j+1;
        }
        if(symbol=='(')
        {
            push(symbol);
        }
        if(isoperator(symbol))
        {
            while(precedence(stack[top])>=precedence(symbol))
            {
                temp=pop();
                postfix[j]=temp;
                j=j+1;
            }
            push(symbol);
        }
        if(symbol==')')
        {
            while(stack[top]=='(')
            {
                temp=pop();
                postfix[j]=temp;
                j=j+1;
            }
            temp=pop();
        }

        i++;
    }
        while(stack[top]!='(')
        {
            temp=pop();
            postfix[j]=temp;
            j=j+1;
        }
        postfix[j]='\0';
        printf("\nThe Postfix expression is:%s",postfix);
        return 0;
}


