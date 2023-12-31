#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double n,x,y,avg;
int w=0;
int z=0;
while(1){

    cin>>n;
    if(n>=0.0&&n<=10.0){
        if(w==1){
            y = n;
            z = 1;
        }
        else{
            x=n;
            w=1;
        }
        if(w==1&& z==1){
            avg=(x+y)/2;
            cout<<"media = "<<fixed<<setprecision(2)<<avg<<endl;
            break;
        }
    }
  else{
    cout<<"nota invalida"<<endl;
  }
}



return 0;
}

