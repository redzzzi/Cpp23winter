#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

class myPair {
public:
    string      ID;
    float       score;
    myPair(string a,float b):ID(a), score(b){}
    myPair() {}
};

// Node structure
class Node {
public:
    myPair data;
    Node* left;
    Node* right;

    Node() {}

    Node(myPair value) {
        data=value;
        left = nullptr;
        right = nullptr;
    }
    Node(string a, float b) {
        data.ID=a; data.score=b;
        left = nullptr;
        right = nullptr;
    }
};

class BST {
public:
    Node *root;
    BST():root(nullptr) {}
// Insert function
    void insert(myPair value) {
        if(root==nullptr) {
            root=new Node(value);
            return;
        }
        if (value.ID < root->data.ID) root->left = insert(root->left, value);
        else if (value.ID > root->data.ID) root->right = insert(root->right, value);

        return;
    }

    Node* insert(Node* n, myPair value) {
        if (n == nullptr) return new Node(value);
        if (value.ID < n->data.ID) n->left = insert(n->left, value);
        else if (value.ID > n->data.ID) n->right = insert(n->right, value);
        return n;
    }

// Inorder Traversal
    void inorderTraversal() {
        inorderTraversal(root);
    }

    void inorderTraversal(Node* n) {
        if (n != nullptr) {
            inorderTraversal(n->left);
            cout << n->data.ID << " "<<endl;
            inorderTraversal(n->right);
        }
    }

// Search function
    myPair* search(string key) {
        return search(root,key);
    }

    myPair* search(Node *n, string key) {
        if (n == nullptr) return nullptr;
        if (n->data.ID == key) return &n->data;
        else if (key < n->data.ID) return search(n->left, key);
        else return search(n->right, key);
    }
};

// Main function
int main() {

    clock_t before = clock();

    BST*  tree=new BST();

    string  filename="students-1m.prn";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        exit(1);
    }

    string  line;
    string  ID;
    float   score;

//    getline(file, line); // Read 1st line
//    stringstream ss(line);    // Use stringstream to split the line

//    ss>>ID>>score;
    tree->insert(myPair(ID,score));

    while (getline(file, line)) { // Read each line
        stringstream ss(line);    // Use stringstream to split the line
        ss>>ID >> score;
//        cout<<"ID: "<< ID<<", score: "<<score<<endl;
        tree->insert(myPair(ID,score));
    }

//    cout << "Inorder Traversal of BST: ";
//    tree->inorderTraversal();
//    cout << endl;

    clock_t duration = clock() - before;
    cout << "Insertion(BST): " << (float)duration / CLOCKS_PER_SEC << " seconds"<<endl;

    before = clock();

    string key = "33-9535468";
    myPair *result;
    if ((result=tree->search(key))!=nullptr) cout << "Key " << key << ": "<< result->score << endl;
    else cout << "Key " << key << " not found in the BST." << endl;

    duration = clock() - before;
    cout << "Searching(BST): " << (float)duration / CLOCKS_PER_SEC << " seconds";

    return 0;
}
