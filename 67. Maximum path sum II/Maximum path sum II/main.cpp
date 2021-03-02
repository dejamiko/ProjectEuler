//
//  main.cpp
//  Maximum path sum II
//
//  Created by Mikołaj Deja on 20/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream data("/Users/mikolajdeja/Documents/ComputerScience/Solutions/ProjectEuler/Dasta/triangle.txt");
    long int trian[100][100];
    for(int i=0; i<100; ++i)
        for(int j=0; j<100; ++j)
            trian[i][j]=0;
    for(int i=0; i<100; ++i)
        for(int j=0; j<i+1; ++j)
            data>>trian[i][j];
    
    for(int i=98; i>=0; --i)
        for(int j=0; j<i+1; ++j)
            trian[i][j]=max(trian[i+1][j], trian[i+1][j+1])+trian[i][j];
    
    cout<<trian[0][0]<<endl;
    return 0;
}
