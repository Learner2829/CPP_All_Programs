/*
(3)ABC publishing company markets both book and audio cassette versions of  its work. Create a class called
 publication that stores the title( a string) and price( type float) of a publication.
 From this class derive two classes : book ,
 which adds a page count (type int); and tape, which adds playing time in minutes (type float).
 Write a main program that reads both book and tape information in one  array.
 When the user has finished entering data for all books and tapes,
 displays the resulting data for all the books and tapes entered.
 Also count no of book and cassette entries in the array using runtime identification feature of C++.
polymorphism assignment
*/

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

class publication{
	string title;
	float price;
	public:
		publication(const string& _title, float _price)
        : title(_title), price(_price) {}
        
        void getData() {
	        cout << "Enter title: ";
	        cin.ignore();
	        getline(cin, title);
	
	        cout << "Enter price: ";
	        cin >> price;
    	}
    	
    	void displayData() const {
        	cout << "Title: " << title << "\nPrice: " << price <<endl;
    	}
};

class book:public publication{
	int page_count;
	public:
		book(const string& _title, float _price, int _pageCount)
        : publication(_title, _price), page_count(_pageCount) {}
        
        void getData() {
        publication::getData();
        	cout << "Enter page count: ";
        	cin >> page_count;
    	}
    	
    	void displayData() const {
        	publication::displayData();
        	cout << "Page Count: " << page_count <<endl;
    	}
};

class tape:public publication{
	float playing_time;
	public:
		tape(const string& _title, float _price, float _playingTime)
        :publication(_title, _price), playing_time(_playingTime) {}
        
        void getData() {
        	publication::getData();
        	cout << "Enter playing time (minutes): ";
        	cin >> playing_time;
    	}
    	
    	void displayData() const {
        	publication::displayData();
        	cout << "Playing Time: " << playing_time << " minutes" << std::endl;
    	}
    	
};

int main(){
	int maxpublication = 5;
	publication* publications[maxpublication];
	int bookcount = 0, tapecount = 0;
	char choice;
	
	do{
		cout<<"enter data for book(B) or tape(T): ";
		cin>>choice;
		
		 if (choice == 'B' || choice == 'b') {
            publications[bookcount] = new book("", 0.0, 0);
            publications[bookcount]->getData();
            ++bookcount;
        } else if (choice == 'T' || choice == 't') {
            publications[tapecount] = new tape("", 0.0, 0.0);
            publications[tapecount]->getData();
            ++tapecount;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
        
        cout << "Do you want to enter data for another publication? (Y/N): ";
        cin >> choice;
	}while (choice == 'Y' || choice == 'y');
	
	cout << "\nDisplaying data for all publications:\n";
    for (int i = 0; i < bookcount + tapecount; ++i) {
        publications[i]->displayData();
        cout << "\n";
    }
    
    int bookEntries = 0, tapeEntries = 0;
    
    for (int i = 0; i < bookcount + tapecount; ++i) {
        if (typeid(*publications[i]) == typeid(book)) {
            ++bookEntries;
        } else if (typeid(*publications[i]) == typeid(tape)) {
            ++tapeEntries;
        }
    }
    
    cout << "\nNumber of Book entries: " << bookEntries << "\n";
    cout << "Number of Tape entries: " << tapeEntries << "\n";

    for (int i = 0; i < bookcount + tapecount; ++i) {
        delete publications[i];
    }
    
    return 0;
}

