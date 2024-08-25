#include<iostream>
using namespace std;
void inputmatrix(int matrix[10][10],int row,int col,const string &matrixName){
	cout<<"entr elements of "<<matrixName<<": \n";
	for(int i=0;i<row;++i){
		for(int j=0; j<col;j++){
			cin>>matrix[i][j];
		}
	}
}
void display( int matrix[10][10],int row,int col){
	cout<<"the stored matrix is :"<<"\n";
	for(int i=0;i<row;++i){
		for(int j=0; j<col;++j){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
void add(int matrix1[10][10],int matrix2[10][10],int result[10][10],int row,int col)
{	
	for(int i=0;i<row;++i){	
		for(int j=0; j<col;++j){
			result[i][j]=matrix1[i][j] + matrix2[i][j];
		}
	}
}
void transposeMatrix(int matrix[10][10],int tranpose[10][10], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            tranpose[j][i] = matrix[i][j];
        }
    }
}
int main(){
	int i1,j1,i2,j2;
	int m1[10][10],m2[10][10],result[10][10];
	cout<<"enter numbr of rows and columns for 1st matrix";
	cin>>i1>>j1;
	inputmatrix(m1,i1,j1,"first matrix");
	display(m1,i1,j1);
	
	cout<<"enter numbr of rows and columns for 2nd matrix";
	cin>>i2>>j2;
	inputmatrix(m2,i2,j2,"second matrix");
	display(m2,i2,j2);
	
	add(m1,m2,result,i1,j1);
	cout<<"result matrix: \n ";
	display(result,i1,j2);
//	
//	cout<<"enter numbr of rows and columns for transpose";
//	cin>>i2>>j2;
//	inputmatrix(m2,i2,j2,"second matrix");
//	display(m2,i2,j2);
	
	return 0;

}





