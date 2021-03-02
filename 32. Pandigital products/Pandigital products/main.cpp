//
//  main.cpp
//  Pandigital products
//
//  Created by Mikołaj Deja on 29/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool ispan(int a, int b, int c)
{
    int x=a, y=b, z=c;
    int nums[10];
    for(int i=0; i<10; ++i)
        nums[i]=1;
    while(x>0)
    {
        nums[x%10]--;
        x/=10;
    }
    while(y>0)
    {
        nums[y%10]--;
        y/=10;
    }
    while(z>0)
    {
        nums[z%10]--;
        z/=10;
    }
    if(nums[0]!=1)
        return false;
    for(int i=1; i<10; ++i)
        if(nums[i]!=0)
            return false;
    return true;
}

int main() {
    long int sum=0;
    for(int i=0; i<1000000; ++i)
    {
        for(int j=2; j*j<=i; ++j)
            if(i%j==0)
                if(ispan(i, j, i/j))
                {
                    sum+=i;
                    break;
                }
    }
    cout<<sum<<endl;
    return 0;
}
