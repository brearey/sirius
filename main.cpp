#include <iostream>

using namespace std;

int main() {
    long long carSpeed;
    long long time;
    cin >> carSpeed >> time;
    long long dist = carSpeed * time;
    cout << dist;
    return 0;
}