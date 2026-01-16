public class Solution3 {
    public static void main(String[] args) {
        String text = "a bb ccc dddd eeeee ffff";

        int[] freq = new int[256];

        char maxChar = ' ';
        int maxCount = 0;

        for (int i = 0; i < text.length(); i++) {
            char currentChar = text.charAt(i);

            if (currentChar == ' ') continue;

            freq[currentChar]++; 

            if (freq[currentChar] > maxCount) {
                maxCount = freq[currentChar];
                maxChar = currentChar;
            }
        }

        System.out.println(maxChar + " repeats " + maxCount + " times.");
    }
}
