//
//  main.cpp
//  Smallest multiple
//
//  Created by Mikołaj Deja on 17/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    long long int x=0;
    bool go=true;
    while(go)
    {
        x++;
        go=false;
        for(int i=2; i<21; ++i)
            if(x%i!=0)
                go=true;
    }
    cout<<x<<endl;
    
    return 0;
}
