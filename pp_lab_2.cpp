#include<iostream>
using namespace std;
class complex_opt
{
public:
	float real, img;
	float add(float x, float y)
	{
		return(x + y);
	}
	float sub(float x, float y)
	{
		return(x - y);
	}
	float mul(float x, float y)
	{
		return(x * y);
	}
	float sq(float x)
	{
		return(x * x);
	}
};
void main()
{
	complex_opt num1, num2, num;
	cout << "enter real part of both the numbers" << "\n";
	cin >> num1.real >> num2.real;
	cout << "enter imaginary part of both the numbers" << "\n";
	cin >> num1.img >> num2.img;
	cout << "Addition :" << "\n" << num.add(num1.real, num2.real);
	num.add(num1.img, num2.img) > 0 ? cout << "+" << num.add(num1.img, num2.img) << "i" << "\n" : cout << num.add(num1.img, num2.img) << "i" << "\n";
	cout << "subtraction :" << "\n" << num.sub(num1.real, num2.real);
	num.sub(num1.img, num2.img) > 0 ? cout << "+" << num.sub(num1.img, num2.img) << "i" << "\n" : cout << num.sub(num1.img, num2.img) << "i" << "\n";
	cout << "Multiplication :" << "\n" << num.sub(num.mul(num1.real, num2.real), num.mul(num1.img, num2.img));
	num.add(num.mul(num1.real, num2.img), num.mul(num1.img, num2.real)) > 0 ? cout << "+" : cout << "-";
	cout << "("<<num.add(num.mul(num1.real, num2.img), num.mul(num1.img, num2.real)) << ")i" << "\n";
	cout << "Division : " << "\n";
	if ((num2.real == 0) && (num2.img == 0))
		cout << "DIVISION CANNOT BE PERFORMED" << "\n";
	else
	{
		cout << num.add(num.mul(num1.real, num2.real), num.mul(num1.img, num2.img)) / num.add(num.sq(num2.real), num.sq(num2.img));
		num.sub(num.mul(num1.img, num2.real), num.mul(num1.real, num2.img)) > 0 ? cout << "+" : cout << "-";
		cout << num.sub(num.mul(num1.img, num2.real), num.mul(num1.real, num2.img)) / num.add(num.sq(num2.real), num.sq(num2.img)) << "i" << "\n";
	}
	return;
}