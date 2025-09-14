
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.
// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:
// Input: n = 3
// Output: false

public class PowerOfTwo
{
    public boolean isPowerOfTwo(int num) {
        if (num <= 0) {
            return false;
        }

        while (num % 2 == 0) {
            num /= 2;
        }

        return num == 1;
    }

    //  public static void main(String[] args)
    // {
    //     PowerOfTwo obj = new PowerOfTwo();
    //     int input = 81; // You can change this to test other values
    //     boolean result = obj.isPowerOfTwo(input);

    //     if (result) {
    //         System.out.println("true");
    //     } else {
    //         System.out.println("false");
    //     }
    // }

}
