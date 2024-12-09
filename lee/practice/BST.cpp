#include <iostream>
#define MAX_SIZE 100
using namespace std;

string tolower(const string& str) {
  string result;
  for (char c: str) {
    if (c >= 'A' && c <= 'Z') {
      result += c + 32;
    }
    else {
      result += c;
  }
  }
  return result;
}

struct TreeNode {
  string text;
  int freq;
  TreeNode* leftChild;
  TreeNode* rightChild;
  TreeNode(string txt): text(txt), freq(1), leftChild(nullptr), rightChild(nullptr) {};
};

class BinaryTree {
private:
  TreeNode* root;
  TreeNode* insertNode(TreeNode* node, const string& text) {
    if (node == nullptr) {
      return new TreeNode(text);
    }
    
    if (text < node->text) {
      node->leftChild = insertNode(node->leftChild, text);
    } else if (text > node->text) {
      node->rightChild = insertNode(node->rightChild, text);
    } else {
      node->freq++;
    }
    return node;
  }
public:
  BinaryTree(): root(nullptr) {}
  void insert(const string& text) {
    root = insertNode(root, text);
  }
};

int main() {
  string word = "";
  BinaryTree tree;
  int cnt = 0;
  char c;
  
  while (cin.get(c)) {
    if (c == '\n') {
      if (!word.empty()) {
        tree.insert(word);
        word = "";
      }
      tree.print();
      tree.clear();
      cnt = 0;
    }
    else if (isalpha(c)) {
      word += tolower(c);
    }
  }
}
