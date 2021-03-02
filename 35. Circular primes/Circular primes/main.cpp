//
//  main.cpp
//  Circular primes
//
//  Created by Mikołaj Deja on 30/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int x)
{
    for(int i=2; i*i<=x; ++i)
        if(x%i==0)
            return false;
    return true;
}

int main() {
    int count=0;
    for(int i=2; i<1000000; ++i)
    {
        int copy=i;
        bool cyclic=true;
        for(int j=0; j<log10(copy); ++j)
        {
            if(!isprime(copy))
            {
                cyclic=false;
                break;
            }
            int last=copy%10, len=log10(copy);
            copy/=10;
            copy+=last*pow(10, len);
        }
        if(cyclic)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
