//
//  main.cpp
//  Eulercoin
//
//  Created by Mikołaj Deja on 09/06/2020.
//  Copyright © 2020 Mikołaj Deja. All rights reserved.
//

#include <iostream>
using namespace std;
using ll = long long ;

int main() {
   ll coin = 1504170715041707;
   ll mod = 4503599627370517;
   ll low = coin;
   ll high = coin;
   ll sum = low ;
   while (low > 0) {
      ll next = (low + high) % mod ;
      if (next < low) {
         low = next ;
         sum += low ;
      } else {
         high = next ;
      }
   }
   cout << sum << endl ;
}
