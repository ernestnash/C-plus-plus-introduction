#include<iostream>
using namespace std;
class employee{
	private:
		int empid,salary;
		char empname[20];
	public:
		void setdata()
		{
			cout<<"enter employee id: ";
			cin>>empid;
			cout<<"enter employee name: ";
			cin>>empname;
			cout<<"enter salary: ";
			cin>>salary;
		}
		void getdata()
		{
			cout<<"employee id is "<<empid<<endl;
			cout<<"employee name is "<<empname<<endl;
			cout<<"employee salary is "<<salary<<endl;
		}
};
int main()
{
	employee e;
	e.setdata();
	e.getdata();
	return 0;
}
