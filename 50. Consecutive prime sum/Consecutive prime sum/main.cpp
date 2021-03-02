//
//  main.cpp
//  Consecutive prime sum
//
//  Created by Mikołaj Deja on 05/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n=1000000, all[n], size=0, max=0, maxprime=-1;
    for(int i=0; i<n; ++i)
        all[i]=i;
    all[1]=0;
    for(int i=2; i*i<=n; ++i)
        for(int j=2; j<n; ++j)
            if(all[j]%i==0 && i!=j)
                all[j]=0;
    for(int i=0; i<n; ++i)
        if(all[i]!=0)
            size++;
    int primes[size], num=0;
    for(int i=0; i<n; ++i)
        if(all[i]!=0)
            primes[num++]=all[i];
    for(int i=0; i<size; ++i)
    {
        int prime, sum;
        prime=primes[i];
        for(int j=0; j<i; ++j)
        {
            sum=0;
            int k=0;
            while(sum<prime)
            {
                sum+=primes[j+k];
                k++;
            }
            if(sum==prime)
                if(k>max)
                {
                    max=k;
                    maxprime=primes[i];
                }
        }
    }
    cout<<maxprime<<endl;
    return 0;
}
