import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class ZombieWorld {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int K = Integer.parseInt(bufferedReader.readLine());
		for (int i = 1; i <= K; i++) {
			String[] inputs = bufferedReader.readLine().split(" ");
			int N = Integer.parseInt(inputs[0]),
					T = Integer.parseInt(inputs[1]);

			inputs = bufferedReader.readLine().split(" ");
			int[] E = new int[N];
			for (int j = 0; j < N; j++) {
				E[j] = Integer.parseInt(inputs[j]);
			}

			inputs = bufferedReader.readLine().split(" ");
			int P = Integer.parseInt(inputs[0]),
					D = Integer.parseInt(inputs[1]);

			Arrays.sort(E);

			boolean flag = true;
			for (int e : E) {
				if (e <= P) {
					P += (P - e);
				} else {
					flag = false;
					break;
				}
			}

			if (flag && P >= D) {
				System.out.println("Yes");
			} else {
				System.out.println("No");
			}
		}
	}

}