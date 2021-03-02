//
//  main.cpp
//  10001st prime
//
//  Created by Mikołaj Deja on 18/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int k=10001, count=0;
    long int x=1;
    while(count<k)
    {
        bool prime=1;
        x++;
        for(int i=2; i*i<=x; ++i)
            if(x%i==0)
            {
                prime=0;
                break;
            }
        if(prime)
            count++;
    }
    cout<<x<<endl;
    return 0;
}
