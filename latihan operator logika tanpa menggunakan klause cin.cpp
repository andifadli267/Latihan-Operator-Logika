#include<iostream>
using namespace std;
int main(){
cout<<"A OR B"<<endl;
    cout<<"0 OR 0 = "<< ( 0 || 0 )<<endl;
    cout<<"0 OR 0 = "<< ( 0 || 0 )<<endl;
    cout<<"0 OR 1 = "<< ( 0 || 1 )<<endl;
    cout<<"0 OR 1 = "<< ( 0 || 1 )<<endl;
    cout<<"1 OR 0 = "<< ( 1 || 0 )<<endl;
    cout<<"1 OR 0 = "<< ( 1 || 0 )<<endl;
    cout<<"1 OR 1 = "<< ( 1 || 1 )<<endl;
    cout<<"1 OR 1 = "<< ( 1 || 1 )<<endl<<endl;

    cout<<"A OR C"<<endl;
    cout<<"0 OR 0 = "<< ( 0 || 0 )<<endl;
    cout<<"0 OR 1 = "<< ( 0 || 1 )<<endl;
    cout<<"0 OR 0 = "<< ( 0 || 0 )<<endl;
    cout<<"0 OR 1 = "<< ( 0 || 1 )<<endl;
    cout<<"1 OR 0 = "<< ( 1 || 0 )<<endl;
    cout<<"1 OR 1 = "<< ( 1 || 1 )<<endl;
    cout<<"1 OR 0 = "<< ( 1 || 0 )<<endl;
    cout<<"1 OR 1 = "<< ( 1 || 1 )<<endl<<endl;

    cout<<"F1 = (A OR B) AND (A OR C)"<<endl;
    cout<<"(0 OR 0) AND (0 OR 0) = "<< ( (0 || 0) && (0 || 0) )<<endl;
    cout<<"(0 OR 0) AND (0 OR 1) = "<< ( (0 || 0) && (0 || 1) )<<endl;
    cout<<"(0 OR 1) AND (0 OR 0) = "<< ( (0 || 1) && (0 || 0) )<<endl;
    cout<<"(0 OR 1) AND (0 OR 1) = "<< ( (0 || 1) && (0 || 1) )<<endl;
    cout<<"(1 OR 0) AND (1 OR 0) = "<< ( (1 || 0) && (1 || 0) )<<endl;
    cout<<"(1 OR 0) AND (1 OR 1) = "<< ( (1 || 0) && (1 || 1) )<<endl;
    cout<<"(1 OR 1) AND (1 OR 0) = "<< ( (1 || 1) && (1 || 0) )<<endl;
    cout<<"(1 OR 1) AND (1 OR 1) = "<< ( (1 || 1) && (1 || 1) )<<endl<<endl;

    return 0;
    }
