import java.util.*;
import java.io.*;

public class java_template {
    static class FastReader {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreElements()) try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {}
            return st.nextToken();
        }

        int nextInt() { return Integer.parseInt(next()); }
        long nextLong() { return Long.parseLong(next()); }
    }

    public static void solve(FastReader fr, PrintWriter out) {
        // solution
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        
        int t = fr.nextInt(); // Set to 1 if single test case
        while (t-- > 0) {
            solve(fr, out);
        }
        out.close();
    }
}
