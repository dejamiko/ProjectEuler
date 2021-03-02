//
//  main.cpp
//  Reciprocal cycles
//
//  Created by Mikołaj Deja on 25/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int length=0, num;
    for(int i=1000; i>1; --i)
    {
        if(length>=i)
            break;
        int remainders[i], val=1, pos=0;
        memset(remainders, 0, i*sizeof(int));
        while(val!=0 && remainders[val]==0)
        {
            remainders[val]=pos;
            val*=10;
            val%=i;
            pos++;
        }
        if(pos-remainders[val]>length)
        {
            length=pos-remainders[val];
            num=i;
        }
    }
    cout<<num<<endl;
    return 0;
}
