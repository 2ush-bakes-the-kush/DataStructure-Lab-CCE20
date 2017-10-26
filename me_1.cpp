#include<iostream>

using namespace std;
class cdl
{
public:
  int data;
  cdl *llink;
  cdl *rlink;
};

void insert(int d, cdl* &h)
{
    if(h==NULL)
    {
        h=new cdl;
        h->llink=h->rlink=h;
        h->data=d;
    }
    else
    {
        cdl* t=new cdl;
        t->data=d;
        t->llink=h->llink;
        t->rlink=h;
        h->llink->rlink=t;
        h->llink=t;
        h=t;
    }
}

void display(cdl* h)
{
    cout<<h->data<<"  ";
    cdl* t=h;
    h=h->rlink;
    while(h!=t)
    {
        cout<<h->data<<"  ";
        h=h->rlink;
    }
}

void deletee(cdl* &h,int d)
{
    if(h->data==d)
    {
        cdl* t=h;
        h->rlink->llink=h->llink;
        h->llink->rlink=h->rlink;
        h=h->rlink;
        delete t;
    }
    else
        {
            cdl* t=h;
            cdl* tt=h;
            t=t->rlink;
            while(t->data!=d&&t!=tt)
            {
                t=t->rlink;
            }
            if(t->data==d)
            {
                t->rlink->llink=t->llink;
                t->llink->rlink=t->rlink;
                delete t;
            }

        }
}

int main()
{


    /*

    MAKE MENU DRIVEN

    */

    cdl* h=NULL;
    insert(1,h);
    insert(2,h);
    insert(3,h);
    insert(4,h);
    display(h);
    deletee(h,2);
    deletee(h,4);
    cout<<endl;
    display(h);
}


