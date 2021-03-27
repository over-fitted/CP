package javaTools.src;

public class BSearch {
    public static int bSearch(int[] prefixSumMax, int target) {
        // TODO: Implement this
        int minAnswer = 0;
        int maxAnswer = prefixSumMax.length;
        int meanAnswer = 0;
        while(minAnswer < maxAnswer){
            meanAnswer = (maxAnswer+minAnswer)/2;
            if(prefixSumMax[meanAnswer] == target){
                maxAnswer = meanAnswer;
            } else {
                minAnswer = meanAnswer + 1;
            }
        }
        return minAnswer;
    }
}
