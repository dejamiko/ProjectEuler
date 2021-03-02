//
//  main.cpp
//  Multiples of 3 and 5
//
//  Created by Mikołaj Deja on 17/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int sum=0;
    for(int i=0; i<1000; ++i)
        if(i%3==0 || i%5==0)
            sum+=i;
    cout<<sum<<endl;
    return 0;
}
