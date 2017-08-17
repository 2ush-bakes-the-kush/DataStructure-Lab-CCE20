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
	for(j=0;j<n;j++){
		for(i=0; i<n-1; i++){
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	cout<<"Sorted array is : \n";
		for(i=0; i<n; i++)
			cout<<arr[i]<<"\t";
	getch();
	return 0;
}