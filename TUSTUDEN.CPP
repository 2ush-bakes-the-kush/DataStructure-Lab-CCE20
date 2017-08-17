#include<iostream.h>
#include<conio.h>
#include<string.h>

class student{
	char name[100], grade;
	int roll_no;
	public:
		void read(student *,int n);
		void display(student *,int n);
		void sort(student *,int n);
	};
	void student::read(student s[],int n){
			for(int i=0;i<n;i++){
			       cin>>s[i].name;
			       cin>>s[i].roll_no;
			       cin>>s[i].grade;
			}
		}
	void student::sort(student s[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(s[j].roll_no>s[j+1].roll_no){
				   student temp=s[j];
				   s[j]=s[j+1];
				   s[j+1]=temp;
				   }
			}
		}
	}
	void student::display(student s[],int n){
		      for(int i=0;i<n;i++){
			       cout<<s[i].name;
			       cout<<"\t"<<s[i].roll_no<<"\t\t";
			       cout<<s[i].grade;
			       cout<<"\n";
			}
		}
int main(){
	clrscr();
	student s[10],t;
	int m;
	cout<<"Enter the number of students: ";
	cin>>m;
	cout<<"Enter the Name, Roll Number and Grade of the student:";
	t.read(s,m);
	t.sort(s,m);
	cout<<"The Details you have entered are:"<<endl;
	cout<<"Name\tRoll No.\tGrade\n";
	t.display(s,m);
	getch();
	return 0;
	}