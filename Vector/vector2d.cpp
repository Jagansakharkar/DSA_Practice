#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  // 1 d vector
  vector<int> vec1;

  // 2d vector
  vector<vector<int> > matrix(3, vector<int>(4, 2));

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << matrix[i][j] << " ";
    }
  }

  cout<<"Rows:"<<matrix.size();
  cout<<"Column:"<<matrix[0].size();
}