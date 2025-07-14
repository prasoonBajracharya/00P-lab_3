/*Write a program to convert an object of class Dollar to an object of class Rupees. The attributes
of Dollar is dol and cent. The attributes of class Rupees is rs, and paisa. Conversion in source
class.*/
#include<iostream>
using namespace std;

class Rupees{
	int r, p;
	public:
		Rupees():r(0), p(0){}
		Rupees(int rm){
			r = rm ;
			p = rm % 100;
		}
		void display(){
			cout<<r<<" rupees "<<p<<" paisa";
		}
};
class Dollar{
	int d , c;
	public:
		Dollar():d(0),c(0){}
		operator Rupees(){
			intS rm;
			rm = d*137.61+c*137.61;
			return rm;
		}
		void getDollar(){
			cout<<"Enter dollar and cent";
			cin>>d>>c;
		}
};
int main(){
	Dollar d1;
	Rupees r1;
	d1.getDollar();
	r1=d1;
	r1.display();
	return 0;
}
