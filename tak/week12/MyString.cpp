#include <iostream>
#include <cstring>

using namespace std;

class MyString {
private:
    char* Buffer;

public:
    MyString(const char* InitialInput) {
        cout << "Constructor: creating new MyString " << endl;
        if (InitialInput != NULL) {
            Buffer = new char[strlen(InitialInput) + 1];
            strcpy(Buffer, InitialInput);
            cout << "Buffer points to: " << hex;
            cout << (unsigned int*)Buffer << endl;
        }
        else
            Buffer = NULL;
    }

    // Copy Constructor
    MyString(const MyString& CopySource) {
        cout << "Copy Constructor is called ..." << endl;
        if (CopySource.Buffer != NULL) {
            Buffer = new char [strlen(CopySource.Buffer) + 1];
            strcpy(Buffer, CopySource.Buffer);
            cout << "Buffer points to: " << hex;
            cout << (unsigned int*)Buffer << endl;
        }

    }

    ~MyString() {
        cout << "Invoking destructor,  clearing up" << endl;
        if (Buffer != NULL)
            delete [] Buffer;
    }
    int GetLength() {
        return strlen(Buffer);
    }
    const char * GetString() {
        return Buffer;
    }
};

void useMyString(MyString Input) {
    cout << "String buffer in MyString: " << Input.GetString() << endl;
    return;
}

int main()
{
    cout << "Hello world!" << endl;
    MyString SayHello("Hello from MyString Class");
    cout << "Length: " << SayHello.GetLength() << endl;
    cout << "Message: " << SayHello.GetString() << endl;
    useMyString(SayHello);
    return 0;;
}
