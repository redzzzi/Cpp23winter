// Assignment 4 : Linked List
// I p v - inserting a value
// D v - deleting a node
// R - reverse linked list
// F v - find a value
// S ps pe - sub-linked list
// C v - count the frequency of given linked list
// T - sort the linked list (ascending order)

#include <iostream>
using namespace std;

struct Node {
  int value;
  Node* next;
  Node(int v) : value(v), next(nullptr) {}
};

class LinkedList {
private:
  Node* head;

  void printError(int code) {
      cout << "err_code=" << code << endl;
  }

public:
  LinkedList() : head(nullptr) {}

  void insert(int pos, int value) {
    Node* newNode = new Node(value);
    if (pos == 0) {
      newNode->next = head;
      head = newNode;
    } else {
      Node* current = head;
      int count = 0;
      while (current != nullptr && count < pos - 1) {
        current = current->next;
        count++;
      }
      if (current == nullptr && pos != 99) {
        delete newNode;
        printError(100);
        return;
      }
      newNode->next = current ? current->next : nullptr;
      if (current) current->next = newNode;
    }
    printList();
  }

  void deleteValue(int value) {
    if (!head) {
      printError(101);
      return;
    }
    if (head->value == value) {
      Node* temp = head;
      head = head->next;
      delete temp;
      printList();
      return;
    }
    Node* current = head;
    while (current->next && current->next->value != value) {
      current = current->next;
    }
    if (!current->next) {
      printError(101);
      return;
    }
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    printList();
  }

  void reverse() {
    if (!head) {
      printError(102);
      return;
    }
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
    printList();
  }

  void findValue(int value) {
    Node* current = head;
    int index = 0;
    while (current) {
      if (current->value == value) {
        cout << index << endl;
        return;
      }
      current = current->next;
      index++;
    }
    printError(103);
  }

  void subList(int ps, int pe) {
    int index = 0;
    Node* current = head;
    while (current && index < ps) {
      current = current->next;
      index++;
    }
    if (!current || index > pe) {
      printError(104);
      return;
    }
    while (current && index <= pe) {
      cout << current->value << "->";
      current = current->next;
      index++;
    }
    cout << "NULL" << endl;
  }

  void countFrequency(int value) {
    int count = 0;
    Node* current = head;
    while (current) {
      if (current->value == value) count++;
      current = current->next;
    }
    cout << count << endl;
  }

  void sortList() {
    if (!head) {
      printError(105);
      return;
    }
    for (Node* i = head; i != nullptr; i = i->next) {
      for (Node* j = i->next; j != nullptr; j = j->next) {
        if (i->value > j->value) {
          swap(i->value, j->value);
        }
      }
    }
    printList();
  }

  void printList() {
    if (!head) {
      cout << "NULL" << endl;
      return;
    }
    Node* current = head;
    while (current) {
      cout << current->value << "->";
      current = current->next;
    }
    cout << "NULL" << endl;
  }
};

int main() {
  LinkedList list;
  string cmd;
  while (cin >> cmd) {
    if (cin.eof()) break; 
    if (cmd == "I") {
      int pos, value;
      cin >> pos >> value;
      list.insert(pos, value);
    } else if (cmd == "D") {
      int value;
      cin >> value;
      list.deleteValue(value);
    } else if (cmd == "R") {
      list.reverse();
    } else if (cmd == "F") {
      int value;
      cin >> value;
      list.findValue(value);
    } else if (cmd == "S") {
      int ps, pe;
      cin >> ps >> pe;
      list.subList(ps, pe);
    } else if (cmd == "C") {
      int value;
      cin >> value;
      list.countFrequency(value);
    } else if (cmd == "T") {
      list.sortList();
    }
  }
  return 0;
}

