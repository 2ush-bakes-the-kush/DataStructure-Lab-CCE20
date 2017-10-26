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
void rev();
};
node *first=NULL;
node *curr=NULL;
void node::rev()
{
node *temp1,*temp2;
temp1=new node;
temp2=new node;
temp1=temp2=NULL;
while(first!=NULL)
{
temp1=temp2;
temp2=first;
first=first->next;
temp2->next=temp1;
temp1->pre=temp2;
}
first=temp2;
}
void node::disp()
{

    for(curr=first;curr!=NULL;curr=curr->next)
    {
        cout<<curr->data<<" ";
    }
    cout<<endl;

}
void node::sorting()
{
    node *i;
    node *j;
    for(i=first;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
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
first->next->pre=NULL;
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
    for(curr=first;curr->next!=NULL;curr=curr->next)
    {
        u=curr;
    }
    u->next=NULL;
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
}
else
{
for(curr=first;curr->next!=NULL;curr=curr->next);
curr->next=temp;
temp->pre=curr;
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
}
else
{
temp->next=first;
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
cout<<"1: Insert at end \n2: Insert at Beginning \n3: Insert at a given Position \n4: Display \n5: Delete from End\n6: Delete from begin\n7: Delete from specific\n8: Sorting\n9: Reverse\n0: Exit"<<endl;
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
case 9:
    a.rev();
    break;
    }
}
while(ch!=0);
}
