#include<iostream.h>
#include<conio.h>
void linear(int[10], int);
void binary(int[10], int);
void bubble(int[10]);
int main(){
	clrscr();
	int a[100],i,s,op;
	cout<<" Enter 10 Numbers:" ;
	for(i=0;i<10;i++)
		cin>>a[i];
       cout<<"Enter the number to be searched" ;
		cin>>s;
	cout<<"Enter 1 for Linear Search and 2 for Binary search;";
		cin>>op;
	if(op==1)
		linear(a, s);
	else if(op==2)
		binary(a, s);
	getch();
	return 0;
	}
void linear(int x[10],int search ){
	int c=0,pos,i;
	for(i=0;i<10;i++){
		if(x[i]==search){
		c=1;
		pos=i;
		}
	}
	if(c==1)
		cout<<"Searched element found in "<<pos+1<<" position.";
	else
		cout<<"Searched element not found";
	}
void binary(int x[10], int search){
       bubble(x);
       int l=9,m=5,s=0,i;
       while(s<l){
		if(x[m]>search)
			l=m-1;
		else if(x[m]<search)
			s=m+1;
		else{
			cout<<"Search Element found in "<<m+1<<" Position";
			break;
		}
		m=(l+s)/2;
	 }
	 if(s>l)
		cout<<"Search Element not found";
}
void bubble(int x[100])
{
	for(int j=0;j<10;j++){
		for(int i=0; i<10-1; i++){
			if(x[i]>x[i+1]){
				 int temp = x[i];
				 x[i] =x[i+1];
				 x[i+1] = temp;
			}
		}
	}
}