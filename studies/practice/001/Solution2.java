import java.util.HashSet;

public class Solution2{
    public static void main(String[] args) {
        String text = "abbcccdddd"; 

        int maxCount = 0;
        Character maxChar = null;
        HashSet<Character> alreadyCounted = new HashSet<>();

        for (int i = 0; i < text.length(); i++) {
            char currentChar = text.charAt(i);
            if (currentChar == ' ' || alreadyCounted.contains(currentChar)) continue;
            int temp = 0;

            for (int j = 0; j < text.length(); j++) {
                char crntChr = text.charAt(j);
                if (currentChar==crntChr) temp++;
            }
            if (temp>maxCount) {
                maxCount = temp;
                maxChar = text.charAt(i);
            }
            alreadyCounted.add(currentChar);
        }

        System.out.println(maxChar + " repeats " + maxCount + " times.");
    }
}

