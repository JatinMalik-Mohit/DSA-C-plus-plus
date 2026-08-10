#include<iostream>
using namespace std;

// int main(){
//     cout<<"prime numbers from 1 to 100 are: ";
//     for(int i=2;i<=100;i++){
//         bool isPrime=true;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }

// int main(){
//     int a;
//     cout<<"please enter the year you want to check for leap year :";
//     cin>>a;
//     if((a%100!=0 && a%4==0) || a%400==0){
//         cout<<"leap year"<<"\n";
//     }
//     else{
//         cout<<"not a leap year"<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter nummber till which you want to get sum of odd numbers :";
//     cin>>n;
//     for(int a=1;a<=n;a+=2){
//         sum+=a;
//     }
//     cout<<sum<<"\n";
//     return 0;
// }

// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter number : ";
//     cin>>n;
//     for(int a=n%10 ; n!=0 ; n=n/10){
//         sum=sum+a;
//         a=(n/10)%10;
//     }
//     cout<<"sum: "<<sum;
//     return 0;
// }

// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter number : ";
//     cin>>n;
//     while(n!=0){
//         int a=n%10;
//         sum=sum+a;
//         n=n/10;
//     }
//     cout<<"sum: "<<sum;
//     return 0;
// }

// int main(){
//     int n;
//     bool isprime = true;
//     cout<<"enter number: ";
//     cin>>n;
//     for(int a=2;a<=n/2;a=a+1){
//         if(n%a==0){
//             isprime=false;
//             cout<<"not a prime number"<<"\n";
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"prime number"<<"\n";
//     }
//     return 0;
// }

// int main(){
//     int n;
//     int a=2;
//     bool isprime=true;
//     cout<<"enter the number: ";
//     cin>>n;
//     while(a<=n/2){
//         if(n%a==0){
//             isprime=false;
//             cout<<"not a prime number";
//             break;
//         }
//         a=a+1;}
//     if(isprime){
//         cout<<"prime number";
//     }
//     return 0;
// }
