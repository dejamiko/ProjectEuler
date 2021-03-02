//
//  main.cpp
//  Truncatable primes
//
//  Created by Mikołaj Deja on 30/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long int x)
{
    if(x<2)
        return false;
    for(long int i=2; i*i<=x; ++i)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main() {
    int counter=11;
    long int sum=0, i=10;
    while(counter)
    {
        long int copy=i;
        bool trunc=true;
        int size=log10(copy);
        for(int j=0; j<=size; ++j)
        {
            if(isprime(copy)==0)
            {
                trunc=false;
                break;
            }
            copy/=10;
        }
        copy=i;
        for(int j=0; j<=size && trunc; ++j)
        {
            if(isprime(copy)==0)
            {
                trunc=false;
                break;
            }
            int len=log10(copy);
            copy=copy%(int)pow(10, len);
        }
        if(trunc)
        {
            sum+=i;
            counter--;
        }
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
