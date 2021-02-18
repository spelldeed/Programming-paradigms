#include<iostream>
using namespace std;
class complex
{
private:
	int real, imaginary;
public:
	complex()
	{
	}
	complex(int r, int i)
	{
		real = r;
		imaginary = i;
	}
	friend complex get_data();
	friend void sum(complex,complex);
	friend void display(complex);
};
complex get_data()
{
	complex c1;
	cin >> c1.real >> c1.imaginary;
	return(c1);
}
void sum(complex c1, complex c2)
{
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
    display(c3);
	return;
}
void display(complex c3)
{
	cout << c3.real<<" ";
	c3.imaginary >= 0 ? cout << "+ " << c3.imaginary << "i\n" : cout << c3.imaginary << "i\n";
	return;
}
void main()
{
	complex n1, n2;
	cout << "Enter real and imaginary part for\nFirst number : ";
	n1=get_data();
	cout << "Second number : ";
	n2=get_data();
	cout << "Addition : ";
	sum(n1, n2);
	int b, c,a,d;
	cout << "Enter real and imaginary part for\nFirst number : ";
	cin >> a >> b;
	cout << "Second number : ";
	cin >> c >> d;
	complex n3(a, b), n4(c, d);
	cout<<"By using parametrized constructor"<<"\n";
	cout << "First Number :";
	display(n3);
	cout << "Second number : ";
	display(n4);
	cout << "Addition : ";
	sum(n3, n4);
	return;
}