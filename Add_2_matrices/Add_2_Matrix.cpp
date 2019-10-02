#include <bits/stdc++.h>
using namespace std;

void main()
{
   int r, c, m1[10][10], m2[10][10], sum[10][10];

   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>r;
   cout<<"Enter the number of columns(should be >1 and <10): ";
   cin>>c;
   cout << "Enter all the elements of first matrix: "<<endl;
   for (int i = 0; i < r; i++ ) {
     for (int j = 0; j < c; j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter all the elements of second matrix: "<<endl;
   for (int i = 0; i < r; i++ ) {
     for (int j = 0; j < c; j++ ) {
       cin>>m2[i][j];
     }
   }

   cout<<"Output: ";
   for (int i = 0; i < r; i++ ) {
      for (int j = 0; j < c; j++ ) {
        sum[i][j] = m1[i][j] + m2[i][j];
        cout<<sum[i][j]<<" "; 
      }
   }

}
