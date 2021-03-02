//
//  main.cpp
//  Pentagon numbers
//
//  Created by Mikołaj Deja on 02/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool ispent(int x)
{
    double n=(sqrt(24*x+1)+1)/6;
    if(n==floor(n))
        return true;
    return false;
}

int main() {
    long int size=10000, penta[size], sum, diff;
    unsigned int d=-1;
    for(int i=0; i<size; ++i)
        penta[i]=i*(3*i-1)/2;
    
    for(int i=1; i<size; ++i)
        for(int j=1; j<size; ++j)
        {
            sum=penta[i]+penta[j];
            diff=abs(penta[i]-penta[j]);
            if(ispent(sum) && ispent(diff) && diff<d)
                d=diff;
        }
    
    cout<<d<<endl;
    return 0;
}
