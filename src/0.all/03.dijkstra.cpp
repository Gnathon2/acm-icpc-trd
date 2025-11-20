priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > > pq;
vector<ll> distTo(n+1,LLONG_MAX); 
vector<bool> visited(n+1,false);

   distTo[1] = 0;
   pq.push(make_pair(0,1));
   while( !pq.empty() ){
       ll prev = pq.top().second;
      pq.pop();
        if(visited[prev])continue;
        visited[prev] = true;
      vector<pair<ll,ll> >::iterator it;
      for( it = g[prev].begin() ; it != g[prev].end() ; it++){
         ll next = it->first;
         if( distTo[next] > distTo[prev] + it->second){
            distTo[next] = distTo[prev] + it->second;
            pq.push(make_pair(distTo[next], next));
         }
      }

   }