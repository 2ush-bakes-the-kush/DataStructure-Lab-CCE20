#include<iostream>
#include<conio.h>

using namespace std;


class sparse
{
	int row;
	int col;
	int value;
public:
sparse(int r,int c,int v)
	{
		row=r;
		col=c;
		value=v;
	}
	sparse()
	{
		row=col=value=0;
	}
	void slowTranspose(sparse*);
	void disp(sparse*);
};
void sparse::slowTranspose(sparse a[])
{
	sparse b[20];
	int ctr=1;

for(int i=0;i<a[0].col;i++)
{
    for(int j=1;j<=a[0].value;j++)
	{
			if(a[j].col==i)
			{
				b[ctr].row=a[j].col;
				b[ctr].col=a[j].row;
				b[ctr].value=a[j].value;
				ctr++;
			}
    }
}
	b[0].col=a[0].row;
	b[0].row=a[0].col;
	b[0].value=a[0].value;
	cout<<"INPUT SPARSE MATRIX IS:\n";
	disp(a);
	cout<<"OUTPUT USING SLOW TRANSPOSE:\n";
	disp(b);
}
void sparse::disp(sparse a[])
{
	cout<<"row\tcol\tvalue\n";
	for(int i=0;i<=a[0].value;i++)
	{
		cout<<a[i].row<<"\t"<<a[i].col<<"\t"<<a[i].value<<"\n";
	}
}
int main(int argc, char *argv[])
{
	sparse s[20];
	int r,c,v,val;
	cout<<"Enter the no. of rows:\n";
	cin>>r;
	cout<<"Enter the no. of cols:\n";
	cin>>c;
	cout<<"Enter the no. of values:\n";
	cin>>v;
	s[0]=sparse(r,c,v);
	cout<<"Enter the elements of the sparse matrix:\n";
	for(int i=1;i<=v;i++)
	{
		cout<<"\nrow "<<i<<": ";
		cin>>r;
		cout<<"\ncol "<<i<<": ";
		cin>>c;
		cout<<"\nvalue "<<i<<": ";
		cin>>val;
		s[i]=sparse(r,c,val);
	}
	s[0].slowTranspose(s);

}

