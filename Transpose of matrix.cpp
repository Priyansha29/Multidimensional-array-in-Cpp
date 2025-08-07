
//Priyansha
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2;
    cout << "Rows of matrix: "<<endl;
    cin>>r1;
    cout<<"Columns of matrix: "<<endl;
    cin>>c1;
    int Arr1[r1][c1];
    
    cout<<"Matrix"<<endl;
    for(int i=0;i<r1;i++){
        cout<<"Enter elements of "<<i+1<<"st row: "<<endl;
        for(int j=0;j<c1;j++){
            cin>>Arr1[i][j];
        }
    }
    cout<<"1st matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    r2=c1;
    c2=r1;
    int t[r2][c2];
    cout<<"TRANSPOSE of matrix is: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            t[i][j]=Arr1[j][i];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}


//OUTPUT:
/*
Rows of matrix: 
3
Columns of matrix: 
3
Matrix
Enter elements of 1st row: 
1
2
3
Enter elements of 2st row: 
4
5
6
Enter elements of 3st row: 
7
8
9
1st matrix is: 
1 2 3 
4 5 6 
7 8 9 
TRANSPOSE of matrix is: 
1 4 7 
2 5 8 
3 6 9 
*/






























