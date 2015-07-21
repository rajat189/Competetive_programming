import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Scanner;
 
class EnormousInputTest$INTEST {
	public static void main(String[] args)throws IOException {
		quickParseRead(System.in);
	}
	
	 	
	public static void quickParseRead(InputStream in) throws IOException {
		IntStreamReader inp = new IntStreamReader(in);
		int a,b,c,t=inp.getNextInt();
		while (t-- > 0) {
			
			a=inp.getNextInt();
			b=inp.getNextInt();
			c=a*a+b*b;
			if((float)Math.sqrt(c)==Math.sqrt(c))System.out.println("YES" + " " + (int)Math.sqrt(c));
			else System.out.println("NO");
		}
		
	}
 
	static class IntStreamReader {
 
		private BufferedInputStream inp = null;
		private int offset = 0;
		private int size = 51200;
		private byte[] buff = new byte[size];
 
		public IntStreamReader(InputStream in) throws IOException {
			inp = new BufferedInputStream(in);
			inp.read(buff, 0, size);
		}
 
		public int getNextInt() throws IOException {
			int parsedInt = 0;
			int i = offset;
			// skip any non digits
			while (i < buff.length && (buff[i] < '0' || buff[i] > '9')) {
				i++;
			}
			// read digits and parse number
			while (i < buff.length && buff[i] >= '0' && buff[i] <= '9') {
				parsedInt *= 10;
				parsedInt += buff[i] - '0';
				i++;
			}
			// check if we reached end of buffer
			if (i == buff.length) {
				// copy leftovers to buffer start
				int j = 0;
				for (; offset < buff.length; j++, offset++) {
					buff[j] = buff[offset];
				}
				// and now fil the buffer
				inp.read(buff, j, size - j);
				// and attempt to parse int again
				offset = 0;
				parsedInt = getNextInt();
			} else {
				offset = i;
			}
			return parsedInt;
		}
	}
}
