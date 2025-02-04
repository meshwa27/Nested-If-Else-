#include <iostream>
using namespace std;

int main(){
	
	int unit;
	
	cout << "Enter Your Bill : ";
	cin >> unit;
	
	int total;
	
	if(unit>=0 && unit <=50)
	{
		total=unit*0.5;
		total=total+(total*0.2);
		cout << "Your Total Bill Is :" << total;
	}
	else if(unit>50 && unit<=100)
	{
		total=unit*0.75;
		total=total+(total*0.2);
	    cout << "Your Total Bill Is :" << total;
	}
	else if(unit>100 && unit<=150)
	{
		total=unit*1.25;
		total=total+(total*0.2);
		cout << "Your Total Bill Is :" << total;
	}
	else if(unit>150 && unit<=250)
	{
		total=unit*1.50;
		total=total+(total*0.2);
	    cout << "Your Total Bill Is :" << total;
	
	}
	
	return 0;
}