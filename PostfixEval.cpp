#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int maxSize;

class Stack
{
    int s[100];
    int top;

public:
    Stack(){
    top=-1;
    }
    void push(int);
    int pop();
    void display();
    int empty();
    char topp();
};

void Stack::push(int x){
    if(top==maxSize-1)
        cout<<"Stack is full";
    else
        s[++top]=x;
}

int Stack::pop(){
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

int eval(int op1, int op2, char operate) {
   switch (operate) {
      case '*': return op2*op1;
      case '/': return op2/op1;
      case '+':return  op2+op1;
      case '-': return op2-op1;
      default : return 0;
   }
}

int evalPostfix(char postfix[], int size) {
   Stack s;
   int i=0,val=0,op1=0,op2=0;
   char ch;
   for(i=0;i<size;i++) {
      ch = postfix[i];
      if(ch >= '0' && ch <= '9'){
         int t=(int)ch-48;
         s.push(t);
        }
      else {
         op1=s.topp();
         s.pop();
         op2 =s.topp();
         s.pop();
         val = eval(op1, op2, ch);
         s.push(val);
      }
   }
   return val;
}
int main() {
   char postfix[100];
   cout<<"Enter a postfix expression:";
   gets(postfix);
   int size = strlen(postfix);
   maxSize=size;
   int val = evalPostfix(postfix, size);
   cout<<"\nExpression evaluates to "<<val;
   cout<<endl;
   return 0;
}
