#include <iostream>
#include <vector>
#include <cmath>

class Problem11 {
public:
    static bool isSatisfiable(const std::vector<std::vector<int>>& cnf_formula) {
        int numVariables = 0;
        for (const auto& clause : cnf_formula) {
            for (int var : clause) {
                numVariables = std::max(numVariables, std::abs(var));
            }
        }

        // Iterate over all possible combinations of truth values
        int totalCombinations = std::pow(2, numVariables);
        for (int i = 0; i < totalCombinations; ++i) {
            if (satisfiesAllClauses(cnf_formula, i, numVariables)) {
                return true;
            }
        }
        return false;
    }

private:
    static bool satisfiesAllClauses(const std::vector<std::vector<int>>& cnf_formula, int combination, int numVariables) {
        for (const auto& clause : cnf_formula) {
            bool clauseSatisfied = false;
            for (int var : clause) {
                bool varValue = combination & (1 << (std::abs(var) - 1));
                if (var < 0) varValue = !varValue;
                clauseSatisfied |= varValue;
                if (clauseSatisfied) break; // Short-circuit evaluation for OR
            }
            if (!clauseSatisfied) return false; // If one clause is false, the whole formula is false
        }
        return true; // All clauses are true
    }
};