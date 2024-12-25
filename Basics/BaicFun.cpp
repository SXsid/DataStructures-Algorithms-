#include <bits/stdc++.h>
using namespace std;


void print(string name){
    cout<<"hey "<<name<<endl;
}

int passbyref(int &num){
    
    return ++num;
}
int passbyvalue(int num){
    return ++num;
}
int main() {
    int x,y;
    cin>>x>>y;
    cout<<passbyref(y);
    cout<<passbyvalue(x);
    cout<<x<<"new"<<y;
    return 0;
}