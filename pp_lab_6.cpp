#include<iostream>
#define m 100
using namespace std;
float total = 0;
class purchase {
    string name;
public:
    unsigned int qt, cnt = 0;
    float price, amt;
    string code;
    int count();
    void input();
    void remove();
    void display();
    
};

int purchase::count()
{
    return (cnt);
}
void purchase::input()
{
    cout << "Enter Item Code: ";
    cin >> code;
    cout << "Enter Item Name: ";
    cin >> name;
    cout << "Enter Item Price : ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> qt;
    amt = qt * price;
    total += amt;
    cnt++;                    
}
void purchase::remove()
{
    total -= amt;
    cnt--;
}
void purchase::display()
{
    cout << "\t" << code << "\t\t" << name << "\t" << price << "\t" << qt << "\t\t" << amt;
}
int main()
{
    purchase a[m];
    int i = 0,k;
    string cd;
	cout << "Enter :\n1 for adding an item to your list\n2 to remove an item from your list\n3 to display your order" << "\n";
	int c,ans=1;
	do {
		cout << "Enter your choice\n";
		cin >> c;
        switch(c)
        {
        case 1:
            if (i == m)
                cout << "maximum limit reached";
            else
            {
                a[i].input();
                i++;
            }
            break;
        case 2:
            cout << "enter code ";
            cin >> cd;
     
            for (k = 0; k <= i-1; k++)
            {
                if (cd == a[k].code)
                    break;
            }
            if (k == i)
                cout << "item not present in the list\n";
            else
            {
                a[k].remove();
                for (int j = k; j <= i-2; j++)
                {
                    a[j] = a[j + 1];
                }
                i--;
            }
            break;
        case 3:
            cout << "\tITEM CODE" << "\tNAME" << "\tPRICE" << "\tQUANTITY" << "\tAMOUNT\n";
            for (int j = 0; j <= i-1; j++)
            {
                a[j].display();
                cout << "\n";
            }
            cout << "---------------TOTAL--------------------" << "\t\t" << total << "\n";
            break;
            
        default:
            cout << "invalid response" << "\n";
        }
        cout << "\nenter\n1 to continue\n0 to exit ";
        cin >> ans;
    } while (ans != 0);
}

