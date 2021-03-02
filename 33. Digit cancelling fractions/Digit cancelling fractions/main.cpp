//
//  main.cpp
//  Digit cancelling fractions
//
//  Created by Mikołaj Deja on 29/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int den, num, d=1, n=1;
    for(den=10; den<100; ++den)
    {
        for(num=10; num<den; ++num)
        {
            if(num%10==den/10 && (den%10)*num==den*(num/10))
            {
                d*=den;
                n*=num;
            }
            if(den%10==num/10 && (num%10)*den==num*(den/10))
            {
                d*=den;
                n*=num;
            }
        }
    }
    for(int i=2; i<=n; ++i)
    {
        while(n%i==0 && d%i==0)
        {
            n/=i;
            d/=i;
        }
    }
    cout<<d<<endl;
    return 0;
}
