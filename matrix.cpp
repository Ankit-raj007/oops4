#include<iostream>
using namespace std;
template<class T>
class Matrix{
    public:
    T a[3][3];
    T sum[3][3];
    T t[3][3];
    int i,j;
    void input(){
        cout<<"ENTER THE MATRIX :"<<endl;
        cout<<"------------------------"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void transpose(){
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                t[j][i]=a[i][j];
            }
        }
    }
    void display(){
        cout<<"DISPLAYING THE MATRIX "<<endl;
        cout<<"-----------------------"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
        cout<<"DISPlAYING THE TRANSPOSE"<<endl;
        cout<<"-------------------------"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<t[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
    Matrix operator +(Matrix x){
    
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                sum[i][j]=a[i][j]+x.a[i][j];
            }
        }
        //displaying the addition matrix
        cout<<"DISPLAYING THE SUM "<<endl;
        cout<<"---------------------"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<sum[i][j]<<" ";
            }
            cout<<endl;
        }
    }  
};
int main(){

    Matrix <int> m,y;
    Matrix <float> n,z;
    //taking integer matrix as input
    m.input();
    //taking float matrix as input
    n.input();
    //transpose of integer matrix
    m.transpose();
    //transpose of float matrix
    n.transpose();
    //displaying the integer matrix
    m.display();
    //displaying the float matrix
    n.display();
    //printing the final matrix after sum
    m+y;
    n+z;
    return 0;
}
