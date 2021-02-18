#include<iostream>
using namespace std;
class student
{
protected:
	string name, PRN;
public:
	void get_info()
	{
		cout << "Name : ";
		cin >> name;
		cout << "PRN : ";
		cin >> PRN;
	}
};
class marks : public student
{
protected:
	float marks[3];
	static int cnt;
public:
	void get_marks()
	{
		cnt++;
		cout << "Enter Info of student " << cnt << "\n";
		get_info();
		cout << "Marks(best 3,each mark should be out of 100) : ";
		for (int i = 0; i <=(2) ; i++)
		{
			cin >> marks[i];
		}
	}
};
class sports
{
protected:
	float s_marks;
public:
	void get_smarks()
	{
		cout << "Marks in sports(out of 100) : ";
		cin >> s_marks;
	}
};
class result :public marks, public sports
{
public:
	void display();
	void res()
	{
		get_marks();
		get_smarks();
	}
};
void result::display()
{
	cout << PRN << "\t" << name << "\t" << marks[0] + marks[1] + marks[2] + s_marks << "\t" << (marks[0] + marks[1] + marks[2] + s_marks) / 4 << "\t\t";
	if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 95)
		cout << "A+" << "\n";
	else if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 85)
		cout << "A" << "\n";
	else if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 70)
		cout << "B" << "\n";
	else if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 60)
		cout << "C+" << "\n";
	else if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 50)
		cout << "C" << "\n";
	else if (((marks[0] + marks[1] + marks[2] + s_marks) / 4) > 40)
		cout << "D" << "\n";
	else
		cout<<"FAIL"<<"\n";
}
int marks::cnt = 0;
int main()
{
	cout << "Enter number of students : ";
	int n;
	cin >> n;
	result s[100];
	for (int i = 0; i <=(n-1) ; i++)
	{
		s[i].res();
	}
	cout << "------------------------------------------------STUDENT RECORD-------------------------------------------------\n";
	if (n == 0)
	{
		cout << "No records\n";
		return(0);
	}
	cout << "PRN\t\tNAME\tTOTAL\tPERCENTAGE\tGRADE\n";
	for (int i = 0; i <=(n-1) ; i++)
	{
		s[i].display();
	}

}
