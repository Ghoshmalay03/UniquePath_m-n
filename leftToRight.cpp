//you are given m*n grid you are standing at top left corner and want to reach the bottom right that is (m-1,n-1) you can only move right and down right a recursive function in c++ to count the total possible unique paths
#include<iostream>
using namespace std;

int countPaths(int i, int j, int m, int n){
    if(i>=m || j>=n){
        return 0;
    }
    if(i==m-1 || j==n-1){
        return 1;
    }
    return countPaths(i+1, j, m, n) +
            countPaths(i, j+1, m, n);
}
int main(){
    int m;
    int n;
    cout<<"--WELCOME--"<<endl;
    cout<<"Finding the total unique possible paths..."<<endl;
    cout<<"Enter the length: ";
    cin>>m;
    cout<<"Enter the breadth: ";
    cin>>n;
    cout<<"Total number of unique paths: "<<countPaths(0, 0, m, n);
    return 0;
}
