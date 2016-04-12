import java.io.File;
import java.io.PrintWriter;
import java.io.FileReader;
import java.io.IOException;
import java.io.BufferedReader;
import java.util.StringTokenizer;
class CXZ {
  public static void main(String[] a) throws NumberFormatException, IOException {
    BufferedReader in = new BufferedReader(new FileReader("coding_contest_creation.txt"));
    PrintWriter out = new PrintWriter(new File("Coding_Contest_Creation_out.txt"));
    int T=Integer.parseInt(in.readLine());
    for (int t=1;t<=T;t++){
      int N=Integer.parseInt(in.readLine());
      StringTokenizer s=new StringTokenizer(in.readLine());
      int[] D=new int[N];
      for (int i=0;i<N;i++)D[i]=Integer.parseInt(s.nextToken());
      long we=0;
      for (int i=0;i<N;){
        int we1=i;
        int we12=i;
        int we123=1;
        for (we12=i+1;we12<N;we12++,i++) {
          int we1234=D[we12]-D[i];
          if(we1234>30 || we1234<=0)
            break;
          if(we123==4)break;				
          if(we1234<=10){
            we123++;
            continue;
          }      
          if(we1234>20 && we1234<=30){
            if(4-we123==3)we123+=3;
            else{
              we123=4;
              we12--;
            }
          }
          if(we1234>10 && we1234<=20){
            if(4-we123>=2)we123+=2;
            else{
              we123=4;
              we12--;
            }
          }
        }
        we+=4-(we12-we1);
        i=we12;
      }
      out.printf("Case #%d: %d\n", t, we);
    }
    out.flush();
    out.close();
  }
}