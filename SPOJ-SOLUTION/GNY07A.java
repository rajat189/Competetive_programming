import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner i=new Scanner(System.in);
		int n,j,t=i.nextInt();
		for(j=1;j<=t;j++){
			String s;
			n=i.nextInt();
			s=i.next();
			
			System.out.println(Integer.toString(j) + " " + s.substring(0,n-1) + s.substring(n,s.length()));
		}
	}
}