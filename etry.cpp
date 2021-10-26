#include<iostream>
using namespace std;
int main()
{
	int employee_number,basic_salary,allowances,deductions;
	char employee_name[20];
	cout<<"enter employee name: ";
	cin>>employee_name;
	
	cout<<"enter employee number: ";
	cin>>employee_number;
	
	cout<<"enter basic salary: ";
	cin>>basic_salary;
	
	cout<<"basic salary is: "<<basic_salary;
	
	if(basic_salary>3000)
	allowances=0.1*basic_salary;
	else
	allowances=0;
	
}
