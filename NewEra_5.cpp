/*
5. WAP which illustrates the use of public and private access modifiers.
*/
#include<iostream>

using namespace std;

class D{
	public:
	  int feet;
	  int inch;
	  private :
	  	int feet;
	  	int inch;
};
int main(){
	
	D d1,d2;
	
	cout << "Enter feet 1 :-";
	cin >>  d1.feet ;
	cout << "Enter inch 1 :-";
	cin >>  d1.inch ;
	
	cout << "Enter feet 2 :-";
	cin >>  d2.feet ;
	cout << "Enter inch 2 :-";
	cin >>  d2.inch ;
	
	if(d1.inch>12 || d2.inch>12){
		d1.inch + 1 == d1.feet;
		d2.inch + 1 == d2.feet;
		
		d1.inch-12;
		d2.inch-12;
		
		cout << "the sum of feet is ==>" << d1.feet+d2.feet << "\n";
	    cout << "the sum of inch is ==>" << d1.inch+d2.inch;
	}
}

