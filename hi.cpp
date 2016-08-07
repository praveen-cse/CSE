#include<iostream>
#include<cstdlib>
using namespace std;
class student
{
	public:
		char name[100];
		int roll_no;
		int year;
		void getdata();
		void printdata();
};
void student::getdata()
{
	cout<<"Enter the name...";
	cin.getline(name,20,'.');
	cout<<"Enter the year of study...";
	cin>>year;
	cout<<"Enter the roll number...";
	cin>>roll_no;
}
void student::printdata()
{
	cout<<"NAME          : "<<name<<endl;
	cout<<"YEAR OF STUDY : "<<year<<endl;
	cout<<"ROLL NUMBER   : "<<roll_no<<endl;
}
class acedemics:public student
{
	public:
		float cgpa;
		void setcgpa()
		{
			cout<<"Enter the CGPA....";
			cin>>cgpa;
		}
		float returncgpa()
		{
			return cgpa;
		}
		void getcgpa()
		{
			cout<<"CGPA         : "<<returncgpa()<<endl;
		}
};	
class sports:public student
{
	public:
		char spot[100];
		float rat;
		void setdata()
		{
			cout<<"Enter the game which u are playing....";
			cin.getline(spot,20,'.');
			cout<<"Enter the ratings for 10...";
			cin>>rat;
		}
		void getspot()
		{
			cout<<"GAME              : "<<spot<<endl;
			cout<<"RATINGS           : "<<rat<<endl;
		}
};
class marks:public acedemics,public sports
{
	public:
		double mark;
		student s;
		void setmark()
		{
			s.getdata();
			setcgpa();
			setdata();
			mark=((cgpa*10)+(rat*10))/2;
		}
		void getmark()
		{
			setmark();
			s.printdata();
			cout<<"CGPA              : "<<returncgpa()<<endl;
			cout<<"GAME              : "<<spot<<endl;
                        cout<<"RATINGS           : "<<rat<<endl;
			cout<<"MARK (OUT OF 100) : "<<mark<<endl;
		}
};
main()
{
	int c,x;
	cout<<"Enter\n1->For Student class\n2->For acedamics class\n3->For sports class\n4->For marks class\n";
	do
	{
		cout<<"Enter the choice : ";
		cin>>c;
		switch(c)
		{
			case 1:
				{
					student stud;
					stud.getdata();
					stud.printdata();
					break;
				}
			case 2:
				{
					acedemics ace;
					ace.getdata();
					ace.setcgpa();
					ace.printdata();
					ace.getcgpa();
					break;
				}
			case 3:
				{
					sports s;
					s.getdata();
					s.setdata();
					s.printdata();
					s.getspot();
					break;
				}
			case 4:
				{
					marks m;
					m.getmark();
					break;
				}
			default:exit(0);
		}
		cout<<"Enter 1 to to continue...";
		cin>>x;
	}while(x==1);
}
