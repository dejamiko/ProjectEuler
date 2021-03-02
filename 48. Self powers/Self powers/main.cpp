//
//  main.cpp
//  Self powers
//
//  Created by Mikołaj Deja on 04/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int m=10000000000, temp=1, res=0;
    for(int i=1; i<=1000; ++i)
    {
        temp=1;
        for(int j=1; j<=i; ++j)
        {
            temp*=i;
            if(temp>m)
                temp=temp%m;
        }
        res+=temp;
        if(res>m)
            res=res%m;
    }
    cout<<res<<endl;
    return 0;
}
