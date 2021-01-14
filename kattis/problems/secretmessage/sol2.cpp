#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& myMatrix) 
{
       
  reverse(myMatrix.begin(), myMatrix.end());

  int size = myMatrix.size();

  for (int i = 0; i < size; ++i)
    {
      for (int j = i+1; j < size; ++j)
	{
	  swap(myMatrix[i][j], myMatrix[j][i]);
	}
    }
}


void flip(vector<vector<int> >& myMatrix) 
{
  int size = myMatrix.size();

  /*Flip Diagonally*/
  for (size_t i = 0; i < size; i++) 
    {
      for (size_t j = i; j < size; j++) 
	{
	  swap(myMatrix[i][j], myMatrix[j][i]);
	}
    }
  /* flip horizontally  */
  for (size_t i = 0; i < size; i++) 
    {
      reverse(myMatrix[i].begin(), myMatrix[i].end());
    }
}

int main() 
{
  //Declare a 2d array
  vector<vector<int> > myMatrix;
  int row = 3;
  int column = 3;

  int temp = 1; // variable to put the values in to vector

  //populate the array
  for(int i=0; i < row; i++)
    {
      //create a temp vector, it will act as a row
      vector<int>  temp_vector;
 
      for(int i=0; i<column; i++)
	{
	  temp_vector.push_back(temp);
	  temp++;
	}
      // push the content of temp vector to the main vector
      myMatrix.push_back(temp_vector); 
    }

  cout<< "Entered vector is : "<<endl;
  for (int i = 0; i < row; i++) 
    {
      for (int j = 0; j < column; j++)
	cout << myMatrix[i][j] << ' ';
      cout << endl;
    }

  rotate(myMatrix);
  // flip(myMatrix);

  cout<< "Final vector is : "<<endl;
  for (int i = 0; i < row; i++) 
    {
      for (int j = 0; j < column; j++)
	cout << myMatrix[i][j] << ' ';
      cout << endl;
    }

  return 0;
}
