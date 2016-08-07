import java.util.Scanner;
class bank
{
	private String name;
	private int account_no;
	private int account_bal;
	public void getdata()
	{
		System.out.print("Enter the name...");
		Scanner input=new Scanner(System.in);
		name=input.nextLine();
		System.out.print("Enter the Account Number...");
		account_no=input.nextInt();
		System.out.print("Enter the account bal...");
		account_bal=input.nextInt();
	}
	public void credit(int val)
	{
		account_bal+=val;
	}
	public void debit(int val)
	{
		account_bal-=val;
	}
	public void printdata()
	{
		System.out.println("****DETAILS OF THE ACCOUNT HOLDER*****");
		System.out.println("NAME            : "+name);
		System.out.println("ACCOUNT NUMBER  : "+account_no);
		System.out.println("ACCOUNT Balance : "+account_no);
	}
	public void update()
	{
		System.out.println("Updated balance is..."+account_bal);
	}
};

