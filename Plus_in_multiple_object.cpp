#include<iostream>
using namespace std;
const int m=3;
class data{
	int id[m];
	int price[m];
	int count;
	public:
		setcount(){
			count=0;
		}
		get(){
			cout<<"Enter your id"<<endl;
			cin>>id[count];
			cout<<"Enter your price"<<endl;
			cin>>price[count];
			count++;
		}
		sow_total(){
			int total=0;
			
			for(int i=0;i<count;i++)
			{
			total=total+price[i];
		    }
			cout<<"Your price total is :"<<total<<endl;
		}
		
};

main()
{
	data d1,d2;
	d1.setcount();
	d1.get();
	d1.setcount();
	d1.get();
	d1.sow_total();
}
