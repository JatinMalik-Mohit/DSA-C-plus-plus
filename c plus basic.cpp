#include<iostream>
using namespace std;

int main() {
    cout<<"DSA Basics"<<endl;
    cout<<"C++ Basics"<<'\n';
    cout<<"alpha"<<" ";
    cout<<"beta";
    cout<<'\n';
    cout<<"gamma";//if we use single quotes then it will give some integer value or error because single quotes are used for char data type
    
    int a = 5, b = 10; //4 bytes each
    cout << "The sum of a and b is: " << (a + b) <<'\n';
    string name = "Jatin Malik";//20 bytes
    bool isStudent = true; //1 byte
    char grade = 'A'; //1 byte
    float pi = 3.14; //4 bytes
    double _e = 2.71828; //8 bytes
    void* ptr = nullptr; //8 bytes
    char arr[10]; //10 bytes
    int arr2[2][2]; //16 bytes
    unsigned int u = 10; //4 bytes it can store only positive values
    int size = sizeof(a);//4 bytes there is no waay to find the size of a variable in C++ but we can use sizeof() operator to find the size of a variable in bytes
    cout<<'sahil chutiya'<<'\n';
    cout << "The size of a is: " << size << " bytes" << '\n';
    return 0;
}
