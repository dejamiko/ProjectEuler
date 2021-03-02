//
//  main.cpp
//  Counting summations
//
//  Created by Mikołaj Deja on 12/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long int num=100, ways[num+1];
    memset(ways, 0, (num+1)*sizeof(long int));
    ways[0]=1;
    for(int i=1; i<=99; ++i)
        for(int j=i; j<=num; ++j)
            ways[j]+=ways[j-i];
    cout<<ways[num]<<endl;
    return 0;
}
