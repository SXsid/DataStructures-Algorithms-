#include <bits/stdc++.h>
using namespace std;
int Reverese(int x){
    long long reveser=0;
    while(x!=0){
        int digi = x%10;
        reveser = reveser*10 + digi;

        x=x/10;
    }
    if(reveser>INT_MAX ||reveser<INT_MIN) return 0;
    return reveser;
}
int main() {
    int num ;
    cin>>num;
    cout<<Reverese(num);

    return 0;
}