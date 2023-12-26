#include <iostream>

using namespace std;

void removeChar(string& str, char c) {
    size_t pos = str.find(c);
    while (pos != string:: npos) {
        str.erase(pos, 1);
        pos = str.find(c, pos);
    }
}

int main() {
    string input = "Hello, World!";
    char c = 'o';

    removeChar(input, c);
    cout << input <<endl;

    return 0;
}