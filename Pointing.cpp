#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
 	int arr[50],n;
 	cout<<"Enter The Size of Array: ";
 	cin>>n;
 	cout<<endl;
 	for(int i=0;i<n;i++)
 	{
 		cout<<"Enter The "<<i+1<<" Element: ";
 		cin>>arr[i];
 		cout<<endl;
	}
	int *p;
	p=arr;
	cout<<endl<<"Entered Elements are: "<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<*p;
	 	p++;
	 	cout<<endl;
	 }
 	return 0;
}
