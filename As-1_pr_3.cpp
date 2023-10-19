#include<iostream>
#include<string>
using namespace std;
//author, title, price, publisher and stock position. 
class book{
	public:
	string author;
	string title;
	float price;
	string publisher;
	int stock_position;
};
main()
{
	book b[5];
	b[0].author = "balaguru";
    b[0].title = "Programming with C"; 
    b[0].price = 300;
    b[0].publisher = "Anci";
    b[0].stock_position = 15;
	
	b[1].author="balaguru";
	b[1].title="OOCP";
	b[1].price=600;
	b[1].publisher="Anci";
	b[1].stock_position=50;	
	
	b[2].author="Ramkrishna herkher";
	b[2].title="DBMS";
	b[2].price=1200;
	b[2].publisher="gpl";
	b[2].stock_position=11;
	
	b[3].author="EF CODE";
	b[3].title="DATA BASE";
	b[3].price=800;
	b[3].publisher="gnl";
	b[3].stock_position=12;
	
	
	string temp_book;
	int copy;
	cout<<"Enter a book name which you want"<<endl;
	cin>>temp_book;
	cout<<"Enter a number of copy which you want"<<endl;
	cin>>copy;
	
	for(int i=0;i<5;i++)
	{
		if(b[i].title<=temp_book)
		{
			if(b[i].stock_position==copy)
			{
			cout<<	"Author:"<<b[i].author<<endl;
			cout<<"Title:"<<b[i].title<<endl;
			cout<<"Price:"<<b[i].price<<endl;
			cout<<"Publicer:"<<b[i].publisher<<endl;
			cout<<"Stock:"<<b[i].stock_position<<endl;
			break;
			}
			else
			{
				cout<<"Sorry! we have not stock"<<endl;
				break;
			}
	
		}
		else if(i==4){
			cout<<"Book was not found"<<endl;
		}
	}	
	
	
	
}
