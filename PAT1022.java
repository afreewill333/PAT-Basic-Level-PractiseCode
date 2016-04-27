import java.io.*;
import java.util.*;
import java.math.*;

public class PAT1022{

	public static void main(String[] args){

		Scanner sc = new Scanner(System.in);

		BigInteger A = new BigInteger(sc.next());
		BigInteger B = new BigInteger(sc.next());
		int D = sc.nextInt();

		BigInteger ans = A.add(B);
		System.out.println(ans.toString(D));
	
	}
}