#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    // Vector
    vector<int> v = {5, 2, 8, 1};
    v.push_back(10);
    sort(v.begin(), v.end());

    cout << "Vector: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Set
    set<int> s;
    for (int i : v) {
        s.insert(i); // Duplicate nahi lega
    }

    cout << "Set: ";
    for (int i : s) {
        cout << i << " ";
    }
    cout << endl;

    // Map
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    cout << "Map: " << endl;
    for (auto p : m) {
        cout << p.first << " => " << p.second << endl;
    }

    // Stack
    stack<int> st;
    for (int i : v) {
        st.push(i);
    }

    cout << "Stack (Top to Bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
