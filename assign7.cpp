#include <iostream>
#include <cstring>
using namespace std;
class sample {
public:
    char *name;
    sample() : name(nullptr) {}
    sample(const char *str, int length) {
        name = new char[length + 1];
        strcpy(name, str);
    }
    sample(const sample &temp) {   // Making a deep copy
        int length = strlen(temp.name);
        name = new char[length + 1];
        strcpy(name, temp.name);
    }
    ~sample() {     // Destructor called to free dynamically allocated memory
        delete[] name;
    }
};

int main(int argc, char *argv[]) {
    sample user1((char *)"chitkara", 8);
    sample user2 = user1;  // Calling copy constructor
    strcpy(user2.name, "dummy");
    std::cout << user2.name << user1.name << std::endl;

    return 0;
}
