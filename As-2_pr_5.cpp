#include<iostream>
using namespace std;
//(5) Create a date class with the following capabilities: 
//(a)Output the date in multiple formats such as 
//DDMMYYYY 
//MM/DD/YY 
//May14,2001 
//(b)Use overloaded constructors to create Date objects in itialized with date format in section(a)
//(c) Overload operators for testing equality of two dates and for comparing dates to determine if one date is prior to,or after,anotherdate.
//(d) Create a member function nextday to increment the day by day. 
//The date object function should always remain in consistant state.Be sure to test following cases:(i)Incrementing
//to next month(ii) Incrementing into the next year.

class date{
	int t_date;
	int month;
	int year;
	string month_str;
	public:
		date(int all_date)
		{
//			Set Month
			month=all_date/1000000;
			
//			Set Date
			int i=all_date;
			int j=(i/10000);
			int z=j/100;
			z=z*100;
			t_date=j-z;
			
//			Set Year
			j=j*10000;
			year=i - j;
			
//			set month as a string
	switch(month)
			{
					case 1:
						{
							month_str="Jan";
							break;
						}
					case 2:
						{
							month_str="Feb";
							break;
						}
					case 3:
					{
						month_str="Mar";
						break;
					}
					case 4:
					{
						month_str="Apr";
						break;
					}
					case 5:
					{
						month_str="May";
						break;
					}
					case 6:
					{
						month_str="Jun";
						break;
					}
					case 7:
					{
						month_str="Jul";
						break;
					}
					case 8:
					{
						month_str="Aug";
						break;
					}
					case 9:
					{
						month_str="Sep";
						break;
					}
					case 10:
					{
						month_str="Oct";
						break;
					}
					case 11:
					{
						month_str="Nov";
						break;
					}
					case 12:
					{
						month_str="Dec";
						break;
					}
					default:
						{
						month_str="Note valid";
						break;	
						}
		}
			
		}
		date(int i_month,int i_day,int i_year)
		{
			t_date=i_day;
			month=i_month;
			year=i_year;
			
			switch(month)
			{
					case 1:
						{
							month_str="Jan";
							break;
						}
					case 2:
						{
							month_str="Feb";
							break;
						}
					case 3:
					{
						month_str="Mar";
						break;
					}
					case 4:
					{
						month_str="Apr";
						break;
					}
					case 5:
					{
						month_str="May";
						break;
					}
					case 6:
					{
						month_str="Jun";
						break;
					}
					case 7:
					{
						month_str="Jul";
						break;
					}
					case 8:
					{
						month_str="Aug";
						break;
					}
					case 9:
					{
						month_str="Sep";
						break;
					}
					case 10:
					{
						month_str="Oct";
						break;
					}
					case 11:
					{
						month_str="Nov";
						break;
					}
					case 12:
					{
						month_str="Dec";
						break;
					}
					default:
						{
						month_str="Note valid";
						break;	
						}
		}				
		}
		show()
		{
			int input;
			cout<<"Enter value Acoding you want to output"<<endl;
			cout<<"Press '1' for DDMMYYYY "<<endl;
			cout<<"Press '2' for MM/DD/YY "<<endl;
			cout<<"Press '3' for May14,2001 "<<endl;
			cin>>input;
			switch (input)
			{
				case 1:
					{
						cout<<t_date<<month<<year<<endl;
						break;
					}
				case 2:
					{
						cout<<month<<"/"<<t_date<<"/"<<year<<endl;
						break;
					}
				case 3:
					{
						cout<<month_str<<t_date<<","<<year<<endl;
						break;
					}
					default:
						{
							cout<<"Error: data format is wrong"<<endl;
						}
}
			cout<<"--------------------------------"<<endl;
		}
};
main()
{
date d1(12132004),d2(1,12,2004),d3(2,12,2012);
d1.show();
d2.show();
d3.show();
// Output:
//Enter value Acoding you want to output
//Press '1' for DDMMYYYY
//Press '2' for MM/DD/YY
//Press '3' for May14,2001
//1
//13122004
//--------------------------------
//Enter value Acoding you want to output
//Press '1' for DDMMYYYY
//Press '2' for MM/DD/YY
//Press '3' for May14,2001
//2
//1/12/2004
//--------------------------------
//Enter value Acoding you want to output
//Press '1' for DDMMYYYY
//Press '2' for MM/DD/YY
//Press '3' for May14,2001
//3
//Feb12,2012
//--------------------------------
}
