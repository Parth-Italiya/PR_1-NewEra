/*2. WAP to create a class to read and add two times.
Output:
Enter first time : 2
Enter second time : 3
first time : 2
second time : 3
*/

#include<iostream>
using namespace std;

class Time{
	public:
	int	firstT;
	int secondT;
};

int main(){
	int i;
	Time t1;
cout << "Enter first time : ";
	cin >>  t1.firstT ;
	cout << "Enter second time : ";
	cin >>  t1.secondT ;
	cout << "first time : " << t1.firstT<<endl;
	cout << "second time : " << t1.secondT << endl;
	
}
