// https://leetcode.com/problems/power-of-two/

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n, ans;
    cin >> n;

    for (int i = 0; i <= 30; i++) {
        ans = pow(2, i);
        if (ans == n) {
            cout << "true" << endl;
            return 0;
        }
    }

    cout << "false" << endl;
    return 0;
}
