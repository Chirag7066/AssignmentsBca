#include <iostream>
#include <string>
using namespace std;
class string_counter {
private:
    string* str_Ptr;
public:
    string_counter(string str) {
        str_Ptr = new string(str);
    }
    ~string_counter() {
        delete str_Ptr;
    }
    int countWords() {
        int count = 0;
        bool inWord = false;
        for (char c : *str_Ptr) {
            if ((c == ' ' || c == '\n') && inWord) {
                count++;
                inWord = false; 
            }
            else if (c != ' ' && c != '\n' && !inWord) {
                inWord = true;
            }
        }
        if (inWord) {
            count++;
        }

        return count;
    }
};

int main() {
    string_counter p("Hello, this is a test    sentence.");
    cout << "Total words: "<<p.countWords()<<endl;
    return 0;
}