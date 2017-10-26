#include<iostream>
#include<conio.h>
using namespace std;

class node
{
public:
int data;
node *link;
void ins_end();
void del(int);
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
void node:: del(int n)
{
node *u;
node *w;
int i=0;
curr=first;
while(i<n)
{
if(n%2!=0)
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
a.del(n);
a.disp();
}
