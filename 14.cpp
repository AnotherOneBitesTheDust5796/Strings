#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    getline(cin, s);
    if (s.size() >= 3 && s.substr(0, 3) == "abc")
        s.replace(0, 3, "www");
    else
        s += "zzz";
    cout << s;
}
