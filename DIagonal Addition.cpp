
//Priyansha 
//24070123079
//ENTC-A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1;
    cout << "Rows in matrix: "<<endl;
    cin>>r1;
    cout<<"coulumns:  "<<endl;
    cin>>c1;
    int Arr1[r1][c1];
    int add=0;

    cout<<"Matrix: "<<endl;
    for(int i=0;i<r1;i++){
        cout<<"Enter elements for "<<i+1<<"st row: "<<endl;
        for(int j=0;j<c1;j++){
            cin>>Arr1[i][j];
        }
    }
    cout<<"Matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=i;j<c1;j++){
            if(i==j){
            add+=Arr1[i][j];
            
        }
            else{
                break;
            }
        }
        }
        cout<<"DIAGONAL ADDITION of the matrix: ";
        cout<<add;
}

//OUTPUT: 
/*
Rows in matrix: 
3
coulumns:  
3
Matrix: 
Enter elements for 1st row: 
1
2
3
Enter elements for 2st row: 
4
5
6
Enter elements for 3st row: 
7
8
9
Matrix is: 
1 2 3 
4 5 6 
7 8 9 

DIAGONAL ADDITION of the matrix: 15
*/




































