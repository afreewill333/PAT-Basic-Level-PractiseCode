import java.io.*;
import java.util.*;

public class 1016{
	
	public static void main(String[] args){
		
		Scanner sc = new Scanner(system.in);
		
		String A = sc.nextString();
		String B = sc.nextString();
		char Da = sc.nextChar();
		char Db = sc.nextChar();

		int cnt=0;
		for(int i=0;i!=A.length();++i)
			if(A[i]==Da)cnt++;
		A = new String(cnt,Da);
	}
}

