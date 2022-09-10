#include <iostream>

using namespace std;

int main() 
{
	int mat[3][3]={{1,2,3},{2,1,3},{4,1,2}}; //initialization
	double result;
	cout<<"Matrix A= "<<endl<<endl;
	for(int i=0;i<3;i++) //loop for matrix
	{
		for(int j=0;j<3;j++)
		cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl<<endl;
	//determinant logic
	result=(mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]))) - 
	       (mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[1][2] * mat[2][0]))) +
	       (mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[1][1] * mat[2][0])));
	
	cout<<"Determinant Of Matrix A= "<<result;
	return 0;
}
