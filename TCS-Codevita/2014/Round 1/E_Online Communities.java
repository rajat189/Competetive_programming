import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class OnlineCommunities {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int N = Integer.parseInt(bufferedReader.readLine());

		int[] users = new int[N + 1],
				groupSizes = new int[N / 2 + 1];
		int group = 0;

		String line;
		while (!(line = bufferedReader.readLine()).equals("-1")) {
			if (line.startsWith("C")) {
				String[] inputs = line.split(" ");
				int I = Integer.parseInt(inputs[1]),
						J = Integer.parseInt(inputs[2]);

				if (users[I] != 0) {
					users[J] = users[I];
					groupSizes[users[I]]++;
				} else if (users[J] != 0) {
					users[I] = users[J];
					groupSizes[users[J]]++;
				} else {
					group++;
					users[I] = group;
					users[J] = group;
					groupSizes[group] = 2;
				}
			} else if (line.equals("Q 0 0")) {
				if (group == 0) {
					System.out.println("0");
					continue;
				}

				int evenGroups = 0;
				for (int groupSize : groupSizes) {
					if (groupSize > 0 && groupSize % 2 == 0) {
						evenGroups++;
					}
				}
				System.out.println(evenGroups);
			}
		}
	}

}