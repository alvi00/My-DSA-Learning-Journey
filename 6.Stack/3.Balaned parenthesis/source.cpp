#include "header.h"
alvi::alvi(string a)
{
    anas=a;
    top=-1;
}

bool alvi::isempty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {

        return false;
    }
}

bool alvi::isfull()
{
    if(top==max_item)
    {
        return true;
    }
    else
    {

        return false;
    }
}

bool alvi::isbalanced()
{
    int n=anas.length();
    for(int i=0; i<n;)
    {
        if(anas[i]=='('||anas[i]=='{'||anas[i]=='[')
        {
            push(anas[i]);
        }
        else
        {
            if(isempty()==true)
            {
                cout<<"This is not balaned";
                return false;
            }
            else
            {
                if(anas[i]==')')
                {
                    char x=top_el();
                    pop();
                    if(x!='(')
                    {
                        cout << "This is not balanced";
                        return false;
                    }

                }

                else if(anas[i]=='}')
                {
                    char x=top_el();
                    pop();
                    if(x!='{')
                    {
                        cout << "This is not balanced";
                        return false;
                    }

                }

                else if(anas[i]==']')
                {
                    char x=top_el();
                    pop();
                    if(x!='[')
                    {
                        cout << "This is not balanced";
                        return false;
                    }

                }
            }

        }
        i++;
    }

    if(isempty()==true)
    {
        cout<<"This is balanced";
        return true;
    }
    else
    {
        cout<<"This is not balanced";
        return false;
    }

}


void alvi:: push(char a)
{
    if(isfull()==true)
    {
        cout<<"This is full";
    }
    else
    {
        top++;
        arr[top]= a;
    }
}

void alvi::pop()
{
    if(isempty()==true)
    {
        cout<<"This is empty";
    }
    else
    {
        top--;
    }
}

char alvi::top_el()
{
    return arr[top];
}

