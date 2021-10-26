#include<iostream>
using namespace std;
int main()
{
	int circle(int,int);
	int radius,pi=22/7,area;
	cout<<"enter radius: ";
	cin>>radius;
	area=circle(pi,radius);
	cout<<"area is: "<<area;
	return 0;	
}
int circle(int pi,int radius)
{
	int A;
	A=pi*(radius*radius);
	return (A);
}
