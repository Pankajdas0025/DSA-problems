import java.util.*;

class minArrivalsToDiscard {

    public int minimumDiscards(int[] arrivals, int w, int m) {
        Map<Integer, Integer> freq = new HashMap<>();
        Deque<Integer> window = new ArrayDeque<>();
        int discards = 0;

        for (int item : arrivals) {
            // Remove oldest item if window exceeds size w
            if (window.size() == w) {
                int old = window.pollFirst();
                freq.put(old, freq.get(old) - 1);
                if (freq.get(old) == 0) freq.remove(old);
            }

            // Check if current item can be added
            int count = freq.getOrDefault(item, 0);
            if (count < m) {
                window.addLast(item);
                freq.put(item, count + 1);
            } else {
                discards++;
            }
        }

        return discards;
    }

    public static void main  (String[] args)
     {
        minArrivalsToDiscard sol = new minArrivalsToDiscard();

        int[] arrivals1 = {1, 2, 1, 3, 1};
        System.out.println("Discards: " + sol.minimumDiscards(arrivals1, 4, 2)); // Expected: 0

        int[] arrivals2 = {1, 2, 3, 3, 3, 4};
        System.out.println("Discards: " + sol.minimumDiscards(arrivals2, 3, 2)); // Expected: 1

        int[] arrivals3 = {10, 4, 3, 6, 4, 5, 6, 1, 4};
        System.out.println("Discards: " + sol.minimumDiscards(arrivals3, 7, 1)); // Expected: 2
    }
}
