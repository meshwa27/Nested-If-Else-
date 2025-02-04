#include<iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout << "Enter a & b & c :";
	cin >> a >> b >> c;
	
	if(a<b)
	{	
		if(a<c)
		{
			cout << "a is min";
		}
		else
		{
				cout << "c is min";
		}
	}
	else
	{
		if(b<c)
		{
			cout << "b is min";
		}
		else
		{
			cout << "c is min";
		}
		
	}
	
	

	return 0;
}