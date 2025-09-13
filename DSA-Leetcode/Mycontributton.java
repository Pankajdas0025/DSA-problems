public class Mycontributton {
    public int countWordsEndingWithVowel(String s) {
        String[] words = s.split(" ");
        int count = 0;

        for (String word : words) {
            if (word.length() > 0) {
                char lastChar = word.charAt(word.length() - 1);
                if (isVowel(lastChar)) {
                    count++;
                }
            }
        }


        // System.out.println(count);
        return count;
    }

    private boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }


    public static void main  (String [] args)

    {
        Mycontributton obj  = new Mycontributton();
        obj.countWordsEndingWithVowel("Hello Manya what is your name");
    }


}
