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
    printLinkedList2(resultProb2);

    // Clean up memory
    deleteLinkedList2(resultProb2);
    deleteLinkedList2(headProb2);



    // Sample input: "0111c11110" (c is used as a separator, equivalent to 0 in the problem description)
    std::string inputProb3 = "0111c11110";
    // Replace 'c' with '0' to match the problem's unary format
    std::string formattedInput = inputProb3;
    std::replace(formattedInput.begin(), formattedInput.end(), 'c', '0');

    // Solve the problem using the Problem3 class
    std::string resultProb3 = Problem3::compareNumbers(formattedInput);

    // Print the result
    std::cout << "Result: " << resultProb3 << std::endl;


    // Sample input: "0111C11110" (3 * 4 = 12)
    std::string inputProb4 = "0111C11110";

    // Solve the problem using the Problem4 class
    std::string resultProb4 = Problem4::multiplyUnary(inputProb4);

    // Print the result
    std::cout << "Result: " << resultProb4 << std::endl;



    // Sample input
    std::vector<int> nums1 = {-5, -17, 7, 4, 3, -2, 4};
    std::vector<int> nums2 = {-6, 7, 4, -13, -2, 5, 13};
    std::vector<int> nums3 = {-1, 2, 13, -4, 5, 4, 2, -13, 3, 0};

    // Check for triplets
    bool result1 = Problem5::hasTripletSumZero(nums1);
    bool result2 = Problem5::hasTripletSumZero(nums2);
    bool result3 = Problem5::hasTripletSumZero(nums3);

    // Print the results
    std::cout << "Result 1: " << (result1 ? "True" : "False") << std::endl;
    std::cout << "Result 2: " << (result2 ? "True" : "False") << std::endl;
    std::cout << "Result 3: " << (result3 ? "True" : "False") << std::endl;



    std::vector<std::vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int n = 4, k = 2;

    // Solve the problem using the Problem6 class
    int result = Problem6::networkDelayTime(times, n, k);

    // Print the result
    std::cout << "Minimum time for all nodes to receive the signal: " << result << std::endl;



    std::vector<int> answers1 = {1, 1, 2};
    std::vector<int> answers2 = {3, 3, 3, 3, 3};

    // Solve the problem using the Problem7 class
    int resultProb71 = Problem7::minNumberOfRabbits(answers1);
    int resultProb72 = Problem7::minNumberOfRabbits(answers2);

    // Print the results
    std::cout << "Minimum number of rabbits in sample 1: " << resultProb71 << std::endl;
    std::cout << "Minimum number of rabbits in sample 2: " << resultProb72 << std::endl;


    // Sample input
    std::vector<int> numsProb8_1 = {1, 5, 11, 5};
    std::vector<int> numsProb8_2 = {1, 2, 3, 5};
    std::vector<int> numsProb8_3 = {12, 2, 31, 0, 5};

    // Solve the problem using the Problem8 class
    bool resultProb8_1 = Problem8::canPartition(numsProb8_1);
    bool resultProb8_2 = Problem8::canPartition(numsProb8_2);
    bool resultProb8_3 = Problem8::canPartition(numsProb8_3);

    // Print the results
    std::cout << "Can partition numsProb8_1: " << (resultProb8_1 ? "True" : "False") << std::endl;
    std::cout << "Can partition numsProb8_2: " << (resultProb8_2 ? "True" : "False") << std::endl;
    std::cout << "Can partition numsProb8_3: " << (resultProb8_3 ? "True" : "False") << std::endl;



    // Sample input: Formula: (A | ~B) & (~A | B | C), Assignment: A=T, B=F, C=T
    std::vector<std::vector<int>> clauses = {{1, -2}, {-1, 2, 3}}; // 1 represents A, 2 represents B, 3 represents C, negative for negation
    std::unordered_map<char, bool> assignment = {{'A', true}, {'B', false}, {'C', true}};

    // Solve the problem using the Problem9 class
    bool resultProb9 = Problem9::isSatisfied(clauses, assignment);

    // Print the result
    std::cout << "The formula is " << (resultProb9 ? "satisfied" : "not satisfied") << std::endl;


    // Sample input
    int numVariables = 3;
    int numClauses = 2;

    // Solve the problem using the Problem10 class
    std::string result10 = Problem10::generate3SATFormula(numVariables, numClauses);

    // Print the result
    std::cout << "Random 3-SAT formula: " << result10 << std::endl;


    // Sample input
    std::vector<std::vector<int>> cnf_formula1 = {{1, 2, -3}, {-1, -2, 3}, {2, -3}};
    std::vector<std::vector<int>> cnf_formula2 = {{1, 2}, {-1, 3}, {-2, -3}};

    // Solve the problem using the Problem11 class
    bool resultProb11_1 = Problem11::isSatisfiable(cnf_formula1);
    bool resultProb11_2 = Problem11::isSatisfiable(cnf_formula2);

    // Print the results
    std::cout << "CNF formula 1 is " << (resultProb11_1 ? "satisfiable" : "not satisfiable") << std::endl;
    std::cout << "CNF formula 2 is " << (resultProb11_2 ? "satisfiable" : "not satisfiable") << std::endl;

}
