import java.util.HashMap;
import java.util.Map;

public class Solution{
    public static void main(String[] args) {
        String text = "abbcccdddd"; 

        HashMap<Character, Integer> map = new HashMap<>();

        for (int i = 0; i < text.length(); i++) {
            char currentChar = text.charAt(i);
            if (currentChar == ' ') continue;
            else if (map.containsKey(currentChar))
            map.put(currentChar, map.get(currentChar)+1);
            else map.put(currentChar, 1);
        }

        Map.Entry<Character, Integer> maxEntry = null;

        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (maxEntry == null || entry.getValue() > maxEntry.getValue()) maxEntry = entry;
        }

        System.out.println(maxEntry.getKey() + " repeats " + maxEntry.getValue() + " times.");
    }
}
