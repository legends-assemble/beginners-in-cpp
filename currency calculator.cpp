#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int num ;int count2000=0,count500=0,count200=0,count100=0,count50=0,count20=0,count10=0,count5=0,count2=0,count1=0;
    cout<<"please enter a amount to check minimal number of currency it constitute\n";
    cin>>num;
    if(num>0){
    while(num>=2000){
        num-=2000;
        ++count2000;
      };
      while(num>=500){
        num-=500;
        ++count500;
      };
      while(num>=200){
        num-=200;
        ++count200;
      };
      while(num>=100){
        num-=100;
        ++count100;
      };
      while(num>=50){
        num-=50;
        ++count50;
      };
      while(num>=20){
        num-=20;
        ++count20;
      };
      while(num>=10){
        num-=10;
        ++count10;
      };
      while(num>=5){
        num-=5;
        ++count5;
      };
      while(num>=2){
        num-=2;
        ++count2;
      };
      while(num>=1){
        num-=1;
        ++count1;
      };
      }else{
      cout<<"please enter correct number";
      };
      cout<<"2000 ="<<count2000<<"\n500 ="<<count500<<"\n200 ="<<count200<<"\n100 ="<<count100<<"\n50 ="<<count50<<"\n20 ="<<count20<<"\n10 ="<<count10<<"\n5 ="<<count5<<"\n2 ="<<count2<<"\n1 ="<<count1<<endl;
    return 0;
}