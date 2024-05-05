#include<iostream>
using namespace std;
class matrix
{
    private:
    int m[3][3];
    public:
    void getdata()
    {
        int i,j;
        cout<<"Enter the 3*3 matrix value :";
        for(i=0;i<3;i++)
         for(j=0;j<3;j++)
         cin>>m[i][j];
    }
    void display()
    {
        int i,j;
        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
            {
                cout<<m[i][j]<<"\t";
            }
            cout<<endl;
    }
    friend matrix trans(matrix);
};
matrix trans(matrix m1)
{
    int i,j;
    matrix m2;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    m2.m[i][j]= m1.m[j][i];
    return m2;
}
int main()
{
    matrix mat1,mat2;
    mat1.getdata();
    mat1.display();
    mat2=trans(mat1);
    cout<<"Transpose Matrix :";
    mat2.display();
}
