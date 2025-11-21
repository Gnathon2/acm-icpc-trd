// 31 - __builtin_clz ou __lg(x) donne l'indice du premier bit à 1 de droite à gauche. 
// calculer double acos(0.0) pour avoir pi très précis. 
// int a = x avec x un char pour convert en ascii et a-48 ou - '0' pour avoir le nombre correspondant si entre 0 et 9.
// précision d'un nombre à couper : printf("%.*lf,n,nb) avec lf pour double et n le nb de chiffres.
// lower_bound(x) et upper_bound(x) pour resp premier indice  i tq tab[i]>= x resp tq tab[i]> x.
// format exemple priority_queue priority_queue<int,vector<int>,greater<int>>pq; lorsque fonction de tri fait maison faire decltype(func) a la place de greater.

// priority_queue<int> pq;

// pq.push(3); // add 3
// pq.empty(); // -> bool
// pq.top(); // elem en haut
// pq.pop(); // tej net l'element en haut

//  // autre exemple
// auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
// std::priority_queue<int, std::vector<int>, decltype(cmp)> lambda_priority_queue(cmp);

// for (int n : data)
//     lambda_priority_queue.push(n); 
