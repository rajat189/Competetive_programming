
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MatrixRotations {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int N = Integer.parseInt(bufferedReader.readLine());

		int[][] A = new int[N][N];
		for (int i = 0; i < N; i++) {
			String[] inputs = bufferedReader.readLine().split(" ");
			for (int j = 0; j < N; j++) {
				A[i][j] = Integer.parseInt(inputs[j]);
			}
		}

		int angle = 0;

		int[][] RA = new int[N][N];
		copy(A, RA, N);

		String line;
		while (!(line = bufferedReader.readLine()).equals("-1")) {
			if (line.startsWith("A")) {
				int S = Integer.parseInt(line.split(" ")[1]);
				angle += S;

				rotate(RA, N, S / 90);
			} else if (line.startsWith("Q")) {
				String[] inputs = line.split(" ");
				int K = Integer.parseInt(inputs[1]),
						L = Integer.parseInt(inputs[2]);

				System.out.println(RA[K - 1][L - 1]);
			} else if (line.startsWith("U")) {
				String[] inputs = line.split(" ");
				int X = Integer.parseInt(inputs[1]),
						Y = Integer.parseInt(inputs[2]),
						Z = Integer.parseInt(inputs[3]);

				A[X - 1][Y - 1] = Z;

				RA = new int[N][N];
				copy(A, RA, N);

				rotate(RA, N, angle / 90);
			}
		}
	}

	private static void copy(int[][] A, int[][] RA, int N) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				RA[i][j] = A[i][j];
			}
		}
	}

	private static void rotate(int[][] RA, int N) {
		int[][] temp = new int[N][N];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				temp[i][j] = RA[N - j - 1][i];
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				RA[i][j] = temp[i][j];
			}
		}
	}

	private static void rotate(int[][] RA, int N, int rotations) {
		for (int i = 1; i <= rotations; i++) {
			rotate(RA, N);
		}
	}

}