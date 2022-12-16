#include <iostream>
#include <string.h>
using namespace std;

class braces
{
    char st[20];
    int top;
public:
    void push(char a);
    void pop();
    void input();
};

void braces::push(char a)
{
    top++;
    st[top]=a;

}

void braces::pop()
{
    top--;
}

void braces::input()
{
    char ch[20];
    int x=1,i=0;
    top=-1;
    cout<<"\nEnter the expression:";
    cin>>ch;
    while(i<strlen(ch))
    {
        if ((ch[i]=='{')||(ch[i]=='[')||(ch[i]=='('))
                {
                    push(ch[i]);
                }
        if (ch[i]=='}')
        {
            if (st[top]=='{')
                pop();
            else
            {
                cout<<"\nMatching opening brace '{' not found";
            }
        }

        if (ch[i]==']')
        {
            if (st[top]=='[')
                pop();
            else
            {
                cout<<"\nMatching opening brace '[' not found";
            }
        }

        if (ch[i]==')')
        {
            if (st[top]=='(')
                    pop();
            else
            {
                cout<<"\nMatching opening brace '(' not found";
            }
        }
        i++;
    }
    if (top==-1)
    {
        x=5;
        cout<<"\nStack is empty";
        cout<<"\nEXPRESSION IS WELL PARENTHESIZED\n";
    }
    else
    {
        while(top!=-1)
        {
            if (st[top]=='[')
            {
                pop();
                cout<<"\nMatching closing brace ']' is not found";
            }
            if (st[top]=='{')
                {
                    pop();
                    cout<<"\nMatching closing brace '}' is not found";
                }
            if (st[top]=='(')
            {
                pop();
                cout<<"\nMatching closing brace ')' is not found";
            }
        }
        cout<<"\nEXPRESSION IS NOT WELL PARENTHESIZED";
    }
}

int main()
{
    braces c;
    c.input();
}
