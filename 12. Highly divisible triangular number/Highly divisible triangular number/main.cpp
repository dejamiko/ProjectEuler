//
//  main.cpp
//  Highly divisible triangular number
//
//  Created by Mikołaj Deja on 19/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long long int tri1, tri2, n=2, factors=0;
    tri1=1;
    while(factors<500)
    {
        factors=0;
        tri2=tri1+n;
        tri1=tri2;
        n++;
        for(int i=1; i*i<=tri2; ++i)
        {
            if(i*i==tri2)
                factors++;
            else
                if(tri2%i==0)
                    factors+=2;
        }
    }
    cout<<tri2<<endl;
    return 0;
}
