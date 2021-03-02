//
//  main.cpp
//  Sum square difference
//
//  Created by Mikołaj Deja on 18/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n=100;
    long long sum1=0, sum2=0, diff;
    for(int i=1; i<=n; ++i)
        sum1+=pow(i,2);
    sum2=pow((1+n)*n/2,2);
    diff=abs(sum2-sum1);
    cout<<diff<<endl;
    return 0;
}
