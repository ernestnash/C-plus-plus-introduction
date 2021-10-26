#include<iostream>
using namespace std;
class order{
	protected:
		int oder_no,custno,price,quantity,bill;
		char item_name[20];
	public:
		void getdata()
		{
			cout<<"enter oder no: ";
			cin>>oder_no;
			cout<<"enter customer number: ";
			cin>>custno;
			cout<<"enter price: ";
			cin>>price;
			cout<<"enter quantity: ";
			cin>>quantity;
		}
		void display_data()
		{
			cout<<"oder number is: "<<oder_no<<endl;
			cout<<"customer number is: "<<custno<<endl;
			cout<<"price is: "<<price<<endl;
			cout<<"quantity is: "<<quantity<<endl;
			cout<<" "<<endl;
		}
};
class special:order
{
	private:
		int discount,total;
		public:
			void getdata()
			{
				order::getdata();
				cout<<"enter discount: ";
				cin>>discount;
			}
			void calculate_data()
			{
				total=quantity*price;
				bill=total-discount;
			}
			void display_data()
			{
				order::display_data();
				cout<<"bill is: "<<bill<<endl;
				cout<<" "<<endl;
			}
};
class normal:order
{
	private:
		int delivery_charge,total;
		public:
			void getdata()
			{
				order::getdata();
				cout<<"enter delivery charge amount: ";
				cin>>delivery_charge;
			}
			void calculate_data()
			{
				total=quantity*price;
				bill=total+delivery_charge;
			}
			void display_data()
			{
				order::display_data();
				cout<<"bill is: "<<bill<<endl;
				cout<<" "<<endl;
			}
};
int main()
{
	order e;
	e.getdata();
	e.display_data();
	special m;
	m.getdata();
	m.display_data();
	normal nm;
	nm.getdata();
	nm.display_data();
	

	return 0;
}
