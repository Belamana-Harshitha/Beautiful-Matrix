#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    int row,col;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if (arr[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }
    count=abs(row-2)+abs(col-2);
    cout<<count;
    return 0;
}