// in calculating each cost:
// length - 1 minimum
// 1 + 2 + 3... + length - 2 maximum
// worst case: size 4, 9 swaps
import java.io.*;
import java.util.StringTokenizer;

public class ReversortEngineering {
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

    // sees if swaps is possible for given size
    public static boolean possible(int size, int swaps) {
        // minimum: 1 per position before size - 1 i.e. sorted 
        if(swaps < size - 1){
            return false;
        }
        int max = 0;
        //AP summation 2+3+4...+size
        if(size % 2 == 0) {
            max += (size + 2) / 2;
        }
        max += (size + 2) * ((size - 1) / 2);
        return swaps <= max;
    }

    public static int[] mutate(int swaps, int[] target) {
        // just need sorted list
        if(swaps == target.length - 1){
            return target;
        }
        // try possible swaps from biggest to smallest
        for(int i = 0; i < target.length - 1; i++) {
            /**
             * 1234
             * 4321
             * 2341
             * 2431
             */
            if(swaps - (target.length - i - 1) >= target.length - 1) {
                boolean atStart = false;
                int start = 0;
                int end = target.length - 1;
                for(int j = 0; j < i; j++){
                    if(atStart){
                        start++;
                    } else {
                        end--;
                    }
                    atStart = !atStart;
                }
                swap(start, end, target);
                swaps -= target.length - i - 1;
            }
        }
        return target;
    }

    //reverses target from index i to index j
    public static void swap(int i, int j, int[] target) {
        for(int k = 0; k < (j - i + 1) / 2; k++){
            int buffer = target[i + k];
            target[i + k] = target[j - k];
            target[j - k] = buffer;
        }
    }

    public static void main(String[] args) {
        FastReader s = new FastReader();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int testCases = s.nextInt();
        for(int i = 0; i < testCases; i++){
            int len = s.nextInt();
            int cost = s.nextInt();
            if(!possible(len, cost)){
                pw.println("Case #" + (i+1) + ": " + "IMPOSSIBLE");
                continue;
            }
            int[] input = new int[len];
            for(int j = 0; j < len; j++){
                input[j] = j + 1;
            }
            mutate(cost, input);
            StringBuilder sb = new StringBuilder();
            sb.append(input[0]);
            for(int x = 1; x < input.length; x++){
                sb.append(" " + input[x]);
            }
            pw.println("Case #" + (i+1) + ": " + sb.toString());
            
        }
        pw.flush();
    }
}
