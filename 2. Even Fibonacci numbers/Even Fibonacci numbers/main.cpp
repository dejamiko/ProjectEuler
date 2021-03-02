//
//  main.cpp
//  Even Fibonacci numbers
//
//  Created by Mikołaj Deja on 17/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int limit=4000000, f1=1, f2=1, curr=0;
    long long int sum=0;
    while(curr<limit)
    {
        curr=f1+f2;
        f2=f1;
        f1=curr;
        if(curr%2==0)
            sum+=curr;
    }
    cout<<sum<<endl;
    return 0;
}
