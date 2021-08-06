#include <iostream>
using namespace std; 

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int a,b,c;
    cin>>a>>b;
    c = sum(a,b);
    cout<<c;
}
// no return type no arguement 
// no return type has arguement
// has return type no arguement
// has return type has agruement