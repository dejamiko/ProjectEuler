//
//  main.cpp
//  Quadratic primes
//
//  Created by Mikołaj Deja on 25/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool is_prime(int x)
{
    if(x<0)
        return false;
    for(int i=2; i*i<=x; ++i)
        if(x%i==0)
            return false;
    return true;
}

int main() {
    int longest=0, current, product=0;
    for(int a=-999; a<1000; ++a)
        for(int b=-999; b<1000; ++b)
        {
            current=0;
            int n=0;
            while(is_prime(n*n+a*n+b))
            {
                current++;
                n++;
            }
            if(current>longest)
            {
                longest=current;
                product=a*b;
            }
        }
    cout<<product<<endl;
    return 0;
}
