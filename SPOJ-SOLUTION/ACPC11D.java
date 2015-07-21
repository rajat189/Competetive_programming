import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.PriorityQueue;
import java.util.StringTokenizer;
 
public class Main {
 
	static class node implements Comparable<node> {
		int u, k, dist;
 
		node(int u, int k, int dist) {
			this.u = u;
			this.k = k;
			this.dist = dist;
		}
 
		@Override
		public int compareTo(node o) {
			return dist - o.dist;
		}
	}
 
	static int[][] dm = { { 4, 5, 2, 3, 1, 0 }, { 5, 4, 2, 3, 0, 1 },
			{ 0, 1, 5, 4, 2, 3 }, { 0, 1, 4, 5, 3, 2 } };
 
	static int[] dx = { 0, 0, 1, -1 };
	static int[] dy = { 1, -1, 0, 0 };
 
	// static ArrayList<Integer> ver = new ArrayList<Integer>();
	@SuppressWarnings("unchecked")
	static ArrayList<Integer>[] adj = new ArrayList[720];
 
	static boolean[][] v;
	static char[][] g;
	static int n, m;
	static HashMap<String, Integer> mp = new HashMap<String, Integer>();
	static String[] map = new String[720];
 
	// static int[][][][][] dp;
	// static boolean[][][][][] val;
 
	static boolean valid(int nx, int ny) {
		return nx > -1 && nx < n && ny > -1 && ny < m && g[nx][ny] != '.'
				&& g[nx][ny] != 'S';
	}
 
	static String move(String s, int d) {
		char[] t = new char[6];
		for (int i = 0; i < 6; i++)
			t[i] = s.charAt(dm[d][i]);
		return new String(t);
	}
 
