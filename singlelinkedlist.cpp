#include<iostream>
#include<conio.h>
using namespace std;

class node
{
    public:
int data;
node *link;
void ins_end();
void ins_begin();
void ins_specific(int);
void del_end();
void del_begin();
void del_specific(int);
void disp();
void sorting();
void del();
void rev();
};
node *first=NULL;
node *curr=NULL;
void node::rev()
{
node *curr1,*prev;
curr1=prev=NULL;
while(first!=NULL)
{
prev=curr1;
curr1=first;
first=first->link;
curr1->link=prev;
}
first=curr1;
}
void node:: del()
{
    int n1=1;
 for(curr=first;curr->link!=NULL;n1++,curr=curr->link);
node *u;
node *w;
int i=0;
curr=first;
while(i<n1)
{
if(n1%2!=0)
{
if(i%2!=0)
{
w=curr;
u->link=curr->link;
curr=curr->link;
i++;
delete w;
}
else
{
u=curr;
curr=curr->link;
i++;
}
}
else
{
 if(i%2!=0)
{
    if(curr->link==NULL)
    {
        w=curr;
        u->link=NULL;
        i++;
        delete w;
    }
else
{
w=curr;
u->link=curr->link;
curr=curr->link;
i++;
delete w;
}
}
else
{
u=curr;
curr=curr->link;
i++;
}
}
}
}

void node::disp()
{

    for(curr=first;curr!=NULL;curr=curr->link)
    {
        cout<<curr->data<<" ";
    }
    cout<<endl;

}
void node::sorting()
{
    node *i;
    node *j;
    for(i=first;i->link!=NULL;i=i->link)
    {
        for(j=i->link;j!=NULL;j=j->link)
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
    node *pre;
    int i=1;
    for(curr=first;i<n;i++,curr=curr->link)
    {
    pre=curr;
    }
    pre->link=curr->link;
    delete curr;
}
void node::del_begin()
{
node *w1;
w1=first;
first=first->link;
delete w1;
}
void node::del_end()
{

        if(first->link==NULL)
    {
        node *w=first;
        first=NULL;
        delete w;
    }
    else
    {
         node *u;
    for(curr=first;curr->link!=NULL;curr=curr->link)
    {
        u=curr;
    }
    u->link=NULL;
    delete curr;
}
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
void node::ins_specific(int n)
{
    n=n-1;
int i=1;
for(curr=first;i<n;curr=curr->link,i++);
node *temp=new node();

cout<<"Enter the data ";
cin>>temp->data;
temp->link=NULL;
temp->link=curr->link;
curr->link=temp;
}
int main()
{
int ch,n;
node a;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1: Insert at end \n2: Insert at Beginning \n3: Insert at a given Position \n4: Display \n5: Delete from End\n6: Delete from begin\n7: Delete from specific\n8: Sorting\n9: Alternate deletion\n10: Reverse\n0: Exit"<<endl;
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
        a.del();
        break;
    case 10:
        a.rev();
        break;
    }
}
while(ch!=0);
}
