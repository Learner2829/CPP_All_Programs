#include<iostream>
using namespace std;
enum shapes{
	circle=1,
	rectangle,
	squaer,
	triangle
};
main()
{
	int index;
	cout<<"Enter shape or number of shape for show output"<<endl;
	cin>>index;
	enum shapes s=static_cast<shapes>(index);
	
	switch (s){
		case 1:
			cout<<"Your chose 1 for circle"<<endl;
			break;
		case 2:
			cout<<"Your chose 2 for rectangle"<<endl;
			break;
		case 3:
			cout<<"Your chose 3 for squer"<<endl;
			break;
		case 4:
			cout<<"Your chose 4 for tirangle"<<endl;
			break;
		default:
			cout<<"Enter valid input";
			break;
	}
	
	
	
	
}
