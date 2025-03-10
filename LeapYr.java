import java.util.Scanner;
public class LeapYr {
	public static void main(String[] args) {
		Scanner year = new Scanner(System.in);
		
		System.out.println("Enter the year");
		int yr = year.nextInt();
		
		if (
			(yr % 4 == 0 && yr % 100 != 0)||(yr % 400 == 0))
		{System.out.println(yr+ "is a leap year");
		} else { System.out.println(yr+" is not a leap year");
		}
	}
}
		