import java.util.*;

class datum {
    public static String solve(int d, int m){
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("d/M/yyyy");
        LocalDate date = LocalDate.parse(d + "/"+m+"/2009", formatter); // LocalDate = 2010-02-23
        DayOfWeek dow = date.getDayOfWeek();  // Extracts a `DayOfWeek` enum object.
        String output = dow.getDisplayName(TextStyle.Long, Locale.US); // String = Tue
        return output;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d,m;
        d = sc.nextInt();m=sc.nextInt();

        System.out.println(solve(d,m));
    }
}