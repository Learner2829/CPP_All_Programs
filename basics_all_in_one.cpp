#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	//string
	string fname="Ashish";
	cout << fname <<"\n";
	//string concat	
	string lname="Patni";
	cout <<fname + " " +lname << "\n";
	//append method
	cout<< fname.append(lname) <<"\n";
	//length method
	cout<<fname.length() <<"\n";
	//size
	cout<<fname.size()<<"\n";
	//string store as a array that miss we asssisng with index number
	cout<<fname[1] <<"\n";
	//manuplation also be a posible with index number
	fname[0] ='p';
	cout<<fname <<"\n";
	//user input
	cout<<"Enter you name" <<"\n";
    //cin>>fname;
	cout<<"Your name is "<<fname <<"\n";
	//Math function
	cout<< max(11,2) << "\n";
	cout<<min(12,12)<<"\n";
	//cmath fuction
	float num=12.6;
	cout<<sqrt(num) <<"\n";
	cout<<round(num)<<"\n";
	cout<<log(10)<<endl;
	cout<<pow(2,4)<<endl;
	//boolean
	bool boo=true;
	cout<<boo<<endl;
	cout<<(1>2)<<"\n";
	cout<<(1==1)<<endl;
	//if else condition
	cout<<"Enter you age"<<endl;
	int age=12;
	if(age>=18)
	{
		cout<<"You are adult"<<endl;
	}
	else
	{
		cout<<"Yor are not adult"<<endl;
	}
	//short method
	string result=(age>=18) ? 
	"You are adult":"You are not adult";
	cout<<result<<endl;
	
	
	
	
	
}
