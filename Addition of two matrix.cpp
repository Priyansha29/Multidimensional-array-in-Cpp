
//Priyansha Gour
//24070123079
//ENMTC-A3
#include <iostream>
using namespace std;
int main() {
    int a, b, i,j,c,d,k,l, add[a][b];
    cout << "Enter rows: ";
    cin>>a;
    cout<<"Enter column: ";
    cin>>b;
    int m1[a][b];
    if( a==c && b==d){
    cout<<"FOR MATRIX 1 : "<<endl;
    for(i=0;i<a;i++){
        cout<<"Elements for "<<i+1<<" row"<<endl;
        for(j=0;j<b;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"FOR MATRIX 2: "<<endl;
    cout << "Enter rows: ";
    cin>>c;
    cout<<"Enter column: ";
    cin>>d;
    int m2[c][d];
    }
    else{
        cout<<"Matrix addition not possible";
    }
   
    for(i=0;i<a;i++){
        cout<<"Elements for "<<i+1<<" row"<<endl;
        for(j=0;j<b;j++){
            cin>>m2[i][j];
        }
    }
    cout<<"This is matrix 1:"<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"This is matrix 2:"<<endl;
    for(k=0;k<a;k++){
        for(l=0;l<b;l++){
            cout<<m2[k][l]<<" ";
        }
        cout<<endl;
    }
    
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            add[i][j]=m1[i][j]+m2[i][j];
        }
    }
    
    cout<<" After adding both matrices : "<<endl;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;



OUTPUT:


/*Enter rows: 3
Enter column: 3
FOR MATRIX 1 : 
Elements for 1 row
1
2
3
Elements for 2 row
4
5
6
Elements for 3 row
7
8
9
FOR MATRIX 2: 
Enter rows: 3
Enter column: 3
Elements for 1 row
0
9
8
Elements for 2 row
7
6
5
Elements for 3 row
4
3
2
This is matrix 1:
1 2 3 
4 5 6 
7 8 9 
This is matrix 2:
0 9 8 
7 6 5 
4 3 2 
 After adding both matrices : 
1 11 11 
11 11 11 
11 11 11 */
    
}
