/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"
#include "task_7.cpp"
#include "task_8.cpp"
#include "task_9.cpp"
#include "task_10.cpp"
#include "task_11.cpp"

using namespace std;

int main() {
    std::vector<int> numsProb1 = {0,3,1,0,4,5,2,0};
    ListNode* headProb1 = createLinkedList(numsProb1);

    // Solve the problem using the Problem1 class
    ListNode* resultProb1 = Problem1::mergeNodes(headProb1);

    // Print the result
    printLinkedList(resultProb1);

    // Clean up memory
    deleteLinkedList(resultProb1);
    deleteLinkedList(headProb1);

    // Sample input: [0,3,1,0,4,5,2,0]
    std::vector<int> numsProb2 = {0,3,1,0,4,5,2,0};
    ListNode* headProb2 = createLinkedList(numsProb2);

    // Solve the problem using the Problem2 class
    ListNode* resultProb2 = Problem2::mergeNodes(headProb2);

    // Print the result
    printLinkedList(resultProb2);

    // Clean up memory
    deleteLinkedList(resultProb2);
    deleteLinkedList(headProb2);

    return 0;
}
