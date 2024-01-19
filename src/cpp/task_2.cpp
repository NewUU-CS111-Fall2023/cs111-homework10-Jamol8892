#include <iostream>
#include <vector>

class Problem2 {
public:
    static ListNode* mergeNodes(ListNode* head) {
        ListNode dummyProb2(0), *tailProb2 = &dummyProb2;
        int sumProb2 = 0;
        for (ListNode* nodeProb2 = head; nodeProb2 != nullptr; nodeProb2 = nodeProb2->next) {
            if (nodeProb2->val == 0) {
                if (sumProb2 > 0) {
                    tailProb2->next = new ListNode(sumProb2);
                    tailProb2 = tailProb2->next;
                    sumProb2 = 0;
                }
            } else {
                sumProb2 += nodeProb2->val;
            }
        }
        return dummyProb2.next;
    }
};

// Function to create a linked list from a vector of integers.
ListNode* createLinkedList2(const std::vector<int>& nums) {
    ListNode dummyProb2(0);
    ListNode* tailProb2 = &dummyProb2;
    for (int numProb2 : nums) {
        tailProb2->next = new ListNode(numProb2);
        tailProb2 = tailProb2->next;
    }
    return dummyProb2.next;
}

// Function to print the linked list.
void printLinkedList2(ListNode* head) {
    for (ListNode* nodeProb2 = head; nodeProb2 != nullptr; nodeProb2 = nodeProb2->next) {
        std::cout << nodeProb2->val << " ";
    }
    std::cout << std::endl;
}

// Function to delete the linked list and free memory.
void deleteLinkedList2(ListNode* head) {
    while (head != nullptr) {
        ListNode* tempProb2 = head;
        head = head->next;
        delete tempProb2;
    }
}
