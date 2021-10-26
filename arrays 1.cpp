#include<iostream>
using namespace std;
int main()
{
	int no[10],total;
	for(int i=0;i<10;i++)
	{
		cout<<"enter any number: ";
		cin>>no[i];
		total=total+no[i];
	}
	cout<<"total is : "<<total;
	for(int j=0;j<10;j++)
	{
		cout<<"enter number :";
		cin>>no[j];
		cout<<"\n";
		total=total+no[j];
	}
	cout<<"total is :"<<total;
	return 0;
}
