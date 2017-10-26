#include<iostream>
using namespace std;
class dll
{
  int data;
  dll *right;
  dll *left;

  public:
  void ins();
  void disp();
  void del();
};

dll *front=NULL;
dll *rear=NULL;

void dll::ins()
{
  cout<<"\nEnter data: ";
  dll *temp=new dll;
  cin>>temp->data;
  temp->left=rear;

  if(front==NULL)
    front=temp;
  else
    rear->right=temp;
  rear=temp;
  rear->right=front;
  cout<<"\nElement inserted!";
}

void dll::del()
{
  cout<<"\nElement to be deleted: ";
  int key;
  cin>>key;
  if(front->data==key)
  {
    front->right->left=NULL;
    dll *temp=front;
    front=front->right;
    rear->right=front;
    delete temp;
  }
  if(rear->data==key)
  {
    dll *temp=rear;
    rear->left->right=NULL;
    rear=rear->left;
    rear->right=front;
    delete temp;
  }
  else
  {
    for(dll *curr=front;curr!=rear;curr=curr->right)
    {
      if(curr->data==key)
      {
	dll *temp=curr;
	curr->left->right=curr->right;
	curr->right->left=curr->left;
	delete temp;
	break;
      }
    }
  }
  cout<<"\nElement deleted!";
}

void dll::disp()
{
  cout<<"\n";
  dll *curr=front;
  for(;curr!=rear;curr=curr->right)
    cout<<curr->data<<" -> ";
  cout<<curr->data<<" -> ";
}

int main()
{
  dll l;
  int opt;
  char cont='y';

  while(cont=='y' || cont=='Y')
  {
    cout<<"\n1. Insert"
	<<"\n2. Delete"
	<<"\n3. Display"
	<<"\n\nYour choice: ";
    cin>>opt;

    switch(opt)
    {
      case 1: l.ins(); break;
      case 2: l.del(); break;
      case 3: l.disp(); break;

    }

    cout<<"\n\nContinue?(y/n): ";
    cin>>cont;
  }
}
