//
//  main.cpp
//  Permuted multiples
//
//  Created by Mikołaj Deja on 05/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool areperm(long int x, long int y, long int z, long int p, long int r, long int s)
{
    int len=floor(log10(x))+1;
    if(floor(log10(y))+1!=len || floor(log10(z))+1!=len || floor(log10(p))+1!=len || floor(log10(r))+1!=len || floor(log10(s))+1!=len)
        return false;
    char num[len], numy[len], numz[len], nump[len], numr[len], nums[len];
    for(int i=0; i<len; ++i)
    {
        num[i]=x%10+48;
        numy[i]=y%10+48;
        numz[i]=z%10+48;
        nump[i]=p%10+48;
        numr[i]=r%10+48;
        nums[i]=s%10+48;
        x/=10;
        y/=10;
        z/=10;
        p/=10;
        r/=10;
        s/=10;
    }
    sort(num, num+len);
    sort(numy, numy+len);
    sort(numz, numz+len);
    sort(nump, nump+len);
    sort(numr, numr+len);
    sort(nums, nums+len);
    for(int i=0; i<len; ++i)
        if(num[i]!=numy[i] || num[i]!=numz[i] || num[i]!=nump[i] || num[i]!=numr[i] || num[i]!=nums[i])
            return false;
    return true;
}

int main() {
    bool stop=false;
    long int x=1;
    while(!stop)
    {
        x++;
        if(areperm(x, 2*x, 3*x, 4*x, 5*x, 6*x))
            stop=true;
    }
    cout<<x<<endl;
    return 0;
}
