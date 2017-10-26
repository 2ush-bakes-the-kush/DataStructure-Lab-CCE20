#include<iostream>
#include<conio.h>
using namespace std;

class node
{
    public:
int data;
node *link;
void push();
void pop();
void disp();
};
node *first=NULL;
node *curr=NULL;

void node::disp()
{

    for(curr=first;curr!=NULL;curr=curr->link)
    {
        cout<<curr->data<<" ";
    }
    cout<<endl;

}
void node::pop()
{
node *w1;
w1=first;
first=first->link;
cout<<w1->data<<" ";
delete w1;
}
void node::push()
{
node *temp=new node;
cout<<"Enter the data ";
cin>>temp->data;
temp->link=NULL;
if(first==NULL)
{
first=temp;
}
else
{
for(curr=first;curr->link!=NULL;curr=curr->link);
curr->link=temp;
}
}
int main()
{
int ch,n;
node a;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1 for push 2 for pop 3 display 0 for exit  "<<endl;
cin>>ch;

switch(ch)
{
case 1:
a.push();
break;
case 2:
a.pop();
break;
case 3:
a.disp();
break;
}
}
while(ch!=0);
}
