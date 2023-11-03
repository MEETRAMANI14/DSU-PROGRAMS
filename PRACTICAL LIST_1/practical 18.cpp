#include<iostream>
#include<math.h>
int power(int,int);
using namespace std;
int main()
{
		int base,po;
		cout<<"Meet Ramani "<<endl;
	cout<<"220130318094"<<endl;
		cout<<"Enter Base ::";
		cin>>base;
		cout<<"Enter Power ::";
		cin>>po;
		
		power(base,po);
		return 0;
	
}
int power(int base, int po)
{
	int ans=0;
	
	ans=pow(base,po);
	
	cout<<"The Answer is ::"<<ans;
}

