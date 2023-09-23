#include<iostream>
using namespace std;
class sample{
	int i;
	public:
		set()
		{
			cout<<"i:";
			cin>>i;
		}
		get();
};
inline int sample::get()
{
	cout<<"Your i is :"<<i;
}

main()
{
	sample s1;
	s1.set();
	s1.get();
}
