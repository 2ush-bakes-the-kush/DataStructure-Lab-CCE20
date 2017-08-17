#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int  j,arr[10],temp, i,n;
	cout<<"Enter number of entries : ";
	cin>>n;
	cout<<"Enter the numbers : ";
	for(i=0; i<n; i++)
	cin>>arr[i];
	for(i=0;i<n;i++){
		j=i;
		while(j>0 && arr[j]<arr[j-1]){
				temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
				j--;
			}
	}
	cout<<"Sorted array is : \n";
		for(i=0; i<n; i++)
			cout<<arr[i]<<"\t";
	getch();
	return 0;
}