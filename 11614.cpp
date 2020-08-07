//

#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int tc; 
    scanf("%d", &tc); 
    while(tc -- ){
        long long n; 
        scanf("%lld", &n); 
        long long ans = (-1 + sqrt(1+4*n*2))/2; 
        printf("%lld\n", ans);
    }
    

    return 0;
}
