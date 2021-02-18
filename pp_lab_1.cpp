#include<iostream>
using namespace std;
void from_decimal(int x, int a)
{
	int i = 0, k;
	int arr[100];
	int arro[100], arrh[100];
	while (x != 0)
	{
		arr[i] = x % a;
		x = x / a;
		i++;
	}
	if (a != 16)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			cout << arr[j];
		}
	}
	else
	{
		for (int j = i - 1; j >= 0; j--)
		{
			switch (arr[j])
			{
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			case 13:
				cout << "D";
				break;
			case 14:
				cout << "E";
				break;
			case 15:
				cout << "F";
				break;
			default:
				cout << arr[j];
			}
		}
	}
	printf("\n");
	return;
}
void bin_or_oct_to_decimal(int x, int a)
{
	int i = 1, num = 0;
	while (x != 0)
	{
		num = num + (x % 10) * i;
		x = x / 10;
		i = i * a;
	}
	printf("NUMBER IN\nDECIMAL NUMBER SYSTEM : %d\n", num);
	cout << "BINARY NUMBER SYSTEM : " << "\n";
	from_decimal(num, 2);
	cout << "OCTAL NUMBER SYSTEM : " << "\n";
	from_decimal(num, 8);
	cout << "HEXADECIMAL NUMBER SYSTEM : " << "\n";
	from_decimal(num, 16);
	return;
}
void hex_to_decimal()
{
	char arrc[30];
	int sz = 0;
	cin >> arrc;
	while (arrc[sz] != '\0')
	{
		sz++;
	}
	int i = 1, num = 0;
	for (int j = sz - 1; j >= 0; j--)
	{
		switch (arrc[j])
		{
		case 'A':
			num = num + 10 * i;
			break;
		case 'B':
			num = num + 11 * i;
			break;
		case 'C':
			num = num + 12 * i;
			break;
		case 'D':
			num = num + 13 * i;
			break;
		case 'E':
			num = num + 14 * i;
			break;
		case 'F':
			num = num + 15 * i;
			break;
		default:
			num = num + (arrc[j] - '0') * i;
		}
		i = i * 16;
	}
	cout << "NUMBER IN\nDECIMAL NUMBER SYSTEM : " << num << "\n";
	cout << "BINARY NUMBER SYSTEM : " << "\n";
	from_decimal(num, 2);
	cout << "OCTAL NUMBER SYSTEM : " << "\n";
	from_decimal(num, 8);
	cout << "HEXADECIMAL NUMBER SYSTEM : " << "\n";
	from_decimal(num, 16);
	return;
}
void main()
{
	printf("enter the base of the number\n");
	int b;
	cin >> b;
	printf("enter the positive number with fractional part equal to zero\n");
	if (b == 16)
		hex_to_decimal();
	else
	{
		int n;
		cin >> n;
		printf("number in various number system\n");
		if (b == 10)
		{
			cout << "BINARY NUMBER SYSTEM : " << "\n";
			from_decimal(n, 2);
			cout << "OCTAL NUMBER SYSTEM : " << "\n";
			from_decimal(n, 8);
			cout << "HEXADECIMAL NUMBER SYSTEM : " << "\n";
			from_decimal(n, 16);
		}
		else
			bin_or_oct_to_decimal(n, b);
	}
	return;
}