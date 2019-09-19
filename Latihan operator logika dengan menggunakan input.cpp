#include<iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"Masukkan nilai a = ";cin>>a;
cout<<"Masukkan nilai b = ";cin>>b;
cout<<"Masukkan nilai c = ";cin>>c;
cout<<"a or b = "<<(a||b)<<endl;
cout<<"a or c = "<<(a||c)<<endl;
cout<<"(a or b) and (a or c) = "<<((a||b)&&(a||c))<<endl;
return 0;}
