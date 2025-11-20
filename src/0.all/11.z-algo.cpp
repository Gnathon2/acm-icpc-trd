//find word u in s in O(|s| + |u|)

int L = 0, R = 0;
for (int i = 1; i < n; i++) {
  if (i > R) {
    L = R = i;
    while (R < n && s[R-L] == s[R]) R++;
    z[i] = R-L; R--;
  } else {
    int k = i-L;
    if (z[k] < R-i+1) z[i] = z[k];
    else {
      L = i;
      while (R < n && s[R-L] == s[R]) R++;
      z[i] = R-L; R--;
    }
  }
}

vector<int> search(string &text, string &pattern) {
    string s = pattern + '$' + text;
    vector<int> z = zFunction(s);
    vector<int> pos;
    int m = pattern.size();

    for (int i = m + 1; i < z.size(); i++) {
        if (z[i] == m){
            // pattern match starts here in text
            pos.push_back(i - m - 1); 
        }
    }
    return pos;
}