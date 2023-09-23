#include<iostream>
using namespace std;

class myplus{
	int a;
	int b;
	public:
		set(int c,int d)
		{
			a=c;
			b=d;
		}
		
		myplus operator +(myplus m)
		{
			a=a+m.a;
			b=b+m.b;
			return *this;
		}
		get()
		{
			cout<<"a :"<<a<<endl<<"b :"<<b<<endl;
		}
	
};
main()
{
	myplus a1,a2,a3;
	a1.set(1,2);
	a2.set(1,2);
	a3=a1+a2;
	a3.get();
	
}
