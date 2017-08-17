#include<iostream.h>
#include<conio.h>
#include<string.h>
char a[10],b[10],c[10];
int i,j,ch;
int length(char[10]);
void concat(char [10]);
void compare(char [100]);
int main(){
	clrscr();
	cout<<"Enter\n1.Length\n2.Concatenation\n3.Comparision\n4.Insert Substring\n5.Delete Substring\n";
	cin>>ch;
	cout<<"Enter a String: ";
	cin>>a;
	if(ch==1)
	       cout<<"The Length of the array is: "<<length(a);
	else if(ch==2)
		concat(a);
	else if (ch==3)
		compare(a);
	else
		cout<<"Invalid Input";
	getch();
	return 0;
}
int length(char len[10]){
	for(i=0;len[i]!='\0';i++){
	}
	return i;
}
void concat(char a[10]){
	 cout<<"Enter another String:";
	 cin>>b;
	 for(i=0;i<strlen(a);i++)
	       c[i]=a[i];
	 for(j=0;j<strlen(b);j++)
		c[i+j]=b[j];
	 cout<<"The string after Concatenation is: ";
	 cout<<c;
}
void compare(char a[10]){
	cout<<"Enter another string:";
	cin>>b;
	int c=0;
	for(i=0;i<strlen(a);i++){
	      if(b[i]!=a[i]){
		   c=1;
		   cout<<"Strings are not the same";
		   break;
	     }
	}
	if(c==0)
		cout<<"Strings are the same";
}