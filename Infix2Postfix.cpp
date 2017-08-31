#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int maxSize;

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
    int empty();
    char topp();
};

void Stack::push(char x){
    if(top==maxSize-1)
        cout<<"Stack is full";
    else
        s[++top]=x;
}

char Stack::pop(){
    if(top==-1){
        cout<<"Empty Stack"<<endl;
        return -1;
    }
    top--;
}
char Stack::topp(){
    return s[top];
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
int Stack::empty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

void infixToPostfix(string s)
{
    Stack st;
    char c;
    st.push('N');
    int l = s.length();
    string postfix;
    for(int i = 0; i < l; i++){
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
            postfix+=s[i];
        else if(s[i] == '(')
            st.push('(');
        else if(s[i] == ')'){
            while(st.topp() != 'N' && st.topp() != '('){
                c = st.topp();
                st.pop();
                postfix += c;
            }
            if(st.topp() == '('){
                c = st.topp();
                st.pop();
            }
        }
        else{
            while(st.topp() != 'N' && prec(s[i]) <= prec(st.topp())){
                c = st.topp();
                st.pop();
                postfix += c;
            }
            st.push(s[i]);
        }
    }
    while(st.topp() != 'N'){
        c = st.topp();
        st.pop();
        postfix += c;
    }
    cout <<"\nPostfix : "<< postfix << endl;
}
int main()
{
    char infix[100];
    cout<<"Enter an expression : ";
    gets(infix);
    maxSize=strlen(infix);
    infixToPostfix(infix);
    return 0;
}
