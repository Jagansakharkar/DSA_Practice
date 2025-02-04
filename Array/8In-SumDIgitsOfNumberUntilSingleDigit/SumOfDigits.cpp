#include <iostream>
using namespace std;
class Abc
{
public:
  // calculate sum of digits
  int returnSum(int n)
  {
    int sum = 0;
    while (n > 0)
    {
      int d = n % 10;
      sum += d;
      n = n / 10;
    }
    return sum;
  }
  bool isSingleDigit(int sum)
  {
    if ((sum / 10) >= 1)
    {
      return false;
    }
    else
    {
      return true;
    }
  }

  int giveSingleDigit(int num)
  {
    // int sum = returnSum(num);
    // if (isSingleDigit(sum))
    // {
    //   return sum;
    // }
    // sum = returnSum(sum);
    bool singleDigit = isSingleDigit(num);

    while (!singleDigit)
    {
        }
    return singleDigit;
  }
};
int main()
{
  int num;
  cout << "Enter Any Number:";
  cin >> num;
  Abc a1;
  cout << a1.giveSingleDigit(num);
}