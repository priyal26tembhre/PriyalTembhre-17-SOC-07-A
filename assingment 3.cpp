#include<iostream>
#include<string>
using namespace std;

class Product
{
	public :
	int productId;
	string product_name;
	float price;
	int monthlySales[12];

void getData()
{
	cout<<"ENTER PRODUCT ID : ";
	cin>>productId;
	
	cout<<"ENTER PRODUCT NAME : ";
	getline(cin >> ws, product_name);
	
	cout<<"ENTER THE PRICE OF THE PRODUCT : ";
	cin>>price;
	
	cout<<"ENTER SALES FOR 12 MONTHS : \n";
	for(int i=0; i < 12; i++)
	{
		cout<<"MONTH "<<i+1<<" : ";
		cin>>monthlySales[i];
	}
}
int TotalQty()
{
	int total = 0;
	for(int i=0; i<12; i++)
	{
		total = total+monthlySales[i];
	}
	return total;
}

float TotalBill()
{
	return TotalQty()*price;
}

void Display()
{
	cout<<"\nPRODUCT ID : "<<productId;
	cout<<"\nPRODUCT NAME : "<<product_name;
	cout<<"\nPRICE OF PRODUCT : "<<price;
	cout<<"\nTOTAL QTY : "<<TotalQty();
	cout<<"\nTOTAL BILL : "<<TotalBill()<<endl;
}
};

int main()
{
	Product p;
	p.getData();
	p.Display();
return 0;
}