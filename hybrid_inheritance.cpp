#include<iostream>
using namespace std;
class c1{
	protected:
		int a1;
	public:
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
class c3:public c1{
	public:
	int a3;
		c3(){};
		set(int a,int b){
			a3=b;
			c1::a1=a;
		}
		get()
		{
//			c1::get();
			cout<<"A3 :"<<a3<<endl;
		}
};
class c4:public c2,public c3{
	public:
	int a4;
		c4(){};
		set(int a,int b,int c){
			a4=c;
			c2::set(b,c);
		}
		get()
		{
			c2::get();
			c3::get();
			cout<<"A4 :"<<a4<<endl;
		}
};
main()
{
	c4 z3;
	z3.set(11,12,13);
	z3.get();
	
}
