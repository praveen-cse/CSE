package q1;
public class Employee
{
	public String first_name,last_name;
	public double salary;
	public Employee(String a,String b,double c)
	{
		first_name=a;
		last_name=b;
		salary=c;
	}
	public Employee()
	{
		first_name="Praveen";
		last_name="Kumar";
		salary=50000.00;
	}
	public void setfirst_name(String a)
	{
		first_name=a;
	}
	public String getfirst_name()
	{
		return first_name;
	}
	public void setlast_name(String a)
	{
		last_name=a;
	}
	public String getlast_name()
	{
		return last_name;
	}
	public void setsalary(double a)
	{
		if(salary>=0)
			salary=a;
	}
	public double getsalary()
	{
		return salary;
	}
};

