#include <cmath>

#include <cstdio>

#include <vector>

#include <iostream>

#include <algorithm>

using namespace std;

int main() {

    int n,m,c,flag=0;

    cin>>n>>m>>c;

    int p[n];

    for(int i=0;i<n;i++){

        cin>>p[i];

        if(p[i]>m*c)

        { 
          cout<<"No";

        break;
        }

        else if(p[i]<=m*c)

         flag++;

    }

    if(flag==n)

   cout<<"Yes";

    return 0;

}
