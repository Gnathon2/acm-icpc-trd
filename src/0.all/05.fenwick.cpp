struct Fenw {
    vector<int> tree;
    int size;

    Fenw(int n) : size(n), tree(n + 1, 0) {}

    void add(int idx, int val) {
        while (idx <= size) {
            tree[idx] += val;
            idx += idx & (-idx);
        }
    }

    int sum(int idx) {
        int s = 0;
        while (idx > 0) {
            s += tree[idx];
            idx -= idx & (-idx);
        }
        return s;
    }
};