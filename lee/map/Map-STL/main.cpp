#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <ctime>

using namespace std;

// Main function
int main() {

    clock_t before = clock();

    map<string,float> myMap;
    string  filename="students-1m.prn";
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        exit(1);
    }

    string  line;
    string  ID;
    float   score;

    while (getline(file, line)) { // Read each line
        stringstream ss(line);    // Use stringstream to split the line
        ss>>ID >> score;
//        cout<<"ID: "<< ID<<", score: "<<score<<endl;
        myMap.insert(pair<string,float>(ID,score));
    }
    clock_t duration = clock() - before;
    cout << "Insertion(STL): " << (float)duration / CLOCKS_PER_SEC << " seconds"<<endl;

    before = clock();

//    cout << "Print maps\n";
    map<string,float>::iterator it;
//    for (it=myMap.begin(); it!=myMap.end(); ++it)
//        cout << "ID: "<<it->first << " score: " << it->second << '\n';

    string key = "33-9535468";
    it=myMap.find(key);
    if (it!=myMap.end()) cout << "Found ID: "<<it->first << " score: " << it->second<< '\n';
    else cout << "Key " << key << " not found in the Map." << endl;

    duration = clock() - before;
    cout << "Searching(STL): " << (float)duration / CLOCKS_PER_SEC << " seconds";

    return 0;
}
