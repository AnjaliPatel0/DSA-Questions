import java.util.Scanner;
public class Checkif_twoStrings_areAnagrams {
    public static boolean isAnagram(String a, String b) {
        if (a.length() != b.length()) {
            return false;
        }
        int[] freq = new int[26];
        int len = a.length();  // Define len
        for (int i = 0; i < len; i++) {
            char charA = a.charAt(i);
            char charB = b.charAt(i);
            freq[charA - 'a']++;
            freq[charB - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first string:");
        String a = sc.nextLine().toLowerCase();  // convert to lowercase
        System.out.println("Enter second string:");
        String b = sc.nextLine().toLowerCase();  // convert to lowercase

        if (isAnagram(a, b)) {
            System.out.println("The strings are anagrams.");
        } else {
            System.out.println("The strings are not anagrams.");
        }
    }
}

