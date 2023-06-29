#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int X=0;
    while(n--){
        string str;

        cin>>str;
        if(str=="++X" || str=="X++") X++;
        else X--;
    
    }
    cout<<X;
    return 0;
}
