#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for(int i =0; i<size; i++)
    {
        if(arr[i] == key)
        {
            cout<<"Ur searched number found at index: ";
            return i;
            
            break;
        }
      
    }
    return -1;
}
int main()
{
    cout<<"Enter size: ";
 int size;
 cin>>size;
 int arr[size];
// int *ptr = new int[size];
 cout<<"Enter arrays: ";
 for(int i =0; i<size; i++)
 {
     cin>>arr[i];
 }
 cout<<"Number to search: ";
 int key;
 cin>>key;
 cout<<linearSearch(arr , size , key);
 
    
 return 0;    
}
