//(2)Write a menudriven program that can perform the following functionson strings. 
//(Use overloaded operators where possible).
//(Do not use predefined string class)
//1.Compare two strings for equality(==operator) 
//2.Check whether first string is smaller than the second(<=operator)
//3. Copy the string to another 
//4. Extracta character from the string(Overload[]) 
//5. Reverse the string 
//6. Concatenate two strings(+operator)
#include<iostream>
using namespace std;
class mystring{
	string str;
	public:
		set()
		{
			cout<<"Enter string :"<<endl;
			cin>>str;
		}
		show()
		{
			cout<<"Your string is :"<<str<<endl;
		}
		bool operator ==(mystring &x1)
		{
			int size1=sizeof(this->str)/sizeof(this->str[0]);
			int size2=sizeof(x1.str)/sizeof(x1.str[0]);
			if(size1==size2)
			{
				for(int i=0;i<size2;i++)
				{
					if(this->str[i]!=x1.str[i])
					{
					return 0;
					}
				}	
				return 1;
			}
			else
			{
				return 0;
			}
		} 
		void operator <=(mystring &x1)
		{
			int size1,size2,i;
			while(x1.str[i]!= '\0')
			{
				size2=size2+1;
				i=i+1;
			}
			i=0;
			while(this->str[i]!= '\0')
			{
				size1=size1+1;
				i=i+1;
			}
			if(size1<size2)
			{
				cout<<"First string is smaller than second string"<<endl;
				
			}
			else
			{
				cout<<"second string is small"<<endl;
			}
		}	
	friend copy(mystring &s1,mystring &s2);
	char operator [](int index)
	{
		if(index<str.size() && index>=0)
		{
			return str[index];
		}
		else
		{
			cout<<"Invalid string size"<<endl;
			return '\0';
		}		
	}
	string reverse(){
		  int s = str.size();
    for (int i = 0; i < s / 2; i++) {
        char temp = str[i];
        str[i] = str[s - i - 1];
        str[s - i - 1] = temp;
    }
    return str;
	}		
	string operator +(mystring s1)
	{
		string temp;
		int i;
		for( i=0;i<str.size();i++)
		{
		temp=temp+str[i];	
		}
		temp=temp+" ";
		int size2=s1.str.size();
		for( i=0;i<size2;i++)
		{
		temp=temp+s1.str[i];	
		}	
		return temp;
	}
};
		copy(mystring &s1,mystring &s2){
				int size=sizeof(s2.str)/sizeof(s2.str[0]);
				for(int i=0;i<size;i++)
				{
					s1.str[i]=s2.str[i];
				}			
			}

			
int main()
{
	mystring s1,s2;
	bool b1;
	s1.set();
	s1.show();
	s2.set();
	s2.show();
	
	//Same or not check
	if(s1==s2){
		cout<<"String are same"<<endl;
	}
	else
	{
		cout<<"String are not same"<<endl;
	}

// check less then first string
	s1<=s2;

//copy one string to another string
	copy(s1,s2);
	s1.show();
	
//index number
cout<<s2[1];

//reverse the string
cout<<s1.reverse();

//Concatenate two string
cout<<s1+s2;
	return 0;
}
//Enter string :
//ashish
//Your string is :ashish
//Enter string :
//akash
//Your string is :akash
//String are not same
//second string is small
//Your string is :akash
//k hsaka hsaka akash
