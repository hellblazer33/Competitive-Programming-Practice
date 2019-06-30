
/*
Algorithm:

[1] While there is more input continue to [2] otherwise go to [6]
[2] Scan in the next character
[3] Determine whether it is a bracket, operand, or operator
[4a] If it is an operand, print it to the output
[4b] If it is a left bracket, push onto stack
[4c] If it is a right bracket,
  while( left bracket is not  encountered on the stack  )
         keep popping the stack and printing into the output
Pop the left bracket also from the stack  but doesn't print it.
[4d] If it's an operator - check for precedence if the top of the stack is an operator and it has higher precedence than current operator then pop the stack and print onto output, continue until condition is false. Then push in the current operator into stack.
[5] Go back to [1]
[6] exit


The program is : */

#include<stdio.h>
#include<string.h>


int top=-1;
char stack[200];
void push(int data)
{
    stack[++top]=data;
}
char pop()
{
    char data=stack[top];
    top--;
    return data;
}
int main()
{
    char expr[401],ans;
    int t,i,len;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",expr);
        len=strlen(expr);
        for(i=0;i<len;i++)
        {
            if(isalpha(expr[i]))
               printf("%c",expr[i]);
            else if(expr[i]=='(')
                        push('(');
            else if(expr[i]==')')
            { while(stack[top]!='(')
                     printf("%c",pop());
                pop();

            }
            else if(expr[i]=='^')
            {
                while(stack[top]=='^')
                    printf("%c",pop());
                push(expr[i]);
            }
            else if(expr[i]=='/'||expr[i]=='*')
            {
                while(stack[top]=='/'||stack[top]=='*'||stack[top]=='^')
                    printf("%c",pop());
                push(expr[i]);
            }
            else if(expr[i]=='+'||expr[i]=='-'){
               // while(stack[top]=='+'||stack[top]=='-'||stack[top]=='*'||stack[top]=='/'||stack[top]=='^')
               while(stack[top]!='(')
                  printf("%c",pop());
            push(expr[i]);
            }
            }

             printf("\n");
        }

        return 0;

    }