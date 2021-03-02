//
//  main.cpp
//  Amicable numbers
//
//  Created by Mikołaj Deja on 22/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int d(int n)
{
    int sum=0;
    for(int i=1; i*i<=n; ++i)
    {
        if(i*i==n)
            sum+=2*i;
        else
            if(n%i==0)
                sum+=i+n/i;
    }
    return sum-n;
}


int main() {
    long int sum=0;
    for(int i=0; i<10000; ++i)
        if(i==d(d(i)) && i!=d(i))
            sum+=i;
    cout<<sum<<endl;
    return 0;
}
