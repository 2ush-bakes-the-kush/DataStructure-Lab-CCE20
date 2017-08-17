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
    char a[100],b[100];
    int i;
    cout<<"Enter a String: ";
    gets(a);
    size=strlen(a);
    for(i=0;i<size;i++)
        s.push(a[i]);
    for(i=0;i<size;i++)
        b[i]=s.pop();
    if (strcmp(a,b) == 0)
        cout<<"The String entered is Palindrome";
    else
        cout<<"The String entered is not Palindrome";
}

