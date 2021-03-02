//
//  main.cpp
//  Non-abundant sums
//
//  Created by Mikołaj Deja on 23/05/2020.
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
            sum+=i;
        else
            if(n%i==0)
                sum+=i+n/i;
    }
    return sum-n;
}

bool abundant(int n)
{
    if(n<d(n))
        return true;
    return false;
}

int main() {
    long int sum=0;
    for(int i=1; i<=28123; ++i)
    {
        bool count=true;
        for(int j=1; j<=i/2; ++j)
            if(abundant(j) && abundant(i-j))
                count=false;
        if(count)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
