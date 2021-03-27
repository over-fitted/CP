import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class ReverseSort {
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

    public static void swap(int i, int j, int[] target) {
        for(int k = 0; k < (j - i + 1) / 2; k++){
            
            int buffer = target[i + k];
            target[i + k] = target[j - k];
            target[j - k] = buffer;
        }
    }

    public static int insertionSort(int[] target) {
        int res = 0;
        for(int i = 0; i < target.length - 1; i++) {
            int smallest = target[i];
            int smallestIndex = i;
            for(int j = i + 1; j < target.length; j++){
                if(target[j] < smallest){
                    smallest = target[j];
                    smallestIndex = j;
                }
            }
            res += smallestIndex - i + 1;
            swap(i, smallestIndex, target);
        }
        return res;
    }

    public static void main(String[] args) {
        FastReader s = new FastReader();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int testCases = s.nextInt();
        for(int i = 0; i < testCases; i++){
            int len = s.nextInt();
            int[] input = new int[len];
            for(int j = 0; j < len; j++){
                input[j] = s.nextInt();
            }
            pw.println("Case #" + (i+1) + ": " + insertionSort(input));
            
        }
        pw.flush();
    }
}
