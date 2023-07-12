#include<iostream>
using namespace std;

class com{
    public:
        int compliment(int n){

        if(n == 0){
           return 1;
        }


     int m = n;
     int layer = 0;

     while(m!=0){
         layer = (layer << 1) | 1;
         m = m >> 1;
      }

      int ans = (~n) & layer;

      return ans;
    }
};

int main(){

    int a;
    cout<<"Enter the number :"<<endl;
    cin>>a;

    com new1 ;
    cout<<new1.compliment(a);
}