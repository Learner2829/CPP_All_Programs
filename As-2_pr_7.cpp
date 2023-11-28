#include<iostream>
using namespace std;
//(7) Design a class date which sets date of object to dd, mm ,yyyy format .
//Overload + and _ operators for the class date to add given no of days to a particular date 
//object as d1 = d1 + 10 and d1 = 10 + d1 where
//d1 is set using a constructor to some valid date and to find difference between two given date.
//Display the original dates , after addition and the difference.
//The date objects created should be validated in the constructor itself.
class Date{
	int date;
	int month;
	int year;
	public:
		Date(int t_date,int t_month,int t_year){
			if(t_month>12)
			{
				cout<<"Note valid month"<<endl;
				month=0;
			}
			else
			{
				month=t_month;
			}
			if(t_date>31)
			{
				cout<<"Note valid date"<<endl;
				date=0;
			}			
			else
			{
				date=t_date;
			}
			year=t_year;
		}
	 Date operator +(int size) {
        Date newDate = *this;  

        int newDay = newDate.date + size;

        if (newDay < 31) {
            newDate.date = newDay;
        } else {        	
            newDate.month = newDate.month + 1;
            newDate.date = newDay - 31;
            if(newDate.month>12)
            {
            	newDate.year=newDate.year+1;
            	newDate.month=1;
			}
        }
		cout<<"Total "<<size<<" day is add..."<<endl;
        return newDate;
    }
    show(){
    	cout<<"Date:"<<date<<endl;
    	cout<<"Month:"<<month<<endl;
    	cout<<"Year:"<<year<<endl;
	}

		
};
main()
{
	Date d1(10,8,2002);
	d1.show();
	cout<<"Enter day"<<endl;
	int size;
	cin>>size;
	d1= d1+size;
	d1.show();
}
//output
//Date:31
//Month:12
//Year:2003
//Total 10 day is add...
//Date:10
//Month:1
//Year:2004
