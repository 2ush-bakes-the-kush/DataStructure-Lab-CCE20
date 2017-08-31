#include<iostream>

using namespace std;

class queue
{
	int a[10], front, rear, maxsize;
    public:
    queue()
	{
		maxsize=10;
		front=rear=0;
	}
	queue(int m)
	{
		maxsize=m;
		front=rear=0;
	}
	int Isfull()
	{
		if((rear+1)%(maxsize)==front)
			return 1;
		else return 0;
	}
	int Isempty()
	{
		if(rear==front)
			return 1;
		else return 0;
	}
	void insert(int);
	void del();
	void disp();
 };
 void queue::insert(int e)
 {
	if(Isfull())
		cout<<"\nqueue is full";
	else
	{
		rear=(rear+1)%maxsize;
		a[rear]=e;
		cout<<"\nA["<<rear<<"]="<<e;
	}
 }
 void queue::del()
 {
	if(Isempty())
		cout<<"\nqueue is empty";
	else
	{
		front=(front+1)%maxsize;
		cout<<"element deleted is"<<a[front];
	}
 }
 void queue::disp()
 {
      if(Isempty())
	cout<<"Q is empty";
      else
      {
     for(int i=(front+1)%maxsize;i!=(rear+1)%maxsize;i=(i+1)%maxsize)
cout<<a[i]<<"\t";
}
 }
int main (int argc, char *argv[])
 {

	queue q;int ch,m,ele;
	cout<<"\nEnter the maximum size of the array:";
	cin>>m;
	q=queue(m);
	do
	{
		cout<<"\n1.Insert\n2.Delete\n3.Display\n0.Exit";
		cout<<"\nenter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nenter the element to be inserted:";
				cin>>ele;
				q.insert(ele);
				break;
case 2: q.del();
				break;
			case 3: q.disp();
				break;
			case 0: break;
			default: cout<<"\ninvalid input";
		}
	}while(ch!=0);
	return 0;
 }

