#include <iostream>
using namespace std;

int main() {
    int var;
    cin >> var;

    if (var > 2 && var % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}