//
//  main.cpp
//  Summation of primes
//
//  Created by Mikołaj Deja on 18/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace::std;

const int n=2000000;
int all[n];

int main() {
    for(int i=0; i<n; ++i)
        all[i]=i;
    all[1]=0;
    for(int i=2; i*i<=n; ++i)
        for(int j=0; j<n; ++j)
            if(all[j]!=i && all[j]%i==0)
                all[j]=0;
    long long int sum=0;
    for(int i=0; i<n; ++i)
        sum+=all[i];
    cout<<sum<<endl;
    return 0;
}