	static void dfs(int x, int y) {
		v[x][y] = true;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (valid(nx, ny) && !v[nx][ny])
				dfs(nx, ny);
		}
	}
 
	static int get(int nx, int ny, int c) {
		if (g[nx][ny] == 'T')
			return 0;
		int nc = g[nx][ny] - '0';
		if (nc == c)
			return -c * 2;
		return c + nc;
	}
 
	// static int solve(int s, int x, int y, int m, int f) {
	// if (g[x][y] == 'T')
	// return f * 99999999;
	// if (m == 0)
	// return -99999999;
	// if (val[s][m][x][y][f])
	// return dp[s][m][x][y][f];
	// val[s][m][x][y][f] = true;
	// int ans = -99999999;
	// String S = map[s];
	// for (int i = 0; i < 4; i++) {
	// int nx = x + dx[i];
	// int ny = y + dy[i];
	// if (valid(nx, ny)) {
	// String t = move(S, i);
	// int curr = g[x][y] == 'S' ? -99999999 : get(x, y,
	// S.charAt(5) - '0');
	// int nxt = g[nx][ny] == 'T' ? -99999999 : get(nx, ny,
	// t.charAt(5) - '0');
	// int nf = curr + nxt > 0 ? 1 : f;
	// ans = Math.max(
	// ans,
	// get(nx, ny, t.charAt(5) - '0')
	// + solve(mp.get(t), nx, ny, m - 1, nf));
	// }
	// }
	// return dp[s][m][x][y][f] = ans;
	// }
 
	static char[] perm = new char[6];
 
	static int sz = 0;
 
	static void generate(int mask) {
		if (mask == 63) {
			mp.put(new String(perm), sz);
			map[sz++] = new String(perm);
			return;
		}
		for (int i = 0; i < 6; i++) {
			if ((mask & (1 << i)) == 0) {
				perm[Integer.bitCount(mask)] = (char) (i + 1 + '0');
				generate(mask | (1 << i));
			}
		}
	}
 
	// static void bell_ford(int s, int st, int e) {
	// int[][] dist = new int[ver.size()][720];
	// for (int[] a : dist)
	// Arrays.fill(a, 99999999);
	// dist[Collections.binarySearch(ver, s)][st] = 0;
	// for (int i = 0; i < ver.size() - 1; i++) {
	// for (int l = 0; l < ver.size(); l++) {
	// int u = ver.get(l);
	// int x = u / m;
	// int y = u % m;
	// if (u == e)
	// continue;
	// for (int k = 0; k < 720; k++) {
	// for (int j = 0; j < 4; j++) {
	// int nx = x + dx[j];
	// int ny = y + dy[j];
	// if (valid(nx, ny)) {
	// int idx = adj[k].get(j);
	// int cost = get(nx, ny, map[idx].charAt(5) - '0');
	// dist[Collections.binarySearch(ver, nx * m + ny)][idx] = Math
	// .min(dist[Collections.binarySearch(ver, nx
	// * m + ny)][idx],
	// dist[Collections.binarySearch(ver,
	// u)][k] + cost);
	// }
	// }
	// }
	// }
	// }
	// for (int l = 0; l < ver.size(); l++) {
	// int u = ver.get(l);
	// int x = u / m;
	// int y = u % m;
	// if (u == e)
	// continue;
	// for (int k = 0; k < 720; k++) {
	// for (int j = 0; j < 4; j++) {
	// int nx = x + dx[j];
	// int ny = y + dy[j];
	// if (valid(nx, ny)) {
	// int idx = adj[k].get(j);
	// int cost = get(nx, ny, map[idx].charAt(5) - '0');
	// if (dist[Collections.binarySearch(ver, u)][k] + cost < dist[Collections
	// .binarySearch(ver, nx * m + ny)][idx]) {
	// out.println("Infinity");
	// return;
	// }
	// }
	// }
	// }
	// }
	// int min = 99999999;
	// int idx = Collections.binarySearch(ver, e);
	// for (int k = 0; k < 720; k++)
	// min = Math.min(min, dist[idx][k]);
	// out.println(min == 99999999 ? "Impossible" : -min);
	// }
 
	static void dijkstra(int s, int st, int e) {
		int[][] dist = new int[n * m][720];
		for (int[] a : dist)
			Arrays.fill(a, 99999999);
		dist[s][st] = 0;
		PriorityQueue<node> pq = new PriorityQueue<node>();
		pq.add(new node(s, st, 0));
		boolean flag = false;
		while (!pq.isEmpty() && !flag) {
			node t = pq.poll();
			if (t.u == e)
				continue;
			if (t.dist == dist[t.u][t.k]) {
				int x = t.u / m;
				int y = t.u % m;
				for (int i = 0; i < 4; i++) {
					int nx = x + dx[i];
					int ny = y + dy[i];
					if (valid(nx, ny)) {
						int idx = adj[t.k].get(i);
						int cost = get(nx, ny, map[idx].charAt(5) - '0');
						if (g[x][y] != 'S' && g[nx][ny] != 'T') {
							int prev = get(x, y, map[t.k].charAt(5) - '0');
							if (prev + cost < 0)
								flag = true;
						}
						if (dist[t.u][t.k] + cost < dist[nx * m + ny][idx]) {
							dist[nx * m + ny][idx] = dist[t.u][t.k] + cost;
							pq.add(new node(nx * m + ny, idx,
									dist[nx * m + ny][idx]));
						}
					}
				}
			}
		}
		if (flag) {
			out.println("Infinity");
			return;
		}
		int min = 99999999;
		for (int k = 0; k < 720; k++)
			min = Math.min(min, dist[e][k]);
		out.println(-min);
	}
 
	public static void main(String[] args) throws IOException {
		br = new BufferedReader(new InputStreamReader(System.in));
		out = new PrintWriter(System.out);
		sc = new StringTokenizer("");
		generate(0);
		for (String s : mp.keySet()) {
			int idx = mp.get(s);
			adj[idx] = new ArrayList<Integer>();
			for (int i = 0; i < 4; i++)
				adj[idx].add(mp.get(move(s, i)));
		}
		int tc = nxtInt();
		while (tc-- > 0) {
			n = nxtInt();
			m = nxtInt();
			String dice = nxtTok();
			g = new char[n][m];
			v = new boolean[n][m];
			// ver.clear();
			// dp = new int[721][(n + m) + 5][n][m][2];
			// val = new boolean[721][(n + m) + 5][n][m][2];
			int si = 0;
			int sj = 0;
			int ti = 0;
			int tj = 0;
			for (int i = 0; i < n; i++) {
				g[i] = nxtCharArr();
				for (int j = 0; j < m; j++) {
					if (g[i][j] == 'S') {
						si = i;
						sj = j;
					} else if (g[i][j] == 'T') {
						ti = i;
						tj = j;
					}
					// if (g[i][j] != '.')
					// ver.add(i * m + j);
				}
			}
			// bell_ford(si * m + sj, mp.get(dice), ti * m + tj);
			dfs(si, sj);
			if (!v[ti][tj]) {
				out.println("Impossible");
				continue;
			}
			dijkstra(si * m + sj, mp.get(dice), ti * m + tj);
 
			// int ans = solve(mp.get(dice), si, sj, (n + m), 0);
			// out.println(ans >= 99999999 ? "Infinity" : ans);
		}
		br.close();
		out.close();
	}
 
	static BufferedReader br;
	static StringTokenizer sc;
	static PrintWriter out;
 
	static String nxtTok() throws IOException {
		while (!sc.hasMoreTokens()) {
			String s = br.readLine();
			if (s == null)
				return null;
			sc = new StringTokenizer(s.trim());
		}
		return sc.nextToken();
	}
 
	static int nxtInt() throws IOException {
		return Integer.parseInt(nxtTok());
	}
 
	static long nxtLng() throws IOException {
		return Long.parseLong(nxtTok());
	}
 
	static double nxtDbl() throws IOException {
		return Double.parseDouble(nxtTok());
	}
 
	static int[] nxtIntArr(int n) throws IOException {
		int[] a = new int[n];
		for (int i = 0; i < n; i++)
			a[i] = nxtInt();
		return a;
	}
 
	static long[] nxtLngArr(int n) throws IOException {
		long[] a = new long[n];
		for (int i = 0; i < n; i++)
			a[i] = nxtLng();
		return a;
	}
 
	static char[] nxtCharArr() throws IOException {
		return nxtTok().toCharArray();
	}
}