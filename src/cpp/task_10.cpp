#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Problem10 {
public:
    static std::string generate3SATFormula(int numVariables, int numClauses) {
        std::string formula;
        std::srand(std::time(nullptr)); // Seed the random number generator

        for (int i = 0; i < numClauses; ++i) {
            std::string clause = "(";
            for (int j = 0; j < 3; ++j) {
                int var = std::rand() % numVariables + 1; // Random variable from 1 to numVariables
                bool negation = std::rand() % 2; // Randomly decide if we should negate the variable

                clause += (negation ? "~" : "") + std::string(1, 'A' + var - 1); // Convert to character name, assuming 1 maps to 'A', 2 to 'B', etc.
                if (j < 2) clause += " | "; // OR operator between literals
            }
            clause += ")";
            if (i < numClauses - 1) clause += " & "; // AND operator between clauses

            formula += clause;
        }

        return formula;
    }
};