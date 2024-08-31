#include<iostream>
using namespace std;
int main (){
    int age;
    cin>>age;
    if(age>18){
        cout<<"adult";
    }
    else{
        cout<<"not adult ";
    }
    
    return 0;
}


#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a;
    }
    else if (b>a && b>c)
    {
        cout<<b;
    }
    else if(c>a && c> b){
        cout<<c;
    }
    
    
    return 0;
}