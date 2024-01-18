/*
Q4. WAP to create a class which Read and Print House details along with Room details.
Output:
Enter adress :-sudamachowk
Enter color :-red
Enter fan count :-5
Enter squar feet:-5000
adress is sudamachowk
color is red
fan count is 5
squar feet is 5000
*/

#include<iostream>
#include<string.h>

using namespace std;

class Room{
	public:
	  char adress[100];
	  int sf;
	  char color[100];
	  int fan;
};

int main(){
	
	Room r1;
	
	cout << "Enter adress :-";
	cin >>  r1.adress ;
	cout << "Enter color :-";
	cin >>  r1.color ;
	cout << "Enter fan count :-";
	cin >>  r1.fan ;
	cout << "Enter squar feet:-";
	cin >>  r1.sf ;
	cout << "adress is " << r1.adress << endl;
	cout << "color is " << r1.color << endl;
	cout << "fan count is " << r1.fan << endl;
	cout << "squar feet is " << r1.sf;
}
