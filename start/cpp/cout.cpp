#include<iostream>
using namespace std;
int main(){
    int a=10,*p;
    int &b=a;//引用
    p=&a;//指针 p 存储变量 a 的地址
    string s="C++";
    string *ps=&s;
    cout<<p<<endl;
    cout<<b<<endl;
    cout<<*p<<endl;
    cout<<ps<<endl;
    cout<<*ps<<endl;
}