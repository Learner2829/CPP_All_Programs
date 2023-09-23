#include<iostream>
#include<string>
using namespace std;
void plus(int a,int b)
{
	cout<<"plus:"<<a+b<<endl;
	
}
void plus2(int a,int b,int c)
{
	cout<<"plus:"<<a+b+c<<endl;
	
}
void volume(int a,int b,int c)
{
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;;
	cout<<"c:"<<c<<endl;;	
	cout<<"volume:"<<a*b*c<<endl;
}

main()
{ 
void plus(int ,int );
void plus(int ,int ,int);
void volume(int,int,int);
plus(1,2);
plus2(1,2,3);
volume(10,10,10);
}

