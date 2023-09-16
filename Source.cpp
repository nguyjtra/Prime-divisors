#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll snt(ll n) {
    ll count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ++count;
        }
    } if (n != 1) ++count;
    return count;
}

int main() {
    ll n;
    cin >> n;
    cout << snt(n);
    return 0;
}
