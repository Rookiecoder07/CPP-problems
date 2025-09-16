#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int place = 1;  // instead of pow(10, i)
    while (n > 0) {
        int bit = n & 1;
        ans += bit * place;
        place *= 10;   // move to next decimal place
        n = n >> 1;
    }

    cout << "Binary: " << ans << endl;
}
