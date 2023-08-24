#include<iostream>
using namespace std;
class bookings{
	private:
		string name="venky";
		int a; 
	public:
		string veg_items,nonveg_items;
		int prices,prices_1;
		double phone_no;
		bookings(string veg,string nv,int pr1,int pr2,double ph,int b);
		void display();
		void modify()
        {
	        name="VENKY";
	        a=a+10;
        } 
};
bookings::bookings(string veg,string nv,int pr1,int pr2, double ph,int b)
{
	this->veg_items=veg;
	this->nonveg_items=nv;
	this->prices=pr1;
	this->prices_1=pr2;
	this->phone_no=ph;
	a=b;
}
void bookings::display()
{
	cout<<veg_items<<" "<<","<<nonveg_items<<" "<<endl;
	cout<<prices<<"       "<<" "<<" "<<","<<" "<<prices_1<<endl;
	cout<<phone_no;
	cout<<a;
}

int main()
{
	int b;
	cin>>b;
	
	bookings details("fry biryani","dum biryani",250,400,4658956,2);
	details.display();
	details.modify();
	details.display();
	return 0;
}
