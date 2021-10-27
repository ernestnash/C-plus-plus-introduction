#include<iostream>
using namespace std;

class student{
	private:
		int stdno,subj1,subj2,total,average;
		char grade,stdname[20];
	public:
	student()
	{
		int stdno = 0;
		int subj1 = 0;
		int subj2 = 0;
		int total = 0;
		int average = 0;
		//char grade = 0;
		//char stdename = 0;
		
		cout<<"constructor invoked"<<endl;
	}
		void setdata()
		{
			cout<<"enter student number: ";
			cin>>stdno;
			cout<<"enter student name: ";
			cin>>stdname;
			cout<<"enter marks for subject 1: ";
			cin>>subj1;
			cout<<"enter marks for subject 2: ";
			cin>>subj2;
		}
		void print_report()
		{
			cout<<"sudent number is: "<<stdno<<endl;
			cout<<"sudent name is: "<<stdname<<endl;
			cout<<"marks for subject 1 is: "<<subj1<<endl;
			cout<<"marks for subject 2 is: "<<subj2<<endl;
			cout<<"total marks: "<<total<<endl;
			cout<<"average is: "<<average<<endl;
		}
		void calculate_data()
		{
			total=subj1+subj2;
			average=total/2;
			if(average>=70)
			grade='A';
			else if((average>=60)&&(average<70))
			grade='B';
			else if((average>=50)&&(average<60))
			grade='C';
			else if((average>=40)&&(average<50))
			grade='D';
		}
};
int main()
{
	
	student performance;
	performance.setdata();
	performance.print_report();
	performance.calculate_data();
	return 0;	
}
