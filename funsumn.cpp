#include<iostream>

using namespace std;

int sum(int num)
{
    int sum=0;
  for(int i=1;i<=num;i++)
  {
     sum+=i;
  }
  return sum;
}
int main(void)
{
    int num;
    cin>>num;
    
    cout<<sum(num)<<endl;


}

