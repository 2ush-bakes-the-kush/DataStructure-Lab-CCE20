#include<iostream>
#include<conio.h>
using namespace std;
class node
{
public:
int coe;
int exp;
node *link;
void ins(int c,int e);
void ins1(int c1,int e1);
void ins2(int c2,int e2);
void add();
void disp();
};
node *first=NULL;
node *fi=NULL;
node *curr=NULL;
node *second=NULL;
node *cu=NULL;
void node::ins(int c,int e)
{
node *temp=new node();
temp->coe=c;
temp->exp=e;

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
void node::ins1(int c,int e)
{
node *temp1=new node();
temp1->coe=c;
temp1->exp=e;

if(second==NULL)
{
second=temp1;
}
else
{
for(curr=second;curr->link!=NULL;curr=curr->link);
curr->link=temp1;
}
}
void node::ins2(int c,int e)
{
node *temp2=new node();
temp2->coe=c;
temp2->exp=e;

if(fi==NULL)
{
fi=temp2;
}
else
{
for(cu=fi;cu->link!=NULL;cu=cu->link);
cu->link=temp2;
}
}
void node::add()
{
node *curr1;
node *result=new node();
curr=first;
curr1=second;
while(curr!=NULL)
{
while(curr1!=NULL)
{
if(curr->exp>curr1->exp)
{
ins2(curr->coe,curr->exp);
curr=curr->link;
}
else if(curr1->exp>curr->exp)
{
ins2(curr1->coe,curr1->exp);
curr1=curr1->link;
}
else if(curr->exp==curr1->exp)
{
result->coe=curr->coe+curr1->coe;
ins2(result->coe,curr->exp);
curr=curr->link;
curr1=curr1->link;
}
else
{
}
}
}
}
void node::disp()
{
for(curr=fi;curr!=NULL;curr=curr->link)
{
        cout<<curr->coe<<" ";
}

}

int main()
{
int n,n1,co;
node s;
cout<<"Enter the highest degree ";
cin>>n;
cout<<"Enter the first polynomial " <<endl;
for(int i=n;i>=0;i--)
{
cout<<"Enter the co-efficient of degree "<<i<<endl;
cin>>co;
s.ins(co,i);
}
cout<<"Enter the second polynomial " <<endl;
cout<<"Enter the highest degree ";
cin>>n1;
for(int i=n1;i>=0;i--)
{
cout<<"Enter the co-efficient of degree "<<i<<endl;
cin>>co;
s.ins1(co,i);
}
s.add();
s.disp();
}
