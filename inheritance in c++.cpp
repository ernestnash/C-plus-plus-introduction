#include<iostream>
using namespace std;
class employee{
	private:
		int empid,salary;
		char empname[20];
	public:
		void getdata()
		{
			cout<<"enter employee id: ";
			cin>>empid;
			cout<<"enter employee name: ";
			cin>>empname;
			cout<<"enter salary: ";
			cin>>salary;
		}
		void display_data()
		{
			cout<<"employee id is "<<empid<<endl;
			cout<<"employee name is "<<empname<<endl;
			cout<<"salary is "<<salary<<endl;
			cout<<" "<<endl;
		}
};
class manager:employee
{
	private:
		int bonus;
		public:
			void getdata()
			{
				employee::getdata();
				cout<<"enter bonus: ";
				cin>>bonus;
			}
			void display_data()
			{
				employee::display_data();
				cout<<"bonus is: "<<bonus<<endl;
				cout<<" "<<endl;
			}
};
class nonmanager:employee
{
 	private:
		int overtime;
		public:
			void getdata()
			{
				employee::getdata();
				cout<<"enter overtime amount: ";
				cin>>overtime;
			}
			void display_data()
			{
				employee::display_data();
				cout<<"oertime is: "<<overtime<<endl;
				cout<<" "<<endl;
			}
};
int main()
{
	employee e;
	e.getdata();
	e.display_data();
	manager m;
	m.getdata();
	m.display_data();
	nonmanager nm;
	nm.getdata();
	nm.display_data();
	

	return 0;
}
