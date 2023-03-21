#include <iostream>
#include <algorithm>

int main()
{
    int n;
    int sum=0;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
        sum+=arr[i];
    }
    std::cout<<sum;
}
