// Knuth-Morris-Pratt algorithm find string in a text in linear time 
vector<int> findOccurences(const string& s, const string& t) {
    int n = s.length();
    int m = t.length();
    string S = s + "#" + t;
    auto pi = prefixFunction(S);
    vector<int> ans;
    FOR(i, n+1, n+m+1) {
        if(pi[i] == n) {
            ans.pb(i-2*n);
        }
    }
    return ans;
}

vector<int> prefixFunction(const string& s) {
    int n = (int)s.length();
    vector<int> pi(n);
    pi[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = pi[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        pi[i] = j;
    }
    return pi;
}