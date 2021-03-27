package shopeeChallenge2021;

import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class ShopeeTaman {
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

    static int[] reverse(int a[]) {
        int[] b = new int[a.length];
        int j = a.length;
        for (int i = 0; i < a.length; i++) {
            b[j - 1] = a[i];
            j = j - 1;
        }
        return b;
    }

    static int[][] memo;
    static int[] memoDays;

    public static int[] memoReader(int day, boolean left){
        if(memoDays[day] == 0){
            return null;
        }
        if(memo[day][left ? 0 : 2] == -1){
            return null;
        }
        return memo[day];
    }

    public static int maxHealth(int[][] fruits, int day, int result, boolean left){
        if(day == fruits.length){
            return result;
        }
        if(memoReader(day, left) == null){
            int[] todayFruits = fruits[day];
            int[] prefixSum = new int[todayFruits.length];
            int[] prefixSumMax = new int[todayFruits.length];
            if(!left) {
                todayFruits = reverse(todayFruits);
            }
            prefixSum[0] = todayFruits[0];
            prefixSumMax[0] = todayFruits[0];
            for(int i = 1; i < todayFruits.length; i++){
                prefixSum[i] = prefixSum[i - 1] + todayFruits[i];
                prefixSumMax[i] = prefixSum[i] > prefixSumMax[i-1] ? prefixSum[i] : prefixSumMax[i-1];
            }
            int sameSide = prefixSumMax[prefixSumMax.length - 1];
            sameSide = sameSide > 0 ? sameSide : 0;
            int diffSide = prefixSum[prefixSum.length-1];
            if(left){
                memo[day][0] = sameSide;
                memo[day][2] = -1;
            }
            else{
                memo[day][2] = sameSide;
                memo[day][0] = -1;
            }

            memo[day][1] = diffSide;
            memoDays[day] = 1;
        }
        int[] dayLog = memoReader(day, left);
        int diffSide = dayLog[1];
        int sameSide = dayLog[left ? 0 : 2];

        return Math.max(maxHealth(fruits, day+1, result+sameSide, left),
                        maxHealth(fruits, day+1, result+diffSide, !left));
    }



    public static void main(String[] args) {
        FastReader fr = new FastReader();
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        int TestCases = fr.nextInt();
        for(int i = 0; i < TestCases; i++){
            int days = fr.nextInt();
            int parkSize = fr.nextInt();
            memo = new int[days][3];
            memoDays = new int[days];
            int[][] fruits = new int[days][parkSize];
            for(int j = 0; j < days; j++){
                for(int k = 0; k < parkSize; k++){
                    fruits[j][k] = fr.nextInt();
                }
            }
            pw.print(maxHealth(fruits, 0, 0, true));
        }
    }
}
