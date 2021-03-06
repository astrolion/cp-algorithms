#include "bits/stdc++.h"
using namespace std;


template< typename T >
T bin_pow(T base, T power, T MOD) {
    T ret = 1;
    base %= MOD;
    while(power > 0) {
        if(power & 1) ret = (1LL * ret * base) % MOD;
        base = (1LL * base * base) % MOD;
        power /= 2;
    }
    return ret;
}

int main() {

#ifndef astro_lion
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#endif // astro_lion

    int base, power, mod;
    while( cin >> base ) {
        cin >> power >> mod;
        cout << bin_pow(base, power, mod) << '\n';
    }

    return 0;
}

