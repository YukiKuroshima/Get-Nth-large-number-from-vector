// write a function that returns n th large number from the vector

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#include<ctime>
#include<cstdlib>

vector<int> vectorFun(vector<int> input, int n)
{
  sort (input.begin(),input.end());
  cout << "\nAfter Sorting" << endl;
  for(int i = 0; i < input.size();i++) cout << input[i] << " ";
  vector<int> output (input.begin() + n + 1, input.end());
  return output;

}
int main()
{
  int mynth = 2;
  vector<int>input;
  for(int i = 0; i < 5;i++) input.push_back(rand() % 100);
  cout << "Before calling the func" << endl;
  for(int i = 0; i < 5;i++) cout << input[i] << " ";

  vector<int> output = vectorFun(input ,mynth);
  cout << "\nAfter calling the func" << endl;
  for(int i = 0; i < output.size(); i++) cout << output[i] << " ";
  cout << endl;
}

