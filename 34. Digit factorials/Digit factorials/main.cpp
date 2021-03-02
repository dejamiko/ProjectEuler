//
//  main.cpp
//  Digit factorials
//
//  Created by Mikołaj Deja on 29/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int answer=0;
    int fact[10];
    fact[0]=1;
    for(int i=1; i<10; ++i)
        fact[i]=fact[i-1]*i;
    for(int i=3; i<100000000; ++i)
    {
        int copy=i, sum=0;
        while(copy>0)
        {
            sum+=fact[copy%10];
            copy/=10;
        }
        if(sum==i)
            answer+=i;
    }
    cout<<answer<<endl;
    return 0;
}
