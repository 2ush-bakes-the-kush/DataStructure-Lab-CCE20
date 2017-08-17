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
    cout<<"Enter the number you want to push";
    int a;
    cin>>a;
    s.push(a);
    s.display();
    cout<<"Pop:"<<s.pop();
}


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
    cout<<"Enter the number you want to push";
    int a;
    cin>>a;
    s.push(a);
    s.display();
    cout<<"Pop:"<<s.pop();
}
