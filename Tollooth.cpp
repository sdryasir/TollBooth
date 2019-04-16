#include<iostream>
#include<string>
using namespace std;

double const TOLL = 0.50;
class Tollbooth{
	unsigned int totalCars;
	double totalCash;
	public:
		Tollbooth()
		{
			this->totalCars = 0;
			this->totalCash = 0.0;
		}
	public:
		void payingCars()
		{
			totalCars++;
			totalCash += TOLL;	
		}
	public:
		void nonPayingCars()
		{
			totalCars++;
		}
	public:
		void display()
		{
			cout<<"Total Paying Cars are:\t"<<totalCars<<endl;
			cout<<"Total Cash of cars is:\t"<<totalCash;	
		}
};
int main()
{
	int choice;
	char ch;
	Tollbooth booth1;
	do{
		cout<<"1 - Paying Cars\n2 - Non-Paying Cars\n3 - Show All\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				booth1.payingCars();
				break;
			case 2:
				booth1.nonPayingCars();
				break;
			case 3:
				booth1.display();
				break;
			default:
				cout<<"Invalid entry";
				
		}
	cout<<"\nDo you want to perform again?(y/n)";
	cin>>ch;
	}while(ch != 'n');
}
