#include<iostream.h>
#include<conio.h>
void max();
void mul();
void add();
void input(int[10][10],int,int);
void display(int[10][10],int,int);
int j=0,a[10][10],b[10][10],c[10][10],temp=0, i=0,m=0,n=0,ch=0,x,p=0,q=0,k=0;
int main(){
	clrscr();
	cout<<"Enter 1.Max Matrix\n2.Multiply Matrix\n3.Addition Matrix\n4.Magic Square"<<endl;
	cin>>ch;
	cout<<"\nEnter the dimentions of the matrix A: ";
	cin>>m>>n;
	cout<<"Enter the elements of matrix A: ";
	input(a,m,n);
	if(ch==1)
		max();
	else if(ch==2)
		mul();
	else if(ch==3)
		add();
	else
		cout<<"Invalid Input";
	getch();
	return 0;
}
void input(int x[10][10],int m,int n){
	for(i=0;i<m;i++){
		for(j=0; j<n; j++){
			cin>>x[i][j];
		  }
	}
}
void display(int x[10][10],int m,int n){
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<x[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void max(){

	cout<<"Enter the elements of Matrix B:";
	input(b,m,n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=(a[i][j]>b[i][j])?(a[i][j]):(b[i][j]);
		}
	}
	cout<<"The Matrix with the larger elements:"<<endl;
	display(c,m,n);
}
void mul(){
	cout<<"Enter the dimentions of Matrix B:";
	cin>>p>>q;
	cout<<"Enter the elements of Matrix B:";
	input(b,p,q);
	if(n==p){
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			for(k=0;k<2;k++){
				 c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	cout<<"The Multipled Matrix:\n";
	display(c,m,q);
	}
	else
		cout<<"Matrix Multiplication Not Possible";
}
void add(){
	cout<<"Enter the dimentions of Matrix B:";
	cin>>p>>q;
	cout<<"Enter the elements of Matrix B:";
	input(b,p,q);
	if(m==p&&n==q){
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		cout<<"The Matrix after addition:\n";
		display(c,m,n);
	}
	else
		cout<<"Matrix Addition Not Possible";
}