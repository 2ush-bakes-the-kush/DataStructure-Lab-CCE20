#include<iostream>
#include<conio.h>
using namespace std;

class node
{
public:
int data;
node *next;
node *pre;
void ins_end();
void ins_begin();
void ins_specific(int);
void del_end();
void del_begin();
void del_specific(int);
void disp();
void sorting();
};
node *first=NULL;
node *curr=NULL;

void node::disp()
{
  curr=first;
    cout<<curr->data<<" ";
    curr=curr->next;

    while(curr!=first)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void node::sorting()
{
    node *i;
    node *j;
    for(i=first;i->next!=first;i=i->next)
    {
        for(j=i->next;j!=first;j=j->next)
        {
            if(i->data>j->data)
            {
            int temp1=i->data;
            i->data=j->data;
            j->data=temp1;
        }
    }
}
}
void node::del_specific(int n)
{
    node *p;
    int i=1;

    for(curr=first;i<n;i++,curr=curr->next)
    {
    p=curr;
    }
    p->next=curr->next;
    curr->next->pre=p;
    delete curr;
}
void node::del_begin()
{
node *w1;
w1=first;
first->next->pre=first->pre;
first->pre->next=first->next;
first=first->next;
delete w1;
}
void node::del_end()
{

        if(first->next==NULL)
    {
        node *w=first;
        first=NULL;
        delete w;
    }
    else
    {
         node *u;
    for(curr=first;curr->next!=first;curr=curr->next)
    {
        u=curr;
    }
    u->next=curr->next;
    curr->next->pre=u;
    delete curr;
}
}
void node::ins_end()
{
node *temp=new node;
cout<<"Enter the data ";
cin>>temp->data;
temp->next=NULL;
temp->pre=NULL;
if(first==NULL)
{
first=temp;
first->next=first;
}
else
{
for(curr=first;curr->next!=first;curr=curr->next);
curr->next=temp;
temp->pre=curr;
temp->next=first;
first->pre=temp;
}
}
void node::ins_begin()
{
node *temp=new node();
cout<<"Enter the data ";
cin>>temp->data;
temp->next=NULL;
temp->pre=NULL;
if(first==NULL)
{
first=temp;
first->next=first;
}
else
{
temp->pre=first->pre;
temp->next=first;
first->pre->next=temp;
first->pre=temp;
first=temp;
}
}
void node::ins_specific(int n)
{
    n=n-1;
int i=1;
for(curr=first;i<n;curr=curr->next,i++);
node *temp=new node();

cout<<"Enter the data ";
cin>>temp->data;
temp->next=NULL;
temp->pre=NULL;
temp->pre=curr;
temp->next=curr->next;
curr->next->pre=temp;
curr->next=temp;
}
int main()
{
int ch,n;
node a;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1: Insert at end \n2: Insert at Beginning \n3: Insert at a given Position \n4: Display \n5: Delete from End\n6: Delete from begin\n7: Delete from specific\n8: Sorting\n0: Exit"<<endl;
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
cout<<"Enter the position ";
cin>>n;
a.ins_specific(n);
break;
case 4:
    a.disp();
    break;
case 5:
    a.del_end();
    break;
case 6:
    a.del_begin();
    break;
case 7:
    cout<<"Enter the position :";
    cin>>n;
    a.del_specific(n);
    break;
case 8:
    a.sorting();
    break;
    }
}
while(ch!=0);
}
