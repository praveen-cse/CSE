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
		if(account_bal<=val)
		{
			System.out.println("Your account doesn't have the sufficent balance");
		}
		else
			account_bal-=val;

	}
	public void printdata()
	{
		System.out.println("****DETAILS OF THE ACCOUNT HOLDER*****");
		System.out.println("NAME            : "+name);
		System.out.println("ACCOUNT NUMBER  : "+account_no);
		System.out.println("ACCOUNT Balance : "+account_bal);
	}
	public void update()
	{
		System.out.println("Updated balance is...."+account_bal);
	}
};
class account
{
	public static void main(String args[])
	{
		bank k=new bank();
		int ch,x;
		System.out.println("Enter\n1->Read the data from the user\n2->To add some money\n3->To withdraw some money\n4->To display the contents");
		Scanner input=new Scanner(System.in);
		do
		{
			System.out.print("Enter the choice : ");
			ch=input.nextInt();
			switch(ch)
			{
				case 1:
					k.getdata();
					break;
				case 2:
					System.out.print("Enter the money to add..");
					int m=input.nextInt();
					k.credit(m);
					k.update();
					break;
				case 3:
					System.out.print("Enter the money to withdraw..");
					int n=input.nextInt();
					k.debit(n);
					k.update();
					break;
				case 4:
					k.printdata();
					break;
			}
			System.out.println("Enter 1 to continue");
			x=input.nextInt();
		}while(x==1);
	}
};
