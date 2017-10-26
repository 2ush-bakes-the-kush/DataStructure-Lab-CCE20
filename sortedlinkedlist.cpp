#include<iostream>
#include<conio.h>
using namespace std;

class node
{
public:
int data;
node *link;
void ins_end();
void disp();
void sort(int);

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
void node::sort(int n)
{
node *temp=new node;
temp->data=n;
temp->link=NULL;
for(curr=first;curr->link!=NULL;curr=curr->link)
{
node *r;
r=curr->link;
if(n>(curr->data) && n<(r->data))
{
temp->link=curr->link;
curr->link=temp;
}
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
int main()
{
int ch,n;
node a;
cout<<"Enter the size "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
a.ins_end();
}
cout<<"Enter the node data ";
cin>>n;
a.sort(n);
a.disp();
}
