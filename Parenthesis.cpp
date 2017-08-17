#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int size;

class Stack
{
    char s[100];
    int top;

public:
    Stack(){
    top=-1;
    }
    void push(char);
    char pop();
    void display();
};

void Stack::push(char x){
    if(top==size-1)
        cout<<"Stack is full";
    else
        s[++top]=x;
}

char Stack::pop(){
    if(top==-1){
        cout<<"Empty Stack"<<endl;
        return -1;
    }
    return s[top--];
}
void Stack::display(){
    if(top==-1)
        cout<<"Empty Stack"<<endl;
    else{
        cout<<"Contents of stack \n";
        for(int i=0;i<=top;i++)
            cout<<s[i];
    }
}

int main(){
    Stack s;
    char a[100];
    char t,p,q,w;
    int i,flag=0;
    cout<<"Enter a Expression: ";
    gets(a);
    size=strlen(a);
    for(i=0;i<size;i++){
        t=a[i];
        if(t=='('||t=='{'||t=='[')
            s.push(t);

        if(t==')'||t=='}'||t==']')
            w=s.pop();
            if(t==')'&&w!='(')
                flag=1;
            else if (t=='}'&&w!='{')
                flag=1;
            else if (t==']'&&w!='[')
                flag=1;
            else
                flag=0;
    }
    if(flag==0)
        cout<<"The Parenthesis are Matching";
    else
        cout<<"The Parenthesis are not Matching";
}


