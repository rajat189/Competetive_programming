import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner;
class Ideone
{
	static boolean find(int[] a){
		int n=a.length;
        if (a[0]>0) {
            return false;
        }
        for (int j=1;j<n;j++) {
            if (a[j]>j) {
                return false;
            }
        }
        return true;
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner i=new Scanner(System.in);
		int n,t,j;
		t=i.nextInt();
		while(t-->0){
			n=i.nextInt();
			int[] a=new int[n];
			for(j=0;j<n;j++)a[j]=i.nextInt();
			if(find(a))System.out.println("YES");
			else System.out.println("NO");
		}
	}
}