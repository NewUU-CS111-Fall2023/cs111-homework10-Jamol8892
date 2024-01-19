#include <iostream>
#include <vector>

class Problem4 {
public:
    static std::string multiplyUnary(const std::string& input) {
        std::string tape = input;
        std::string output;
        int state = 1; // Start state

        // Step 1: Convert all 'B's to '0's and 'X's to '1's for easier processing
        for (char& c : tape) {
            if (c == 'B') c = '0';
            if (c == 'X') c = '1';
        }

        // Step 2: Find the first 'C' which separates the two numbers
        size_t separator = tape.find('C');
        if (separator == std::string::npos) {
            // No 'C' found, invalid input
            return "Invalid input";
        }

        // Step 3: Count the number of '1's before and after 'C'
        int count1 = std::count(tape.begin(), tape.begin() + separator, '1');
        int count2 = std::count(tape.begin() + separator + 1, tape.end(), '1');

        // Step 4: Multiply the two counts
        int product = count1 * count2;

        // Step 5: Convert the product to unary format
        output.assign(product, '1');

        // Step 6: Return the result in unary format
        return output;
    }
};
