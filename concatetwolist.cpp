#include<iostream>
#include<conio.h>
using namespace std;

class node
{
public:
int data;
node *link;
node *first;
node *curr;
node()
{
first=NULL;
curr=NULL;
}
void ins_end();
void ins_begin();
void ins_specific(int);
void disp();
void sorting();
void con(node);
};
node a1;
void node::con(node a2)
{
    for(curr=a1.first;curr->link!=NULL;curr=curr->link);
    curr->link=a2.first;
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
node a2;
cout<<"Enter the first linked list :"<<endl;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1: Insert at end \n2: Insert at Beginning \n3: Insert at a given Position \n4: Display \n8: Sorting\n0: Exit"<<endl;
cin>>ch;

switch(ch)
{
case 1:
a1.ins_end();
break;
case 2:
a1.ins_begin();
break;
case 3:
cout<<"Enter the position ";
cin>>n;
a1.ins_specific(n);
break;
case 4:
    a1.disp();
    break;
case 8:
    a1.sorting();
    break;
    }
}
while(ch!=0);
cout<<"Enter the second linked list :"<<endl;
cout<<"Enter your Choice :"<<endl;
do
{
cout<<"1: Insert at end \n2: Insert at Beginning \n3: Insert at a given Position \n4: Display \n8: Sorting\n0: Exit"<<endl;
cin>>ch;

switch(ch)
{
case 1:
a2.ins_end();
break;
case 2:
a2.ins_begin();
break;
case 3:
cout<<"Enter the position ";
cin>>n;
a2.ins_specific(n);
break;
case 4:
    a2.disp();
    break;
case 8:
    a2.sorting();
    break;
    }
}
while(ch!=0);
a1.con(a2);
a1.disp();
}
