#include <bits/stdc++.h>
using namespace std;
int main(){
    int day ;
    cin>>day;
    switch(day){
        case 1:{
            cout<<"Monday";
            break;
        }
        case 2:{
            cout<<"tuesday";
            break;
        }
        case 3:{
            cout<<"wednesday";
            break;
        }
        case 4:{
            cout<<"Thursday";
            break;
        }
        case 5:{
            cout<<"Friday";
            break;
        }
        case 6:{
            cout<<"saturday";
            break;
        }
        
        
        default:{
            cout<<"Sunday";
        }
    }
    return 0;
}