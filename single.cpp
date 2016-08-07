#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class Person
{
	char name[100],dob[100];
	int age;
	public:
	Person(char ch[100],char k[100])
	{
		strcpy(name,ch);
		strcpy(dob,k);
	}
	Person()
	{
	}
	void getdata()
	{
		cout<<"Enter the name (with ending .)...";
		cin.getline(name,20,'.');
		cout<<"Enter the age...";
		cin>>age;
		cout<<"Enter the Date of birth...";
		cin>>dob;
	}
	void display()
	{
		cout<<"NAME          : "<<name<<endl;
		cout<<"AGE           : "<<age<<endl;
		cout<<"DATE OF BIRTH : "<<dob<<endl;
	}
};
class student:public Person
{
	char clg[100];
	int roll_no;
	public:
	void getcollege()
	{
		cout<<"Enter the roll no of the student...";
		cin>>roll_no;
		cout<<"Enter the college name....";
		cin.getline(clg,50,'.');
	}
	void putcollege()
	{
		cout<<"ROLL NO       : "<<roll_no<<endl;
		cout<<"COLLEGE       : "<<clg<<endl;
	}
};
main()
{
	int ch;
	cout<<"Enter\n1->For Person Details (Base class)\n2->For Student Details (Derived class)\n";
	while(1)
	{
		cout<<"\nEnter the choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					Person s;
					cout<<"****Enter the Details of the Person****"<<endl;
					s.getdata();
					cout<<"***The Details of the person is*****"<<endl;
					s.display();
					break;
				}
			case 2:
				{
					student s;
					cout<<"****Enter the Details of the Student****"<<endl;
					s.getdata();
					s.getcollege();
					cout<<"***The Details of the Student is*****"<<endl;
					s.display();
					s.putcollege();
					break;
				}
			default:exit(0);
		}
	}
	return 0;
}
