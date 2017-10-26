#include<iostream>
#include<conio.h>
using namespace std;

class node
{
    public:
char data;
node *link;
void ins_end();
void ins_begin();
void rev();
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
void node:: rev()
{

node *curr,*prev;
curr=prev=NULL;
while(first!=NULL)
{
prev=curr;
curr=first;
first=first->link;
curr->link=prev;
}
first=curr;
}

void node::ins_end()
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
void node::ins_begin()
{
node *temp=new node();
cout<<"Enter the data ";
cin>>temp->data;
temp->link=NULL;
if(first==NULL)
{
first=temp;
}
else
{
temp->link=first;
first=temp;
}
}
int main()
{
int ch;
node a;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1: Insert at end \n2: Insert at Beginning\n3: Reverse\n4: Display\n0: Exit"<<endl;
cin>>ch;

switch(ch)
{
case 1:
a.ins_end();
break;
case 2:
a.ins_begin();
break;
case 3:
a.rev();
break;
case 4:
    a.disp();
    break;

    }
}
while(ch!=0);
}
