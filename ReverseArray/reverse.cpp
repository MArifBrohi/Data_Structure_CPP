#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter array size: "<<endl;
	cin>>size;
	int arr[size] ;
	cout<<"Enter array elements: "<<endl;
	for(int i =0; i<size; i++){
		cin>>arr[i];
	}
	cout<<"Sample output: "<<endl;
	for(int i =0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int i =0;
	int j =size-1;
	while(i<j){
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	cout<<"Sample output of Reverse of an array: "<<endl;
	for(int i=0 ;i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	
}
