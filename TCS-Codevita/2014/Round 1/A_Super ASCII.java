import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SuperASCII {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int t = Integer.parseInt(bufferedReader.readLine());
		for (int i = 1; i <= t; i++) {
			char[] chars = bufferedReader.readLine().toCharArray();
			int[] counts = new int[26];
			for (int j = 'a'; j <= 'z'; j++) {
				for (char c : chars) {
					if (c == j) {
						counts[j - 97]++;
					}
				}
			}

			boolean flag = true;
			for (int j = 0; j < counts.length; j++) {
				if (counts[j] != 0 && counts[j] != j + 1) {
					flag = false;
					break;
				}
			}

			if (flag) {
				System.out.println("Yes");
			} else {
				System.out.println("No");
			}
		}
	}

}