//
//  main.cpp
//  Lattice paths
//
//  Created by Mikołaj Deja on 19/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long double N=40, K=20, ans;
    ans=1;
    if(N-K<K)
        K=N-K;
    
    while(K>0)
    {
        ans*=N-K+1;
        ans/=K;
        K--;
    }
    cout<<(long int)ans<<" ";
    return 0;
}
