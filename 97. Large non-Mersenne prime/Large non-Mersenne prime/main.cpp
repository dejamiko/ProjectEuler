//
//  main.cpp
//  Large non-Mersenne prime
//
//  Created by Mikołaj Deja on 08/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int m=10000000000, x=28433;
    for(int i=0; i<7830457; ++i)
    {
        x*=2;
        if(x>m)
            x=x%m;
    }
    x+=1;
    cout<<x<<endl;
    return 0;
}
