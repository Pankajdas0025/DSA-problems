// 58. Length of Last Word
// Easy
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.
// Example 1:
// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:
// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.


class LengthOfLastword {
    public int lengthOfLastWord(String s) {
        String[] Ars = s.trim().split(" ");
        int l = Ars.length;
        // Last word length
        int Wordlength = Ars[l - 1].length();
        // System.out.println(Wordlength);
        return Wordlength;
    }

    // public static void main(String[] args) {

    //     LengthOfLastword obj = new LengthOfLastword();
    //     obj.lengthOfLastWord("Teerthanker Mahaveer Universirt Moradabad TMU");
    // }
}
