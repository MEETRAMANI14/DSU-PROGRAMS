#include<iostream>
using namespace std;
class A
{
	public:
		void putdata()
		{
			cout<<"'SINGLE INHERITANCE'"<<endl;
			cout<<"Class B Used Properties of Class A :)"<<endl;
			cout<<"It Means Inheritance Works :)";
		}
};
class B : public A{};
int main()
{
		cout<<"Meet Ramani "<<endl;
	cout<<"220130318094"<<endl;
		cout<<"---------------"<<endl;
		B b;
		b.putdata();
		
		return 0;
}
