#include<iostream>
#define f(i,a,n) for(int i=a;i<=(n-1);i++)
using namespace std;
class person
{
protected:
	string name, gender, age;
public:
	void basic_info()
	{
		cout << "Enter:\nName : ";
		cin >> name;
		cout << "Gender : ";
		cin >> gender;
		cout << "Age : ";
		cin >> age;
	}
	void print_details()
	{
		cout << name << "\t" << gender << "\t" << age << "\t";
	}
};
class student : private person
{
private:
	string HE, grade,PRN;
	float marks, TA;
public:
	void stu_details()
	{
		cout << "PRN : ";
		cin >> PRN;
		basic_info();
		cout << "Highest Educational Qualification : ";
		cin >> HE;
		cout << "current class/year : ";
		cin >> grade;
		cout << "Last year marks : ";
		cin >> marks;
		cout << "Total attendance : ";
		cin >> TA;
	}
	void stu_print()
	{
		cout << PRN << "\t";
		print_details();
		cout << HE << "\t" << grade << "\t\t" << marks << "\t\t" << TA << "\n";
	}
};
class employee :private person
{
private:
	int yoe;
	string prof,income,empid;
	float twh;
public:
	void emp_details()
	{
		cout << "Employee ID : ";
		cin >> empid;
		basic_info();
		cout << "Profession : ";
		cin >> prof;
		cout << "Years of experience : ";
		cin >> yoe;
		cout << "Total working hours(in hours) : ";
		cin >> twh;
		cout << "Salary : ";
		cin >> income;
	}
	void emp_print()
	{
		cout << empid << "\t";
		print_details();
		cout << prof << "\t\t" << yoe << "\t\t" << twh << "\t\t" << income << "\n";
	}
};
int main()
{
	student s[20];
	cout << "Enter Number of students : ";
	int n;
	cin >> n;
	f(i, 0, n)
	{
		s[i].stu_details();
	}
	employee e[20];
	cout << "\nEnter number of employees : ";
	int n1;
	cin >> n1;
	f(i, 0, n1)
	{
		e[i].emp_details();
	}
	cout << "\n--------------------------------------------STUDENT RECORD---------------------------------------------------\n\n";
	if (n == 0)
		cout << "No record found\n";
	else
	{
		cout << "PRN\t\tName\tGender\tAge\tLevel\tClass/Year\tlast_score\tTotal_Attendence\n";
		f(i, 0, n)
		{
			s[i].stu_print();
		}
	}
	cout << "\n--------------------------------------------EMPLOYEE RECORD---------------------------------------------------\n\n";
	if (n1 == 0)
		cout << "No record found\n";
	else
	{
		cout << "E_id\t\tName\tGender\tAge\tProfession\tExperience\tWorking_hours\tSalary\n";
		f(i, 0, n1)
		{
			e[i].emp_print();
		}
	}
}
