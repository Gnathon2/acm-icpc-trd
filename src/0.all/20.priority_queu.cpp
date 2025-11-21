priority_queue<int> pq;

pq.push(3); // add 3
pq.empty(); // -> bool
pq.top(); // elem en haut
pq.pop(); // tej net l'element en haut

 // autre exemple
auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
std::priority_queue<int, std::vector<int>, decltype(cmp)> lambda_priority_queue(cmp);

for (int n : data)
    lambda_priority_queue.push(n);
 