//
//  main.cpp
//  Pandigital prime
//
//  Created by Mikołaj Deja on 01/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

string numtostring(int x)
{
    string n;
    while(x>0)
    {
        n=(char)(x%10+48)+n;
        x/=10;
    }
    return n;
}

bool ispan(string num, int n)
{
    int nums[n+1];
    for(int i=0; i<n+1; ++i)
        nums[i]=1;
    for(int i=0; i<n; ++i)
    {
        if(num[i]-48>n)
            return false;
        nums[num[i]-48]--;
    }
    if(nums[0]!=1)
        return false;
    for(int i=1; i<n+1; ++i)
        if(nums[i]!=0)
            return false;
    return true;
}

bool isprime(long int x)
{
    for(long int i=2; i*i<=x; ++i)
        if(x%i==0)
            return false;
    return true;
}

int main() {
    long int max=0;
    for(int i=7; i>=4; i-=3)
        for(long int j=7654321; j>max && j>2; --j)
        {
            if(isprime(j) && ispan(numtostring(j), i))
                if(max<j)
                    max=j;
        }
    cout<<max<<endl;
    return 0;
}
