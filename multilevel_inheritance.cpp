#include<iostream>
using namespace std;
class c1{
	public:
		int a1;
		c1(){};
		set(int a){
			a1=a;
		}
		get()
		{
			cout<<"A1 :"<<a1<<endl;
		}
};
class c2:public c1{
	public:
		int a2;
		c2(){};
		set(int a,int b){
			a2=b;
			c1::a1=a;
		}
		get()
		{
			c1::get();
			cout<<"A2 :"<<a2<<endl;
		}
};
class c3:public c2{
	public:
		int a3;
		c3(){};
		set(int a,int b,int c){
			a3=c;
			c1::a1=a;
			c2::a2=b;
		}
		get()
		{
			c2::get();
			cout<<"A3 :"<<a3<<endl;
		}
};
main()
{
//	c1 z1;
//	z1.set(11);
//	z1.get();
	
//	c2 z2;
//	z2.set(11,12);
//	z2.get();

	c3 z3;
	z3.set(11,12,13);
	z3.get();
	
}
