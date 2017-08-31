
#include<iostream>
#include<conio.h>

using namespace std;

class sparse
{
	int row,col,value;
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
	void fastTranspose(sparse*);
	void disp(sparse*);
};

void sparse::fastTranspose(sparse a[])
{
	sparse b[20];
	int rowterm[20], start_pos[20], i, j, k;
	b[0].col=a[0].row;
	b[0].row=a[0].col;
	b[0].value=a[0].value;
// place 0s into rowterm array. Before this the rowterm has all random values
	for(i=0;i<a[0].col;i++)
		rowterm[i]=0;
	for(j=1;j<=a[0].value;j++)
		rowterm[a[j].col]++;
	start_pos[0]=1;
	for(k=1;k<a[0].col;k++)
		start_pos[k]=start_pos[k-1]+rowterm[k-1];

	for(k=1;k<=a[0].value;k++)
	{
		int x=start_pos[a[k].col];
		b[x].row=a[k].col;
b[x].col=a[k].row;
		b[x].value=a[k].value;
		start_pos[a[k].col]++;
	}
	cout<<"OUTPUT USING FAST TRANSPOSE:\n";
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

int main (int argc, char *argv[])
{
	sparse s[20];
	int r,c,v,val;
	cout<<"Enter the no. of rows:\n";	cin>>r;
	cout<<"Enter the no. of cols:\n";	cin>>c;
	cout<<"Enter the no. of values:\n";	cin>>v;
	s[0]=sparse(r,c,v);

	cout<<"Enter the elements of the sparse matrix:\n";
	for(int i=1;i<=v;i++)
	{
		cout<<"\nrow "<<i<<": ";		cin>>r;
		cout<<"\ncol "<<i<<": ";		cin>>c;
		cout<<"\nvalue "<<i<<": ";		cin>>val;
		s[i]=sparse(r,c,val);
	}
	s[0].fastTranspose(s);
}

