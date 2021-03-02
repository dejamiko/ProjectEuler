//
//  main.cpp
//  1000-digit Fibonacci number
//
//  Created by Mikołaj Deja on 24/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char fib[1001], fib1[1001], fib2[1001];
    int index=2;
    memset(fib, '0', 1001*sizeof(char));
    memset(fib1, '0', 1001*sizeof(char));
    memset(fib2, '0', 1001*sizeof(char));
    bool go=true;
    fib1[1000]='1';
    fib2[1000]='1';
    while(go)
    {
        go=false;
        if(fib[1]=='0')
            go=true;
        index++;
        int rem=0;
        for(int i=1000; i>=0; --i)
        {
            fib[i]=((int)fib1[i]+(int)fib2[i]+rem-2*48+100)%10+48;
            if(fib1[i]+fib2[i]-2*48+rem>9)
                rem=1;
            else
                rem=0;
        }
        for(int i=1000; i>=0; --i)
        {
            fib2[i]=fib1[i];
            fib1[i]=fib[i];
        }
    }
    cout<<--index<<endl;
    return 0;
}
