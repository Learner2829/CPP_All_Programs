#include<iostream>
using namespace std;
class squer{
	int side;
	public:
		set_side()
		{
			cout<<"Enter side"<<endl;
			cin>>side;
		}
		count_area(){
			cout<<"Your squer area is:"<<side*side<<endl;
		}
		count_perimeter(){
			cout<<"Your perimeter is :"<<(4*side)<<endl;
		}
		count_volume(){
			cout<<"your volume is :"<<(side*side*side)<<endl;
		}
};
main()
{
	squer s1;
	s1.set_side();
	s1.count_area();
	s1.count_perimeter();
	s1.count_volume();
}
