#include<iostream>
using namespace std;
class length
{
	private:
		int feet,inches;
	public:
		friend istream& operator>>(istream &in,length &a)
		{
			in>>a.feet>>a.inches;
			return in;
		}
		friend ostream& operator<<(ostream &out,length &a)
		{
			int k;
			if(a.inches>=12)
			{
				k=a.inches/12;
				a.inches%=12;
				a.feet+=k;
			}
			out<<a.feet<<"\t\t"<<a.inches<<endl;
			return out;
		}
		void operator+(length a)
		{
			length c;
			int k;
			c.feet=feet+a.feet;
			c.inches=inches+a.inches;
			cout<<c;
		}
		friend length operator-(length a,length b)
		{
			length c;
			int k;
			c.feet=b.feet+a.feet;
			c.inches=b.inches+a.inches;
			return c;
		}
		void operator++()
		{
			int k;
			inches++;
			if(inches>=12)
			{
				k=inches/12;
				inches%=12;
				feet+=k;
			}
		}
};
main()
{
	length s1,s2,sum;
	cout<<"Enter the first length in feet inches...";
	cin>>s1;
	cout<<"Enter the second length in feet inches...";
	cin>>s2;
	cout<<"FEET\t\tINCHES\n";
	cout<<s1<<s2;
	cout<<"The sum is...\n";
	cout<<"FEET\t\tINCHES\n";
	s1+s2;
	cout<<"After Incrementing one inches....\n";
	cout<<"FEET\t\tINCHES\n";
	++s1;
	++s2;
	cout<<s1;
	cout<<s2;
	cout<<"The sum using friend function is...\n";
	sum=s1-s2;
	cout<<"FEET\t\tINCHES\n";
	cout<<sum;
	return 0;
}
