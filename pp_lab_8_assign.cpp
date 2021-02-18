#include <iostream>
using namespace std;
class complex
{
private:
	int real, imaginary;
public:
	friend complex get_data();
	friend void operator * (complex&, complex&);
	friend void operator ++ (complex&);
	friend void display(complex);
	friend void operator + (complex&, complex&);
	
	friend bool operator < (complex&,complex&);
	friend bool operator == (complex&, complex&);
	complex operator ++(int);
};
complex complex::operator ++(int)
{
	complex x;
	x.real = real++;
	x.imaginary = imaginary++;
	display(x);
	return(x);
}
complex get_data()
{
	complex x;
	cin >> x.real >> x.imaginary;
	return(x);
}
void operator * (complex& x1, complex& x2)
{
	complex x3;
	x3.real = (x1.real * x2.real) - (x1.imaginary * x2.imaginary);
	x3.imaginary = (x1.real * x2.imaginary) + (x1.imaginary * x2.real);
	display(x3);
}
void operator ++(complex &x)
{	
	++x.real;
    ++x.imaginary;
	display(x);
}
void display(complex x)
{
	cout << x.real;
	x.imaginary >= 0 ? cout << "+" << x.imaginary << "i\n" : cout << x.imaginary << "i\n";
	return;
}
void operator + (complex& x1, complex& x2)
{
	complex x3;
	x3.real = x1.real + x2.real;
	x3.imaginary = x1.imaginary + x2.imaginary;
	display(x3);
}

bool operator < (complex &x1 , complex &x2)
{
	if (x1.real < x2.real)
		return(true);
	if ((x1.real == x2.real) && (x1.imaginary < x2.imaginary))
		return(true);
	return(false);
}
bool operator == (complex& x1, complex& x2)
{
	if ((x1.real == x2.real) && (x1.imaginary == x2.imaginary))
		return(true);
	return(false);
}
int main()
{
	complex n1, n2,f1,f2;
	cout << "Enter real and imaginary part for\nFirst number : ";
	n1 = get_data();
	cout << "Second number : ";
	n2 = get_data();
	cout << "\nMultiplication (before unary operator overloading) : ";
	n1* n2;
	cout << "\nRESULt OF COMPARISION : ";
	n1 == n2 ? cout << "Both the numbers are equal\n" : ((n1 < n2) ? cout << "Second number is greater than first number\n" : cout << "First number is greater than second number\n");
	cout << "\nAddition (before unary operator overloading) : ";
	n1 + n2;
	
	cout << "\nAfter unary operator overloading, we get :";
	cout << "\nFIRST NUMBER\n";
	cout << "After postfix : ";
	f1 = n1++;
	
	cout << "After prefix : ";
	++n1;
	cout << "\nSECOND NUMBER\n";
	cout << "After postfix : ";
	f2= n2++;
	cout << "After prefix : ";
	++n2;
	cout << "Addition (after unary operator overloading) : ";
	n1 + n2;
	return(0);
}
