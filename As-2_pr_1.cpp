#include <iostream>
#include <vector>
using namespace std;
//(1) Overload all the four arithmetic operators to operate on a vector class 
//and also the overload the*operator to multiply scalar values to the vector class.
//Overload the >> operator to input a vector and the<<operator to display the vector in the form (10,20,.....).
//Also overload the [] operator to access the individual member of the vector. 
//Use Dynamic memory allocation to achieve the solution. 
//Write appropriate constructor and destructure for the class
class myvector{
	int size;
	int* arr;
	public:
		myvector(){
		}
		myvector operator +(myvector& m1){
			myvector temp;
			temp.arr = new int[size];
			for(int i=0;i<size;i++)
			{
				temp.arr[i]=this->arr[i]+m1.arr[i];
			}
			return temp;
		}
	myvector& operator=(const myvector& m1) {
    // Check for self-assignment
    if (this != &m1) {
        // Deallocate existing memory
        delete[] arr;

        // Allocate new memory and copy elements
        size = m1.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = m1.arr[i];
        }
    }
    return *this;  // Return reference to the modified object
}
		set(){
			cout<<"Enter size of vector"<<endl;
			cin>>size;
			arr= new int[size];
			for(int i=0;i<size;i++)
			{
				cout<<"Enter:"<<endl;
				cin>>this->arr[i];
			}
		}
		show()
		{
			cout<<"Vector:"<<endl;
			for(int i=0;i<=size;i++)
			{
			cout<<this->arr[i]<<endl;
			}
		}
	
};
int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    vector<int> v1(arr, arr + sizeof(arr) / sizeof(arr[0]));
//		cout<<sizeof(arr)<<endl;
//		cout<<arr<<endl;
//		cout<<sizeof(arr[0])<<endl;	
//		vector<int> v1(arr,arr+5);	
 myvector v1,v2,v3;
v1.set();
v2.set();
v3=v1+v2;
v3.show();
    return 0;
}

