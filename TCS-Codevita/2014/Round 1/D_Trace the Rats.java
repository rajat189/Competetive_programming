import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class TraceTheRats {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int N = Integer.parseInt(bufferedReader.readLine());

		char[][] A = new char[N][N];
		for (int i = 0; i < N; i++) {
			A[i] = bufferedReader.readLine().toCharArray();
		}

		int R = Integer.parseInt(bufferedReader.readLine());

		int[] X = new int[R],
				Y = new int[R];
		for (int i = 0; i < R; i++) {
			String[] inputs = bufferedReader.readLine().split(" ");
			X[i] = Integer.parseInt(inputs[0]) - 1;
			Y[i] = Integer.parseInt(inputs[1]) - 1;
		}

		boolean[][] visited;
		for (int i = 1; i < R; i++) {
			visited = new boolean[N][N];
			if (!visit(A, X[i], Y[i], X[0], Y[0], visited)) {
				System.out.println("No");
				return;
			}
		}

		System.out.println("Yes");
	}

	private static boolean visit(char[][] A, int X1, int Y1, int X2, int Y2, boolean[][] visited) {
		if (X1 == X2 && Y1 == Y2) {
			return true;
		}

		if (A[X1][Y1] == 'X' || visited[X1][Y1]) {
			return false;
		}

		visited[X1][Y1] = true;

		if (X1 - 1 >= 0 && visit(A, X1 - 1, Y1, X2, Y2, visited)) {
			return true;
		}

		if (X1 + 1 < A.length && visit(A, X1 + 1, Y1, X2, Y2, visited)) {
			return true;
		}

		if (Y1 - 1 >= 0 && visit(A, X1, Y1 - 1, X2, Y2, visited)) {
			return true;
		}

		if (Y1 + 1 < A.length && visit(A, X1, Y1 + 1, X2, Y2, visited)) {
			return true;
		}

		return false;
	}

}