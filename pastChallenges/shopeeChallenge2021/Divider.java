package shopeeChallenge2021;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Divider {

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

    /**
     * Checks if it is possible to assign the specified jobs to the specified number of processors such that no
     * processor's load is higher than the specified query load.
     *
     * @param jobSize the sizes of the jobs to be performed
     * @param queryLoad the maximum load allowed for any processor
     * @param p the number of processors
     * @return true iff it is possible to assign the jobs to p processors so that no processor has more than queryLoad load.
     */
    public static boolean feasibleLoad(int[] jobSize, long queryLoad, int p) {
        // TODO: Implement this
        int processorsAvailable = p;
        long loadBuffer = 0; // stores load of current processor
        int counter = 0; // stores number of programmers in load
        for(int x: jobSize){
            // no more processors underload, fail
            if(processorsAvailable <= 0){
                return false;
            } else {
                if ((loadBuffer + x) *  (counter + 1)> queryLoad){
                    // current processor cannot take on next task, change processor
                    if(x > queryLoad){
                        return false;
                    } else{
                        counter = 1;
                        loadBuffer = x;
                        processorsAvailable -= 1;
                    }

                } else {
                    // assign task to current processor
                    loadBuffer += x;
                    counter++;
                }
            }
        }
        // p==0 not hit, processors sufficient
        if(processorsAvailable <= 0){
            return false;
        } else{
            return true;
        }
    }

    /**
     * Returns the minimum achievable load given the specified jobs and number of processors.
     *
     * @param jobSize the sizes of the jobs to be performed
     * @param p the number of processors
     * @return the maximum load for a job assignment that minimizes the maximum load
     */
    public static long findLoad(int[] jobSize, int p) {
        // TODO: Implement this
        long minAnswer = 0;
        for(int x: jobSize){
            if(x > minAnswer){
                minAnswer = x;
            }
        }
        long maxAnswer = minAnswer * jobSize.length * jobSize.length * jobSize.length;
        long meanAnswer = 0;
        while(minAnswer < maxAnswer){
            meanAnswer = (maxAnswer+minAnswer)/2;
            if(feasibleLoad(jobSize, meanAnswer, p)){
                maxAnswer = meanAnswer;
            } else {
                minAnswer = meanAnswer + 1;
            }
        }
        return minAnswer;
    }

    public static long totalLoad(int[] jobSize, long queryLoad, int p) {
        // TODO: Implement this
        long loadBuffer = 0;
        int counter = 0;
        long result = 0;
        for(int x: jobSize){
            if ((loadBuffer + x) *  (counter + 1)> queryLoad) {
                // current processor cannot take on next task, change processor
                result += loadBuffer * counter;
                counter = 1;
                loadBuffer = x;
            } else {
                // assign task to current processor
                loadBuffer += x;
                counter++;
            }
        }
        result += loadBuffer * counter;
        return result;
    }

    /**
     * Some simple tests for the findLoad routine.
     */
    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int[] engineers = new int[fr.nextInt()];
        int groups = fr.nextInt();
        for(int i = 0; i<engineers.length;i++){
            engineers[i] = fr.nextInt();
        }
        System.out.println(totalLoad(engineers, findLoad(engineers, groups), groups));
    }
}
