/*
3. WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.

Output:
time in second: 3600
second in minute:60
second in hour:  1*/

#include<iostream>
using namespace std;

class Time{
	public:
		float second;
};

int main(){
int i;
	Time t2;
	
	cout<<"time in second: ";
	cin>>t2.second;
	
	cout<<"second in minute:"<<t2.second/60<<endl;
	cout<<"second in hour:  "<<t2.second/3600;
}

