//
//  main.cpp
//  Largest prime factor
//
//  Created by Mikołaj Deja on 17/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace::std;

int main() {
    long long int number, maxfactor, i=2;
    cin>>number;
    while(number>1)
    {
        while(number%i==0)
            number/=i;
        maxfactor=i;
        i++;
    }
    cout<<maxfactor<<endl;
    return 0;
}
