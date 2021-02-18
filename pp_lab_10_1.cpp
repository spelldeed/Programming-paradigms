#include<iostream>
#define f(i,a,n) for(int i=a;i<=(n-1);i++)
using namespace std;
class item
{
protected:
	string name;
	float price;
public:
	void get_info()
	{
		cout << "Enter item name : ";
		cin >> name;
		cout << "Enter it's price : ";
		cin >> price;
	}
};
class sales
{
protected :
	int s[3];
public:
	void get_sales()
	{
		cout << "Enter sales for last three months\n";
		f(i, 0, 3)
		{
			cin >> s[i];
		}
	}
};
class hwitem :private item, private sales
{
private:
	string batch_no,manufacturer;
public:
	void get_hw_data()
	{
		get_info();
		get_sales();
		cout << "Enter manufacturer name : ";
		cin >> manufacturer;
		cout << "Enter batch number : ";
		cin >> batch_no;
	}
	void print_hw()
	{
		cout << name << "\t" << price << "\t" << manufacturer << "\t\t" << batch_no << "\t\t" << s[0] << "\t" << s[1] << "\t" << s[2] << "\n";
	}
};
class switem :private item, private sales
{
private:
	string license,creator;
public:
	void get_sw_data()
	{
		get_info();
		get_sales();
		cout << "Is the software licensed ?(Enter Y for yes,N for no) : ";
		cin >> license;
		cout << "Enter creator's name : ";
		cin >> creator;
	}
	void print_sw()
	{
		cout << name << "\t" << price << "\t" << license << "\t\t" << creator << "\t" << s[0] << "\t" << s[1] << "\t" << s[2] << "\n";
	}
};
int main()
{
	hwitem h[20];
	cout << "Enter number of hardware items : ";
	int n;
	cin >> n;
	f(i, 0, n)
	{
		h[i].get_hw_data();
	}
	switem s[20];
	cout << "\nEnter number of software items : ";
	int n1;
	cin >> n1;
	f(i, 0, n1)
	{
		s[i].get_sw_data();
	}
	cout << "------------------------------------------DETAILS FOR HARDWARE ITEMS-----------------------------------------\n\n";
	if (n == 0)
		cout << "No Hardware Item\n";
	else {
		cout << "Name\tPrice\tManufacturer\tBatch_no\tSale_m1\tSale_m2\tSale_m3\n";
		f(i, 0, n)
		{
			h[i].print_hw();
		}
	}
	cout << "------------------------------------------DETAILS FOR SOFTWARE ITEMS-----------------------------------------\n\n";
	if (n1 == 0)
		cout << "No Software Item";
	else
	{
		cout << "Name\tPrice\tLicensed?\tCreator\tSale_m1\tSale_m2\tSale_m3\n";
		f(i, 0, n1)
		{
			s[i].print_sw();
		}
	}
}