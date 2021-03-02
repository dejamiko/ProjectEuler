//
//  main.cpp
//  Maximum path sum I
//
//  Created by Mikołaj Deja on 20/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int trian[15][15];
    for(int i=0; i<15; ++i)
        for(int j=0; j<15; ++j)
            trian[i][j]=0;
    for(int i=0; i<15; ++i)
        for(int j=0; j<i+1; ++j)
            cin>>trian[i][j];
    
    for(int i=13; i>=0; --i)
        for(int j=0; j<i+1; ++j)
            trian[i][j]=max(trian[i+1][j], trian[i+1][j+1])+trian[i][j];
    
    cout<<trian[0][0]<<endl;
    return 0;
}
