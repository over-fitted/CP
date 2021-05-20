/**
 * doesnt work lmao
 * memo: arr[col max seg], arr[row max seg], iterate over
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class LShape {
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

    public static int[][] transposeMatrix(int[][] matrix){
        int m = matrix.length;
        int n = matrix[0].length;

        int[][] transposedMatrix = new int[n][m];

        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                transposedMatrix[x][y] = matrix[y][x];
            }
        }

        return transposedMatrix;
    }

    static int[][] colMax, rowMax;
    static int col,row;
    public static int[][] initMemo(int[][] input,int x, int y){
        int[][] output = new int[x][y];
        for(int i=0; i<x;i++){
            int startOfSeg = -1;
            int segLen = 0;
            for(int j=0;j<y;j++){
                if(input[i][j] == 1){
                    // populate memo with segment details
                    if(startOfSeg==-1){
                        startOfSeg=j;
                    }
                    segLen++;
                } else{
                    // 0, end segment if present
                    if(startOfSeg!=-1){
                        for(int k = startOfSeg; k < j; k++){
                            output[i][k] = segLen;
                        }
                        segLen=0;
                        startOfSeg=-1;
                    }
                    output[i][j] = 0;
                }
            }
        }
        return output;
    }
    public static int findL(){
        for(int[] x: rowMax){
            System.out.println(Arrays.toString(x));
        }
        int res=0;
        for(int i = 0; i< col;i++){
            for(int j=0; j< row; j++){
                if(colMax[j][i]>=4){
                    if(rowMax[i][j] >= 2){
                        res+=iterL(rowMax[i][j], colMax[j][i]);
                    }
                }
                if(rowMax[i][j]>=4){
                    if(colMax[j][i] >= 2){
                        res+=iterL(rowMax[i][j], colMax[j][i]);
                    }
                }
            }
        }
        return res;
    }

    public static int iterL(int x, int y){
        System.out.println("iterL");
        int greater,lesser,buffer=2;
        if(x <= y){
            lesser = x;
            greater = y;
        } else {
            lesser = y;
            greater = x;
        }
        while(buffer <= greater/2){
            if(buffer > lesser){
                break;
            }
            buffer++;
        }
        return buffer - 1;
    }

    public static void main(String[] args) {
        FastReader fr = new FastReader();
        int testCases = fr.nextInt();
        for(int i = 0; i<testCases;i++){
            row=fr.nextInt();
            col= fr.nextInt();
            int[][] input = new int[col][row];
            for(int j=0;j<col;j++){
                for(int k=0;k<row;k++){
                    input[j][k]= fr.nextInt();
                }
            }
            rowMax = initMemo(input,col,row);
            colMax = initMemo(transposeMatrix(input), row, col);
            System.out.println(findL());
        }
    }
}
