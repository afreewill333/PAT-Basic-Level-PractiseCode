import java.util.*;
import java.io.*;
import java.math.*;

public class Main{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		int T = in.nextInt();
		
		for(int i=1;i<=T;i++)
		{
			BigDecimal A,B,C;
			A = in.nextBigDecimal();
			B = in.nextBigDecimal();
			C = in.nextBigDecimal();

			System.out.print("Case #"+i+": ");
			if(A.add(B).compareTo(C)>0)
				System.out.println("true");
			else
				System.out.println("false");
		}
	}
}