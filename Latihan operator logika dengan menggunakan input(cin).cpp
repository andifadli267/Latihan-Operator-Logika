#include<iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"Masukkan nilai A, B, dan C antara 0 dan 1"<<endl;
cout<<"Masukkan nilai A = ";cin>>a;
cout<<"Masukkan nilai B = ";cin>>b;
cout<<"Masukkan nilai C = ";cin>>c;
cout<<"A OR B = "<<(a||b)<<endl;
cout<<"A OR C = "<<(a||c)<<endl;
cout<<"(A OR B) AND (A OR C) = "<<((a||b)&&(a||c))<<endl;
return 0;}
