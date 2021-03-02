//
//  main.cpp
//  Sub-string divisibility
//
//  Created by Mikołaj Deja on 01/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string numtostring(long int x)
{
    string n;
    while(x>0)
    {
        n=(char)(x%10+48)+n;
        x/=10;
    }
    return n;
}

long int stringtonum(string n)
{
    long int sum=0, len=n.size();
    for(int i=0; i<len; ++i)
        sum+=(n[i]-48)*pow(10, len-1-i);
    return sum;
}

int main() {
    long long int sum=0;
    for(int l1=0; l1<10; l1++)
        for(int l2=0; l2<10; l2++)
            for(int l3=0; l3<10; l3++)
                for(int l4=0; l4<10; l4++)
                    for(int l5=0; l5<10; l5++)
                        for(int l6=0; l6<10; l6++)
                            for(int l7=0; l7<10; l7++)
                                for(int l8=0; l8<10; l8++)
                                    for(int l9=0; l9<10; l9++)
                                        for(int l10=0; l10<10; l10++)
                                        {
                                            if(l1!=l2 && l1!=l3 && l1!=l4 && l1!=l5 && l1!=l6 && l1!=l7 && l1!=l8 && l1!=l9 && l1!=l10 && l2!=l3 && l2!=l4 && l2!=l5 && l2!=l6 && l2!=l7 && l2!=l8 && l2!=l9 && l2!=l10 && l3!=l4 && l3!=l5 && l3!=l6 && l3!=l7 && l3!=l8 && l3!=l9 && l3!=l10 && l4!=l5 && l4!=l6 && l4!=l7 && l4!=l8 && l4!=l9 && l4!=l10 && l5!=l6 && l5!=l7 && l5!=l8 && l5!=l9 && l5!=l10 && l6!=l7 && l6!=l8 && l6!=l9 && l6!=l10 && l7!=l8 && l7!=l9 && l7!=l10 && l8!=l9 && l8!=l10 && l9!=l10)
                                                {
                                                    string t="000", b="0000000000";
                                                    b[0]=l1+48;
                                                    b[1]=l2+48;
                                                    b[2]=l3+48;
                                                    b[3]=l4+48;
                                                    b[4]=l5+48;
                                                    b[5]=l6+48;
                                                    b[6]=l7+48;
                                                    b[7]=l8+48;
                                                    b[8]=l9+48;
                                                    b[9]=l10+48;
                                                    bool go=1;
                                                    t[0]=b[1];
                                                    t[1]=b[2];
                                                    t[2]=b[3];
                                                    if(stringtonum(t)%2)
                                                        go=0;
                                                    t[0]=b[2];
                                                    t[1]=b[3];
                                                    t[2]=b[4];
                                                    if(stringtonum(t)%3)
                                                        go=0;
                                                    t[0]=b[3];
                                                    t[1]=b[4];
                                                    t[2]=b[5];
                                                    if(stringtonum(t)%5)
                                                        go=0;
                                                    t[0]=b[4];
                                                    t[1]=b[5];
                                                    t[2]=b[6];
                                                    if(stringtonum(t)%7)
                                                        go=0;
                                                    t[0]=b[5];
                                                    t[1]=b[6];
                                                    t[2]=b[7];
                                                    if(stringtonum(t)%11)
                                                        go=0;
                                                    t[0]=b[6];
                                                    t[1]=b[7];
                                                    t[2]=b[8];
                                                    if(stringtonum(t)%13)
                                                        go=0;
                                                    t[0]=b[7];
                                                    t[1]=b[8];
                                                    t[2]=b[9];
                                                    if(stringtonum(t)%17)
                                                        go=0;
                                                    if(go)
                                                        sum+=stringtonum(b);
                                                }
                                    }
    cout<<sum<<endl;
    return 0;
}
