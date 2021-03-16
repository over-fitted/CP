class StringStuff {
    public static void main(String[] args) {
        // strings
        String str1 = "str1";
        String str2 = "str2";

        // use 1$ in front of wildcard to indicate which arg to use
        String.format("%1$s, %1$s and %2$s", str1, str2);
        // pad with space
        System.out.println(String.format("%10s", str1)); 
        System.out.println(String.format("%-10s", str1));

        // numbers
        int i = 55;
        double f = 55.2345123;
        // pad with 0
        System.out.println(String.format("%010d", i));
        System.out.println(String.format("%010f", f));
        // change d.p.
        System.out.println(String.format("%.4f", f));
        // cannot do to integers
        // System.out.println(String.format("%.4f", i));
    }
}