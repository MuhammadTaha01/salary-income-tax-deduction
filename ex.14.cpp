#include<iostream>
using namespace std;
int main()
{
    int emply,choice;
    cout<<"Enter employee's salary: ";
    cin>>choice;

    if(choice>=30000)
    {
    emply = choice-(20*choice/100);
    cout<<"Salary after income tax deduction is: "<<emply;
    }

    else if(choice>=20000)
    {
        emply = choice-(20*choice/100);
    cout<<"Salary after income tax deduction is: "<<emply;
    }
    else if(choice<=20000)
    {
        emply = choice-(20*choice/100);
    cout<<"Salary after income tax deduction is: "<<emply;
    }
    else
    {
        cout<<"Invalid Integer/Chracter";
    }

    return 0;
}
