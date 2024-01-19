#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class Problem9 {
public:
    static bool isSatisfied(const std::vector<std::vector<int>>& clauses, const std::unordered_map<char, bool>& assignment) {
        for (const auto& clause : clauses) {
            bool clauseResult = false;
            for (int var : clause) {
                char varName = std::abs(var) + 'A' - 1; // Convert to character name, assuming 1 maps to 'A', 2 to 'B', etc.
                bool varValue = var > 0 ? assignment.at(varName) : !assignment.at(varName);
                clauseResult |= varValue;
                if (clauseResult) break; // Short-circuit evaluation for OR
            }
            if (!clauseResult) return false; // If one clause is false, the whole formula is false
        }
        return true; // All clauses are true
    }
};