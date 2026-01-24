// suitable for Linked Lists instead of arrays - no extra array needed

//compare, if smaller, add to merged list, else add from other list

// 3 pointers - one for each list and one for merged list

#include <iostream>


using namespace std;

struct Node {
    int data;
    Node *next;
};

Node* mergeLists(Node* first, Node* second) {
    Node* third = nullptr;
    Node* last = nullptr;

    if (first->data < second->data) { // Initialize third and last pointers
        third = last = first;
        first = first->next;
        last->next = nullptr;
    } else { // Initialize third and last pointers
        third = last = second;
        second = second->next;
        last->next = nullptr;
    }

    while (first != nullptr && second != nullptr) { // Traverse both lists
        if (first->data < second->data) { // Compare data
            last->next = first;
            last = first;
            first = first->next;
            last->next = nullptr;
        } else {   // Compare data
            last->next = second;
            last = second;
            second = second->next;
            last->next = nullptr;
        }
    }

    if (first != nullptr) { // Append remaining nodes
        last->next = first;
    } else { // Append remaining nodes
        last->next = second;
    }

    return third; // Return head of merged list
}

void display(Node* p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    // Creating first sorted linked list: 10 -> 30 -> 50
    Node* first = new Node{10, nullptr};
    first->next = new Node{30, nullptr};
    first->next->next = new Node{50, nullptr};

    // Creating second sorted linked list: 20 -> 40 -> 60
    Node* second = new Node{20, nullptr};
    second->next = new Node{40, nullptr};
    second->next->next = new Node{60, nullptr};

    cout << "First List: ";
    display(first);
    cout << "Second List: ";
    display(second);

    Node* mergedList = mergeLists(first, second);

    cout << "Merged List: ";
    display(mergedList);

    return 0;
}

// time complexity: O(n + m) where n and m are lengths of the two lists
// space complexity: O(1) - no extra space used

