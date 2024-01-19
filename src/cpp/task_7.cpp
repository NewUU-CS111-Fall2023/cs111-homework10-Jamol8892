#include <iostream>
#include <vector>
#include <unordered_map>

class Problem7 {
public:
    static int minNumberOfRabbits(std::vector<int>& answers) {
        std::unordered_map<int, int> count;
        int rabbits = 0;

        for (int x : answers) {
            if (count.find(x) == count.end() || count[x] == 0) {
                // If we haven't seen this answer before, or we've used up all groups of this size,
                // then this rabbit starts a new group.
                rabbits += x + 1; // We need x more rabbits of this color, plus the one answering.
                count[x] = x; // There are x other rabbits of this color.
            } else {
                // This rabbit is part of an existing group.
                count[x]--;
            }
        }

        return rabbits;
    }
};