//
//  main.cpp
//  Prime permutations
//
//  Created by Mikołaj Deja on 04/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool areperm(int x, int y, int z)
{
    char num[4], numy[4], numz[4];
    for(int i=0; i<4; ++i)
    {
        num[i]=x%10+48;
        numy[i]=y%10+48;
        numz[i]=z%10+48;
        x/=10;
        y/=10;
        z/=10;
    }
    sort(num, num+4);
    sort(numy, numy+4);
    sort(numz, numz+4);
    for(int i=0; i<4; ++i)
        if(num[i]!=numy[i] || num[i]!=numz[i])
            return false;
    return true;
}

int main() {
    int all[10000], size=0;
    for(int i=0; i<10000; ++i)
        all[i]=i;
    all[1]=0;
    for(int i=2; i*i<=10000; ++i)
        for(int j=2; j<10000; ++j)
            if(all[j]%i==0 && i!=j)
                all[j]=0;
    for(int i=0; i<10000; ++i)
        if(all[i]!=0 && i>=1000)
            size++;
    int primes[size], num=0;
    for(int i=1000; i<10000; ++i)
        if(all[i]!=0)
            primes[num++]=all[i];
    for(int i=0; i<size; ++i)
    {
        for(int j=i+1; j<size; ++j)
            for(int k=j+1; k<size; ++k)
                if(areperm(primes[i], primes[j], primes[k]) && 2*primes[j]==primes[i]+primes[k])
                    cout<<primes[i]<<primes[j]<<primes[k]<<endl;
    }
    return 0;
}
