#include <iostream>
using namespace std;


void add(int k, int l); //pass by value


void swap(int& a, int& b);  // pass by referance.


void multiply(int h);


int  main()
{

	int a = 100;
	int b = 200;
	int c;

	cout << "the values of a before swapping" <<a<< endl;
	cout <<"the values  of b before swaping "<<b<<endl;

	swap(a, b);


	cout << "the values of a before swapping" << a << endl;
	cout << "the values  of b before swaping " << b << endl;

	c  = add(a, b);
	
	cout << "the values  of b before swaping " << add(a, b) << endl;

	multiply(a);


	cout << "the values  of multiplication " << a << endl;


}

void swap(int& a, int& b)
{
	int temp;

	temp = a;

	a = b;

	b = temp;

	return;
}

void add(int a, int b, int c)

{

	

	c = a + b;

	//cout << c;

	return;


}


void multiply(int h)
{


	h = h * 20;



}
