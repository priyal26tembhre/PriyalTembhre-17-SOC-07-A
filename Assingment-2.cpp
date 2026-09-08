#include <iostream>
using namespace std;
class Rectangle
{
	private:
	float length;
	float breadth;
	public:
	void Accept()
	{
		cout<<"enter length: ";
		cin>>length;
		cout<<"enter breadth: ";
		cin>>breadth;
	}
	float area();
	float perimeter();

	void display()
	{
		cout<<"Area= "<<area()<<endl;
		cout<<"perimeter= "<<perimeter()<<endl;
	}
};
float Rectangle::area()
{
	return length*breadth;
}
float Rectangle::perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	Rectangle r;
	r.Accept();
	r.display();
	return 0;
}
