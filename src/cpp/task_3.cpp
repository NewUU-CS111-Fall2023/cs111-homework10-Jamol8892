#include <iostream>
#include <string>
#include <algorithm>

class Problem3 {
public:
    // Function to compare two unary numbers represented as strings
    static std::string compareNumbers(const std::string& tape) {
        // Turing machine states (for explanation purposes)
        // State 1: Start
        // State 2: Scan for the first zero
        // State 3: Scan for the second zero
        // State 4: Compare the lengths of 1s
        // State 5: Output result

        int countFirst = 0;  // Count of 1s for the first number
        int countSecond = 0; // Count of 1s for the second number
        int currentState = 1; // Start state

        for (char symbol : tape) {
            switch (currentState) {
                case 1: // Start state, counting 1s for the first number
                    if (symbol == '1') {
                        countFirst++;
                    } else {
                        currentState = 2; // Move to state 2 when encountering zero
                    }
                    break;
                case 2: // State 2, counting 1s for the second number
                    if (symbol == '1') {
                        countSecond++;
                    } else {
                        currentState = 3; // Move to state 3 when encountering the second zero
                    }
                    break;
                case 3: // State 3, comparison is done, break the loop
                    break;
            }
        }

        // State 4: Compare the lengths of 1s
        if (countFirst >= countSecond) {
            return "1"; // First number is greater or equal
        } else {
            return "11"; // Second number is greater
        }
        // State 5 would be the output state, which is not explicitly needed in code
    }
};
