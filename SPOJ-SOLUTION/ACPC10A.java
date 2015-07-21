import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner i=new Scanner(System.in);
		int a,b,c;
		while(true){
			a=i.nextInt();
			b=i.nextInt();
			c=i.nextInt();
			if(a==b&&b==c&&c==0)break;
			if(a==b && b==c) {}
         	else if(b-a==c-b) {System.out.println("AP "+(c+b-a));}
         	else if(c/b==b/a && b!=0 & a!=0) { System.out.println("GP "+(c*(b/a)));}
         	else {   
         	}
		}
	}
}