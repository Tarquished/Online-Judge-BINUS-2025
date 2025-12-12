#include <stdio.h>

int main() {
    int T; // Number of test cases
    
    // Read the number of test cases
    if (scanf("%d", &T) != 1) return 1;

    // Loop through each test case
    for (int i = 1; i <= T; i++) {
        long long int A, B; // A: initial full bottles, B: exchange rate
        long long int total_drunk;
        long long int empty_bottles;
        
        // Read A and B
        if (scanf("%lld %lld", &A, &B) != 2) break;
        
        total_drunk = A;
        // All starting bottles immediately become empty
        empty_bottles = A;
        
        // 2. Simulation Loop
        // Continue exchanging as long as there are enough empty bottles (>= B)
        while (empty_bottles >= B) {
            
            // a. Calculate New Full Bottles obtained from the exchange
            long long int new_bottles = empty_bottles / B;
            
            // b. Calculate Empty Bottles left over (the remainder)
            long long int leftovers = empty_bottles % B;
            
            // c. Update Total Drunk: Add the new bottles Jojo can drink
            total_drunk += new_bottles;
            
            // d. Update Empty Bottles: The new total is the sum of:
            //    1. The leftover empties (that weren't exchanged)
            //    2. The newly emptied bottles (from drinking the new bottles)
            empty_bottles = leftovers + new_bottles;
        }
        
        // 3. Output
        // Format: "Case #X: Y" [cite: 13, 60]
        printf("Case #%d: %lld\n", i, total_drunk);
    }

    return 0;
}
