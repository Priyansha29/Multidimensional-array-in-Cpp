//Priyansha Gour
//24070123079
//ENMTC-A3
#include <iostream>
using namespace std;
int main() {
    int a, b, i,j;
    cout << "Enter rows: ";
    cin>>a;
    cout<<"Enter column: ";
    cin>>b;
    int m[a][b];
    
    for(i=0;i<a;i++){
        cout<<"Elements for "<<i+1<<" row"<<endl;
        for(j=0;j<b;j++){
            cin>>m[i][j];
        }
    }
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}


output:

/*Enter rows: 3
Enter column: 3
Elements for 1 row
1
2
3
Elements for 2 row
4
6
7
Elements for 3 row
8
9
0
1 2 3 
4 6 7 
8 9 0*/
