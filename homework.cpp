#include<iostream>
using namespace std;

class customer{
	private:
		int custno,quantity,price,total,discount,bill_amount;
		char cust_name[20],prodct_name[20];
	public:
		setdata()
		{
			cout<<"enter customer number: "<<endl;
			cin>>custno;
			cout<<"enter customer name: "<<endl;
			cin>>cust_name;
			cout<<"enter product name: "<<endl;
			cin>>prodct_name;
			cout<<"enter price: "<<endl;
			cin>>price;
			cout<<"enter quantity: "<<endl;
			cin>>quantity;
		}
		calculate_bill()
		{
			total=price*quantity;
			if (total>=10000)
			discount=total*0.3;
			else
			{
				if((total>=5000)&&(total<10000))
				discount=total*0.1;
				else
				{
					if((total>=3000)&&(total<5000))
					discount=total*0.05;
					else
					discount=0;
				}
			}
			bill_amount=total-discount;
		}
};
int main()
{
	customer s;
	s.setdata;
	
	return 0;
}
