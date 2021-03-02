//
//  main.cpp
//  Largest palindrome product
//
//  Created by Mikołaj Deja on 17/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

bool palin(int x)
{
    string temp;
    while(x>1)
    {
        temp+=(char)(x%10+48);
        x/=10;
    }
    for(int i=0; i<temp.size()/2; ++i)
        if(temp[i]!=temp[temp.size()-1-i])
            return false;
    return true;
}

int main() {
    int number, max=0, limit=1000;
    for(int i=0; i<limit; ++i)
        for(int j=i+1; j<limit; ++j)
        {
            number=i*j;
            if(palin(number) && number>max)
                max=number;
        }
    cout<<max<<endl;
            
    return 0;
}
