#include<iostream>
#define f(i,a,n) for(int i=a;i<=(n-1);i++)
using namespace std;
class student
{
protected:
	float marks[5];
	string name,PRN;
public:
	static int count;
	void get_info()
	{
		count++;
		cout << "Enter name for student " << count << " : ";
		cin >> name;
		cout << "Enter " << name << "'s PRN : ";
		cin >> PRN;
	}
};
int student::count = 0;
class mark:protected student
{
public:
	float sum=0;
	void get_marks()
	{
		get_info();
		cout << "Enter 5 best marks(out of 100) of " << name << "\n";
	    f(i, 0, 5)
		{
			cin >> marks[i];
			sum += marks[i];
		}
	}
	float per()
	{
		return(sum / 5);
	}
};
class result :public mark
{
public:
	float total_per;
	string grade;
	void res()
	{
		get_marks();
		total_per = per();
		if (total_per >= 80)
			grade = "A+";
		else if (total_per >= 60)
			grade = "B+";
		else if (total_per >= 40)
			grade = "C+";
		else
			grade = "Fail";
	}
	void display()
	{
		cout << PRN<<"\t"<<name << "\t" << total_per << "\t\t" << grade << "\n";
	}
};
int main()
{
	result s[20];
	cout << "Enter number students : ";
	int n;
	cin >> n;
	f(i, 0, n)
	{
		s[i].res();
	}
	cout << "\n--------------------------------------------STUDENT RECORD-------------------------------------\n\n";
	if (n == 0)
		cout << "No record found\n";
	else
	{
		cout << "PRN\t\tName\tPercentage\tGrade\n";
		f(i, 0, n)
		{
			s[i].display();
		}
	}
}