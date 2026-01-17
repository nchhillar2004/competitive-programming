import java.util.*;

// A. Way Too Long Words
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] strs = new String[n];
        int i = 0;

        while (sc.hasNext()){
            strs[i] = sc.next();
            i++;
        }

        for (String str : strs){
            int len = str.length();
            if (len > 10){
                String result = String.valueOf(str.charAt(0)) + (len-2) + String.valueOf(str.charAt(len-1));
                System.out.println(result);
            }else{
                System.out.println(str);
            }
        }
    }
}
