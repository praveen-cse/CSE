package q1;
import java.util.Scanner;
public class EmployeeTest
{
	public static void main(String args[])
        {
                Employee emp1=new Employee();
                Employee emp2=new Employee("VIJAY","KUMAR",10000000);
                emp1=setdata();
                System.out.println("****The Details of the first Employee is****");
                display(emp1);
                System.out.println("****The Details of the second Employee is****");
                display(emp2);
                System.out.println("After incrementing 10%....");
                emp1.salary+=(emp1.salary/10);
                emp2.salary+=(emp2.salary/10);
                System.out.println("****The Details of the first Employee is****");
                display(emp1);
                System.out.println("****The Details of the second Employee is****");
                display(emp2);
        }
	public static double year_salary(double a)
	{
		return (a*12);
	}
	public static void display(Employee a)
	{
		System.out.println("FIRST NAME\tLAST NAME\tSALARY\t");
		System.out.println(a.first_name+"\t"+a.last_name+"\t"+a.salary+"\t");
	}
	public static Employee setdata()
	{
		Scanner input=new Scanner(System.in);
		Employee emp1=new Employee();
		System.out.println("****Enter the details of Employee****");
		System.out.print("Enter the first name....");
		String n=input.nextLine();
		emp1.setfirst_name(n);
		System.out.print("Enter the last name...");
		n=input.nextLine();
		emp1.setlast_name(n);
		System.out.print("Enter the salary for a month...");
		double k=input.nextDouble();
		emp1.setsalary(k);
		return emp1;
	}
};
