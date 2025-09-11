class Palindrome {
    public boolean isPalindrome(int x) {
        int r;
        int reverse = 0;
        int original = x;

        while (x > 0) {
            r = x % 10;
            reverse = reverse * 10 + r;
            x = x / 10;
        }

        return reverse == original;
    }

    public static void main(String[] args) {
        Palindrome obj = new Palindrome();
        boolean isPalindrome = obj.isPalindrome(171); // call the method and store result

        if (isPalindrome) {
            System.out.println("The Number is Palindrome");
        } else {
            System.out.println("The Number is Not a Palindrome Number");
        }
    }
}
