import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Arrays;

public class chap1 {
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

    public static void q1(){
        FastReader s = new FastReader();
        System.out.printf("%7.3f", s.nextDouble());
    }

    public static void q2() {
        double i = Math.pow(10, new FastReader().nextInt()) ;
        System.out.println((double) Math.round(Math.PI * i) / i);
    }

    public static void q3() {
        String[] names = new String[]{ "", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
        Calendar that_day = new GregorianCalendar(2010, 7, 9); // 9 August 2010
        // note that month starts from 0, so we need to put 7 instead of 8
        System.out.println(names[that_day.get(Calendar.DAY_OF_WEEK)]); // "Mon"
        long today = new Date().getTime(); // today
        long diff = (today - that_day.getTime().getTime()) / (24*60*60*1000);
        System.out.println(diff + " day(s) ago");
    }

    public static void main(String[] args) {
        
    }
}
