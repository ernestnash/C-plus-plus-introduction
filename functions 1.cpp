#include<iostream>
using namespace std;
int main()
{
	int total(int,int);
	int subj1,subj2,tot;
	cout<<"enter subject 1  ";
	cin>>subj1;
	cout<<"enter subject 2  ";
	cin>>subj2;
	tot=total(subj1,subj2);
	cout<<"total is  "<<tot;
	return 0;
}
int total(int subj1,int subj2)
{
	int c;
	c=subj1+subj2;
	return(c);
}
