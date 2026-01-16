import java.util.Scanner;
     
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] strs = new String[n];
        int i = 0;
        
        while (sc.hasNext()){
            strs[i] = sc.next();
            i++;
        }
            
        for (String str : strs){
            if (str=="us"){
                System.out.println("i");
            }
            else if (str.endsWith("us")){
                int j = str.length()-2;
                String s = str.substring(0, j);
                System.out.println(s+"i");
            }else {
                System.out.println(str);
            }
        }
    }
}
