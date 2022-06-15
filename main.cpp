#include <iostream>
#include <windows.h>
#include <string>
using namespace std; 

int main( ) {
	string p;	
	cout << "(Press any key and \"enter\" to continue...)" << endl;
	cin >> p;
	if (p == "woshizhuhaoxing")
	{
	cout << "This is Developer Mode" << endl << endl;
	int num;
	double data, a, b;
	double c = 0;
	 cout << "type the number of your data here:";
	cin >> num;
	if(num == 0)
	cout << "Are you kidding me? This is a calculator£¡";
	else
	{
		cout << "type your data here:" << endl;

	for(int i = 0; i < num; i++)
	{ 
		cin >> data;
		b = data + c;
		c = b;		
	}	
		if(c == 0)
		cout << "Are you kidding me? This is a calculator£¡";
		else 
		{ 
			double average;
			average = c/num; 
		cout << "again" << endl;
		double g = 0; 
		double d, f;
		for(int m = 0; m < num; m++)
		{ 
			cin >> data;
			d = (data - average)*(data - average);	
			f = g + d;
			g = f;  
		}
		double variance;
		variance = g/num; 
		cout << "average = " << average << endl;
		cout << "variance = " << variance << endl;
		} 	
	}
		}
	else
	{
	int num;
	double data, a, b;
	double c = 0;
	 cout << "type the number of your data here:";
	cin >> num;
	if(num == 0)
	cout << "Are you kidding me? This is a calculator£¡";
	else
	{
		cout << "type your data here:" << endl;
	for(int i = 0; i < num; i++)
	{ 
		cin >> data;
		b = data + c;
		c = b;		
	}	
		if(c == 0)
		cout << "Are you kidding me? This is a calculator£¡";
		else 
		{ 
			double average;
			average = c/num; 
			for(int n = 0; n < 5; n++)
		{
		cout << "loading" << endl;
		Sleep(1000); 
		}
		cout <<"Oops! An unfixable mistake just happened. "<< endl <<"Well, I'm afraid that you should type your data here again:"<< endl;
		double g = 0; 
		double d, f;
		for(int m = 0; m < num; m++)
		{ 
			cin >> data;
			d = (data - average)*(data - average);	
			f = g + d;
			g = f;  
		}
		double variance;
		variance = g/num; 
		cout << "average = " << average << endl;
		cout << "variance = " << variance << endl;
		} 	
		}
		}
		cout << "Do you like my program?" << endl;
		cout << "Give me some stars! " << endl << "1~5:" << endl;
		int y;
		while (cin >> y)
		if(y == 2369225)
			break;
		else
			cout <<"Error! Try again£¡"	<< endl; 
		cout << "Thanks!" << endl << endl;
		system("pause"); 
		return 0;
}
	
