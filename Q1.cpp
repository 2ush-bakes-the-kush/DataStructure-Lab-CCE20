#include<iostream>
#include<conio.h>
using namespace std;
class list
{
int data;
list *link;
public:
void ins_end();
void ins_front();
void ins_n(int n);




void traverse();

};
list *first=NULL;
void list::reverse()
{
list *curr,*prev;
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
void list::ins_n(int n)
{
int count=0,i=1;
for(list *curr=first;curr!=NULL;curr=curr->link) count++;
cout<<"Count= "<<count;
list *temp=new list;
cout<<" Enter data: ";
cin>>temp->data;
temp->link=NULL;
if(n==1&&count==0) first=temp;
else if(n<count)
{
for(list *curr=first;i<n;curr=curr->link,i++);
temp->link=curr->link;
curr->link=temp;
}
traverse();
}
int list::count()
{
list *p;
int count=0;
for(p=first;p!=NULL;p=p->link)
count++;
return count;
}
void list::ins_end()
{
list *temp;
temp=new list;
cout<<"\nenter the data:";
cin>>temp->data;
temp->link=NULL;
if(first==NULL)
first=temp;
else
{
for(list *curr=first;curr->link!=NULL;curr=curr->link);
curr->link=temp;
}
traverse();
}
void list::ins_front()
{
list *temp;
temp=new list;
cout<<"\nenter the data:";
cin>>temp->data;
temp->link=NULL;
if(first==NULL)
first=temp;
else
{
temp->link=first;
first=temp;
}
traverse();
}


int main()
{

list l;
int ch,n;
do
{
cout<<"\n1 insert end\t2 insert front\t\t3. delete front\n4 delete end\t5. delete specific\t6.traverse\t7.count\n0.exit";
cout<<" 8. Insert nth node \n 9. sort 10. reverse \nenter your choice:";
cin>>ch;
switch(ch)
{
case 1:l.ins_end();break;
case 2:l.ins_front();break;
case 3:l.del_front();break;
case 4:l.del_end();break;
case 5:l.delSpecific();break;
case 6:l.traverse();break;
case 7:cout<<"\nNo of nodes: "<<l.count()<<endl; break;
case 8: cout<<"Enter value for n: ";cin>>n; l.ins_n(n);break;
case 9:l.sort(); break;
case 10: l.reverse();break;
case 0:break;
default:cout<<"\ninvalid input";break;
}
}while(ch!=0);

}
