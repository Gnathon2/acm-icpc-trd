const int MAX = 1e6;

ll fact[MAX+1], inv[MAX+1];

ll power(ll a, ll b) {
    ll res = 1;
    while(b > 0) {
        if(b%2) res = res*a % MOD;
        a = a*a % MOD;
        b /= 2;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for(int i=1; i<=MAX; i++)
        fact[i] = fact[i-1] * i % MOD;
        
    inv[MAX] = power(fact[MAX], MOD-2);
    for(int i=MAX-1; i>=0; i--)
        inv[i] = inv[i+1] * (i+1) % MOD;
}

ll binomial(int n, int k) {
    if(k < 0 || k > n) return 0;
    return fact[n] * inv[k] % MOD * inv[n-k] % MOD;
}