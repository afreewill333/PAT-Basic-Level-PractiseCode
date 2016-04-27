import java.io.*;
import java.util.*;
import java.math.*;

public class PAT1016{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(System.in);
		
		String A = sc.next();
		char Da = sc.next().charAt(0);
		String B = sc.next();
		char Db = sc.next().charAt(0);

		String str = "";
		for(int i=0;i!=A.length();++i)
			if(A.charAt(i)==Da)str+=Da;
		A = str;
		str = "";
		for(int i=0;i!=B.length();++i)
			if(B.charAt(i)==Db)str+=Db;
		B = str;
		
		BigInteger ans;
		try{
			ans = new BigInteger(A);
		}catch(Exception e){
			ans = new BigInteger("0");
		}
		try{
			ans = ans.add(new BigInteger(B));
		}catch(Exception e){
			//do nothging
		}
		System.out.println(ans);
		
	}
}

