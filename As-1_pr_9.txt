#include<iostream>
using namespace std;
//For a supermarket, define a bill class.
//All the bill objects will contain bill number, 
//name of clerk preparing the bill, 
//each item with quantity and price, 
//total amount to be paid.
//Total items in the bill are varying. 
//Define dynamic memory allocation constructor 
//for bill class such that any number of items from 1 to 50 can be accommodated in a single bill. 
//There is an array describing each item with price. 
//Price is to be picked up from that array.
//Now overload = operator and provide reasons for need of such operator.
//Use Exception Handling techniques to handle errors.

class bill{
	int bill_number;
	string name;
	string* item;
	float* price;
	float total_amount;
	int item_size;
	public:
		bill(int item_num)
		{
			if(item_num>1&&item_num<50)
			{
				cout<<"Valid item number"<<endl;
				item = new string[item_num];
				price = new float[item_num];
				item_size=item_num;	
			}
			else{
				cout<<"invalid bill number"<<endl;
			}
		}
		set_data()
		{	
			cout<<"Enter bill number : "<<endl;
			cin>>bill_number;
			cout<<"Enter customer name : "<<endl;
			cin>>name;
				for(int i=1;i<item_size;i++)
			{
				cout<<"Enter item name "<<i<<":"<<endl;
				cin>>item[i];
				cout<<"Enter item price "<<i<<":"<<endl;
				cin>>price[i];
				total_amount=total_amount+price[i];
			}
		}
		show_data()
		{
			cout<<"Bill ID :"<<bill_number<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"Total item is :"<<item_size-1<<endl;
				for(int i=1;i<item_size;i++)
			{
				cout<<"item name "<<i<<":"<<item[i]<<endl;
				cout<<"item price "<<i<<":"<<price[i]<<endl;
			}
			cout<<"-------------------------------------------"<<endl;
			cout<<"Total amout of this bill is :"<<total_amount<<endl;
			
		}
		bill operator =(bill a1)
		{
		this->bill_number=a1.bill_number;
		this->name=a1.name;
		this->total_amount=a1.total_amount;
		this->item_size=a1.item_size;	
		for(int i=1;i<a1.item_size;i++)
		{
			this->item[i]=a1.item[i];
			this->price[i]=a1.price[i];
		}
			return *this;
		}
		
};
main()
{
	bill b1(2),b3(2);
	b1.set_data();
	b1.show_data();
	b3=b1;
	b3.show_data();
}
//output
//Valid item number
//Valid item number
//Enter bill number :
//1
//Enter customer name :
//as
//Enter item name 1:
//ms
//Enter item price 1:
//100
//Bill ID :1
//Name:as
//Total item is :1
//item name 1:ms
//item price 1:100
//-------------------------------------------
//Total amout of this bill is :100
//Bill ID :1
//Name:as
//Total item is :1
//item name 1:ms
//item price 1:100
//-------------------------------------------
//Total amout of this bill is :100
//
//--------------------------------
