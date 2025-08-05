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
