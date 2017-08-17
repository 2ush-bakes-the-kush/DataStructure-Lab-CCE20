#include<iostream>

using namespace std;

int size=10;

class Stack
{
    int s[10];
    int top;

public:
    Stack(){
    top=-1;
    }
    void push(int);
    int pop();
    void display();
};

void Stack::push(int x){
    if(top==size-1)
        cout<<"Stack is full";
    else
        s[++top]=x;
}

int Stack::pop(){
    if(top==-1){
        cout<<"Empty Stack"<<endl;
        return -1;
    }
    return s[top--];
}

int main(){
    Stack s;
    int a,n,i,c=0;
    int b[100];
    cout<<"Enter the number you want to convert: ";
    cin>>a;
    cout<<"Enter the base: ";
    cin>>n;
    cout<<"The Equivalent in base "<<n<<" is: ";
    while(a>=1){
        s.push(a%n);
        c++;
        a/=n;
    }
    for(i=0;i<c;i++){
        int t=s.pop();
        if(t>9&&t<16)
            cout<<(char)(t+55);
        else
            cout<<t;
        }
}
