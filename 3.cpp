#include<iostream>
#include<cstdlib>
using namespace std;
class person
{
	public:
	char name[100];
	int age; 
	void setdata()
	{
		cout<<"Enter the name...";
		cin.getline(name,20,'.');
		cout<<"Enter the age...";
		cin>>age;
	}
	virtual void print()
	{
	}
};
class employee:public person
{
	int id,salary;
	public:
	void setid()
	{
		cout<<"Enter the id...";
		cin>>id;
		cout<<"Enter the salary...";
		cin>>salary;
	}
	virtual void print()
	{
		cout<<"NAME    : "<<name<<endl;
		cout<<"AGE     : "<<age<<endl;
		cout<<"ID      : "<<id<<endl;
		cout<<"SALARY  : "<<salary<<endl;
	}
};
class student:public person
{
	int year,roll_no;
	char clg[100];
	public:
	void setclg()
	{
		cout<<"Enter the roll no...";
                cin>>roll_no;
		cout<<"Enter the college name...";
		cin.getline(clg,50,'.');
		cout<<"Enter the year of study...";
		cin>>year;
	}
	virtual void print()
	{
		cout<<"NAME    : "<<name<<endl;
		cout<<"AGE     : "<<age<<endl;
		cout<<"COLLEGE : "<<clg<<endl;
		cout<<"YEAR    : "<<year<<endl;
		cout<<"ROLL NO : "<<roll_no<<endl;
	}
};
main()
{
	int c,x;
	person *ptr;
	cout<<"Enter\n1->For Empolyee\n2->For Student\n";
	do
	{
		cout<<"Enter the choice : ";
		cin>>c;
		switch(c)
		{
			case 1:
				{
					employee e;
					e.setdata();
					e.setid();
					ptr=&e;
					ptr->print();
					break;
				}
			case 2:
				{
					student stud;
					stud.setdata();
					stud.setclg();
					ptr=&stud;
					ptr->print();
					break;
				}
			default:exit(0);
		}
		cout<<"To continue enter 1...";
		cin>>x;
	}while(x==1);
	return 0;
}
