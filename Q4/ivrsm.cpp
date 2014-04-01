#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a[3][3],ad[3][3],ad1[3][3],i,j,at[3][3];
    double r,in[3][3];
    cout<<"please insert a 3 * 3 matrix"<<endl;
    for (i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cin>>a[i][j];
        }
    }
    //to determine the minors of matrix
    ad[0][0]=(a[1][1]*a[2][2])-(a[1][2]*a[2][1]);
    ad[0][1]=(a[1][0]*a[2][2])-(a[1][2]*a[2][0]);
    ad[0][2]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
    ad[1][0]=(a[0][1]*a[2][2])-(a[0][2]*a[2][1]);
    ad[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
    ad[1][2]=(a[0][0]*a[2][1])-(a[0][1]*a[2][0]);
    ad[2][0]=(a[0][1]*a[1][2])-(a[0][2]*a[1][1]);
    ad[2][1]=(a[0][0]*a[1][2])-(a[0][2]*a[1][0]);
    ad[2][2]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);

    //the tranpose of minors
for(int j =0;j<3;j++) {
   for(i=0;i<3;i++) {
       ad1[i][j]=ad[j][i];
  ad[2][i];
   }
}
   //transpose of matrix A
   for(i=0;i<3;i++) {
       at[i][0]=a[0][i];

   }
   for(i=0;i<3;i++) {
       at[i][1]=a[1][i];

   }
   for(i=0;i<3;i++) {
       at[i][2]=a[2][i];

   }
   //Transpose of the matrix
   cout<<"Transpose of matrix:"<<endl;
   for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
        cout<<"\t"<<at[i][j];
        }
        cout<<endl;
   }
   //multiple the cofector with tranpose minors
    cout<<"The adjoint of matrix A :"<<endl;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<"\t"<<ad1[i][j]*pow(-1,i+j);
        }
        cout<<endl;
    }
    r=a[0][0]*ad[0][0]-a[0][1]*ad[0][1]+a[0][2]*ad[0][2];
    if ( r==0) {
        cout<<"It's have no inverse matrix"<<endl;
    }
    else {
        cout<<"Determination of matrix is :\t"<<r<<endl;
        if (r<0) {
        r=r*(-1);
        }
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                in[i][j]=ad1[i][j]/r;
            }

        }
        cout<<"The inverse matrix is :"<<endl;
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                cout<<"\t"<<in[i][j];
            }
            cout<<endl;
        }
   }


}
