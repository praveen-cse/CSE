import java.util.Scanner;
public class in
{
	public static int preincrement(int n)
	{
		return ++n;
	}
	public static int postincrement(int n)
	{
		return n++;
	}
	public static int predecrement(int n)
	{
		return --n;
	}
	public static int postdecrement(int n)
	{
		return n--;
	}
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		System.out.println("Enter the number...");
		int n=input.nextInt();
		System.out.println("++n = "+preincrement(n));
		System.out.println("n++ = "+postincrement(n));
		System.out.println("--n = "+predecrement(n));
		System.out.println("n-- = "+postdecrement(n));
	}
}
