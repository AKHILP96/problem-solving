#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{   int a=0,a1,a2,a3;
    int b=0,b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    if(a1!=b1)
       { if(a1>b1)
           a++;
           else
               b++;
       }
 if(a2!=b2)
     {
     if(a2>b2)
         a++;
     else
         b++;
 }
 if(a3!=b3)
     {
     if(a3>b3)
         a++;
     else
         b++;
 }
 cout<<a<<" "<<b;
 }
