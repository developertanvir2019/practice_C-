#include <iostream>
#include <algorithm>
#include <cstring> // for strlen

using namespace std;

int main() {
    char s[100001];

    while (cin.getline(s, 100001)) {
        int n = strlen(s);
        string cleaned;
        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                cleaned += s[i];
            }
        }
        sort(cleaned.begin(), cleaned.end());
        cout << cleaned << endl;
    }

    return 0;
}
