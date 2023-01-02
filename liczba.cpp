#include <iostream>
#include <cmath>

using std::cout, std::endl,std::cin;

class number
{
	private:
		int Number;
//_________________________________________________________________________________________
	public:
//Loads up number from standard input		
		void LoadNumber()
		{
			cout<<"Gimme number"<<endl;
			cin>>Number;
		};
//Couts number to the screen
		virtual void CoutNumber()
		{
			cout<<"Value of number is "<<Number<<endl;
		};
//Function to pass value to a number in argument
		void SetNumber(int number)
		{
			Number=number;
			cout<<"Number was changed to "<<number<<endl;
		};
//Returns number		
		int ReturnNumber()
		{
			return Number;
		};
//Returns abs(number)		
		int ReturnAbsNumber()
		{
			return abs(Number);
		};
//_________________________________________________________________________________________
//basic constructor
		number(int number)
		{
			cout<<"Object created"<<endl;
			Number=number;
		};
//basic destructor
		~number()
		{
			cout<<"Object destroyed"<<endl;
		}


};

int main()
{
	cout<<"Code written for class writing skills"<<endl;
	number liczba1=number(-15);
	liczba1.CoutNumber();
	liczba1.SetNumber(-18);
	int a{};
	cout<<"I used ReturnNumber class function "
	"to get value of Number and increase it by 2"<<endl;
	a=liczba1.ReturnNumber()+2;
	cout<<"Increased value is "<<a<<endl;
	liczba1.CoutNumber();
	liczba1.ReturnAbsNumber();
	liczba1.LoadNumber();
	liczba1.CoutNumber();
}
