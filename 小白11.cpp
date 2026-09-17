#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    string result = "";
    for (char c : s) {
        if (c != ' ') {
            result += c;
        }
    }
    
    cout << result << endl;
    return 0;
}
