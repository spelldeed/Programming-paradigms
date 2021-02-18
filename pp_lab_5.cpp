#include<iostream>
#define SLIMIT 2
#define MLIMIT 5
using namespace std;
class Student
{
private:
	string name, branch, batch, prn,grade ;
	float marks[5];
public:
	float sum = 0;
	void datainput()
	{
		cout << "Enter :\nName-> " ;
		cin >> name;
		cout << "Branch-> ";
		cin >> branch;
		cout << "Batch-> ";
		cin >> batch;
		cout << "PRN-> ";
		cin >> prn;
		cout << "Enter best 5 marks of(out of 100)" << name<< "\n";
		for (int j = 0; j <=MLIMIT-1 ; j++)
		{
			cin >> marks[j];
		}
		cout << "----------DATA STORED----------------"<<"\n";
	}
	void percentcalc()
	{
		for (int i = 0; i <=(MLIMIT-1) ; i++)
		{
			sum = sum + marks[i];
		}
		if ((sum / 5) > 40)
			grade = "pass";
		else
			grade = "fail";
	}
	void display()
	{
		cout << "\t" << name << "\t\t" << branch << "\t" << batch << "\t" << prn << "\t" << sum / 5 << "\t\t"<<grade<<"\n";
	}
};
int main()
{
	Student s[SLIMIT];
	for (int i = 0; i <=SLIMIT-1 ; i++)
	{
		cout << "Enter Information for student " << i+1 << ":" << "\n";
		s[i].datainput();
		s[i].percentcalc();
	}
	cout << "\tSTUDENT NAME" << "\tBRANCH" << "\tBATCH" << "\tPRN" << "\tPERCENTAGE" <<"\tGRADE" << "\n";
	for (int i = 0; i <= SLIMIT-1; i++)
	{
		s[i].display();
	}
	return(0);
}