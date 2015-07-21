import java.util.*;
import java.lang.*;
import java.io.*;

class Parser
{
   final private int BUFFER_SIZE = 1 << 16;

   private DataInputStream din;
   private byte[] buffer;
   private int bufferPointer, bytesRead;

   public Parser(InputStream in)
   {
      din = new DataInputStream(in);
      buffer = new byte[BUFFER_SIZE];
      bufferPointer = bytesRead = 0;
   }

   public int nextInt() throws Exception
   {
      int ret = 0;
      byte c = read();
      while (c <= ' ') c = read();
      boolean neg = c == '-';
      if (neg) c = read();
      do
      {
         ret = ret * 10 + c - '0';
         c = read();
      } while (c > ' ');
      if (neg) return -ret;
      return ret;
   }

   private void fillBuffer() throws Exception
   {
      bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
      if (bytesRead == -1) buffer[0] = -1;
   }

   private byte read() throws Exception
   {
      if (bufferPointer == bytesRead) fillBuffer();
      return buffer[bufferPointer++];
   }
}

class jnext{

static int permute(int [] seq){
	
	// STEP 1: find a
	int a = -1;
	for(int i = 0; i < seq.length-1; i++){
		if(seq[i] < seq[i+1]) a = i;
	}

	if(a == -1){System.out.println( -1); return 1;}

	// STEP 2: find b
	int b = -1;
	for(int i = 1; i < seq.length; i++){
		if(seq[a] < seq[i]) b = i;	
	}
//	System.out.println("b: " + b + " " + seq[b]);
	
	//STEP 3: Swap seq[a] and seq[b]
	int t = seq[a];
	seq[a] = seq[b];
	seq[b] = t;
	

	//STEP 3: Reverse from a+1 to end

	int temp = 0;

	for(int i = a+1, j = seq.length-1; i<j ; i++, j--){
		temp = seq[i];
		seq[i] = seq[j];
		seq[j] = temp;
	}

	StringBuilder o = new StringBuilder();
	// print seq
	for(int p = 0; p < seq.length; p++){
		o.append(seq[p]);
	}
	System.out.println(o);
	return 1;
}

public static void main(String[] args) throws Exception{
	Parser scan = new Parser(System.in);

	int cases = scan.nextInt();

	for(int i = 0; i < cases; i++){
		int numDigits = scan.nextInt();
		int sequence [] = new int[numDigits];
		for(int p = 0; p < numDigits; p++){
			sequence[p] = scan.nextInt();
		}		
		permute(sequence);

	}
}}