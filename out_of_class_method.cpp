#include<iostream>
using namespace std;
class squere{
	int side;
	public:
		set();
		cal_area();
		cal_volume();
};
squere::set(){
	cout<<"Enter your side of squere";
	cin>>side;
}
squere::cal_area()
{
	cout<<"Your squer area is:"<<side*side<<endl;
}
squere::cal_volume()
{
	cout<<"Your volume is :"<<side*side*side<<endl;
}

main(){
	squere s1;
	s1.set();
	s1.cal_area();
	s1.cal_volume();
}
