//
//  main.cpp
//  Coin sums
//
//  Created by Mikołaj Deja on 28/05/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int counter=0;
    for(int p1=0; p1<=200; ++p1)
        for(int p2=0; p2<=100; ++p2)
            for(int p5=0; p5<=40; ++p5)
                for(int p10=0; p10<=20; ++p10)
                    for(int p20=0; p20<=10; ++p20)
                        for(int p50=0; p50<=4; ++p50)
                            for(int p100=0; p100<=2; ++p100)
                                for(int p200=0; p200<=1; ++p200)
                                    if(p1+2*p2+5*p5+10*p10+20*p20+50*p50+100*p100+200*p200==200)
                                        counter++;
    cout<<counter<<endl;
    return 0;
}
