//
//  main.cpp
//  Triangular, pentagonal, and hexagonal
//
//  Created by Mikołaj Deja on 02/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool istrian(long long int x)
{
    long double n=(sqrt(1+8*x)-1)/2;
    if(n==floor(n))
        return true;
    return false;
}

bool ispent(long long int x)
{
    long double n=(sqrt(1+24*x)+1)/6;
    if(n==floor(n))
        return true;
    return false;
}

bool ishex(long long int x)
{
    long double n=(sqrt(1+8*x)+1)/4;
    if(n==floor(n))
        return true;
    return false;
}

int main() {
    long long int d=0, j=40755;
    while(d==0)
    {
        j++;
        if(istrian(j) && ispent(j) && ishex(j))
            d=j;
    }
    cout<<d<<endl;
    return 0;
}
