#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int  j,arr[10],temp, i,n,min,r;
	cout<<"Enter number of entries : ";
	cin>>n;
	cout<<"Enter the numbers : ";
	for(i=0; i<n; i++)
	cin>>arr[i];
	for(i=0;i<n;i++){
		min=arr[i];
		r=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				r=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[r];
		arr[r]=temp;
	}
	cout<<"Sorted array is : \n";
		for(i=0; i<n; i++)
			cout<<arr[i]<<"\t";
	getch();
	return 0;
}