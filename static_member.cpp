#include<iostream>
using namespace std;
class sample{
	int i;
	static int a;
	public:
		set()
		{
			cout<<"i:";
			cin>>i;
			a++;
		}
		get()
		{
		cout<<"Your i is :"<<i<<endl;
		cout<<"Your a is :"<<a<<endl;
		};
};
int sample::a=0;
main()
{
	sample s1,s2;
	s1.set();
	s1.get();
	s2.set();
	s2.get();
}
