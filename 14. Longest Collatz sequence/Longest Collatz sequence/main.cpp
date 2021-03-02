//
//  main.cpp
//  Longest Collatz sequence
//
//  Created by Mikołaj Deja on 19/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int x, chain, max=0, nummax;
    for(long int i=2; i<1000000; ++i)
    {
        chain=0;
        x=i;
        while(x!=1)
        {
            if(x%2==0)
                x/=2;
            else
                x=3*x+1;
            chain++;
        }
        if(chain>max)
        {
            max=chain;
            nummax=i;
        }
    }
    cout<<nummax<<endl;
    return 0;
}
