import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class kGood {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() { return Integer.parseInt(next()); }

        long nextLong() { return Long.parseLong(next()); }

        double nextDouble() { return Double.parseDouble(next()); }

        String nextLine() {
            String str = "";
            try { str = br.readLine(); }
            catch (IOException e) { e.printStackTrace(); }
            return str;
        }
    }

    public static void main(String[] args) {
        int strLen, thresh, res=0;
        String str;
        FastReader fr = new FastReader();
        int testCases = fr.nextInt();
        for (int i = 0; i < testCases; i++) {
            strLen = fr.nextInt();
            thresh = fr.nextInt();
            str = fr.nextLine();
            for(int j = 0; j < strLen/2; j++) {
                if(str.charAt(j) == str.charAt(strLen-j-1)){
                    res++;
                }
            }
            res = thresh - res;
            if(res < 0){res = -res;}
            System.out.println("Case #" + (i+1) + ": " + res);
        }
    }
}