#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for the job!";
        
    }
    else if(age<=60){
        cout<<"eligible for the job!"<<endl;
        if(age>=55){
        cout<<"but reterment time soon";
        }    
    }else{
        cout<<"retired";
    }
}