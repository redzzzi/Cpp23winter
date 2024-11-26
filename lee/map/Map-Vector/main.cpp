#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <vector>

using namespace std;

class myPair {
public:
    string      ID;
    float       score;
    myPair(string a,float b):ID(a), score(b){}
    myPair() {}
};


// Main function
int main() {

    clock_t before = clock();

    vector<myPair> myVector;
    vector<myPair>::iterator it;

    string  filename="students-1M.prn";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        exit(1);
    }

    string  line;
    string  ID;
    float   score;

    clock_t duration = clock() - before;
    cout << "Insertion(Vector): " << (float)duration / CLOCKS_PER_SEC << " seconds"<<endl;

    while (getline(file, line)) { // Read each line
        stringstream ss(line);    // Use stringstream to split the line
        ss>>ID >> score;
//        cout<<"ID: "<< ID<<", score: "<<score<<endl;
        myVector.push_back(myPair(ID,score));
    }

//    for(it=myVector.begin();it!=myVector.end();it++)
//        cout<<"ID :"<<it->ID <<" score: "<<it->score<<endl;

    string key = "33-9535468";

    before = clock();

    for(it=myVector.begin();it!=myVector.end();it++) {
        if(it->ID==key) {
            cout << "Key " << key << ": "<< it->score << endl;
            break;
        }
    }

    cout << "Key " << key << " not found in the Vector." << endl;

    duration = clock() - before;
    cout << "Searching(Vector): " << (float)duration / CLOCKS_PER_SEC << " seconds";

    return 0;
}
