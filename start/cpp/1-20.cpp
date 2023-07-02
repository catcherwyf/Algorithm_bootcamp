#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0)
            continue;
        cout<<i<<endl;
    }
    int i=1;
    while(i<=n){
        if(i%3==0)
            continue;//i=3则重新开始循环，无法计算 i++,死循环
        cout<<i<<endl;
        i++;
    }
    cout<<"this is a test";
    return 0;
}