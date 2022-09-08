#include<iostream>
#include<cmath>
using namespace std;
int isPrime(int num)
{
	bool flag = true;
    for(int i =2 ; i<sqrt(num); i++)
    {
        if(num%2==0)
        {
           
            flag = false;
          
        }
    }
    	if(flag){
			     cout<<num<<" is prime";
			 }
			 else
			 cout<<num<<" is not prime";
   
}
int main()
{
    int num;
    cin>>num;
    
    isPrime(num);
  
  return 0;
}
