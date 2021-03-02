//
//  main.cpp
//  Powerful digit sum
//
//  Created by Mikołaj Deja on 07/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char num[200];
    int max=0;
    for(int i=2; i<100; ++i)
    {
        int copy=i;
        memset(num, '0', 200*sizeof(char));
        num[199]=copy%10+48;
        copy/=10;
        num[198]=copy%10+48;
        for(int j=1; j<100; ++j)
        {
            int rem1=0, rem2=0, sum=0;
            for(int k=199; k>=0; --k)
            {
                int n=((num[k]-48)*i+rem1)/10+rem2;
                num[k]=((num[k]-48)*i+rem1)%10+48;
                rem1=n;
                rem2=rem1/10;
                rem1=rem1%10;
            }
            for(int k=0; k<200; ++k)
                sum+=num[k]-48;
            if(sum>max)
                max=sum;
        }
    }
    cout<<max<<endl;
    return 0;
}
