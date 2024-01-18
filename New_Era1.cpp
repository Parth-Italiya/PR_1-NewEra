/*1. WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
Output:
Enter feet 1 : 20
Enter inch 1 : 15
Enter feet 2 : 32
Enter inch 2 : 16
the sum of feet is : 52
the sum of inch is : 31
*/

#include<iostream>
using namespace std;

class Distance{
	public:
		int feet;
		int inch;
};
int main(){
	Distance d1,d2;
	int i,sum,feet,inch;
	
	cout << "Enter feet 1 : ";
	cin >>  d1.feet ;
	cout << "Enter inch 1 : ";
	cin >>  d1.inch ;
	cout << "Enter feet 2 : ";
	cin >>  d2.feet ;
	cout << "Enter inch 2 : ";
	cin >>  d2.inch ;
		

	if(d1.inch>12 || d2.inch>12){
		d1.inch + 1 == d1.feet;
		d2.inch + 1 == d2.feet;
		d1.inch-12;
		d2.inch-12;
		
		cout << "the sum of feet is : " << d1.feet+d2.feet <<endl;
	    cout << "the sum of inch is : " << d1.inch+d2.inch;	
		
	}

}
