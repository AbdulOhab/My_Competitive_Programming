#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , cnt = 0;
    scanf("%d",&n);
  bool visited[n];  int arr[n];

  for(int i = 0; i < n; i++){
    visited[i] = false;
  }
  for(int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }

  sort(arr,arr+n);

    for(int i = 0; i < n; i++){
        //unvisited
        if(visited[i] == false){
            for(int k = 0; k < n; k++){
                    //printf("Arr[k] = %d \t Arr[i] = %d \n",arr[k],arr[i]);
                if((arr[k] % arr[i]) == 0){
                  visited[k] = true;
                }
            }
            cnt++;
            //printf("Cnt is %d\n",cnt);
        }
    }
// for(int i = 0; i < n; i++){
//     printf("%d ",visited[i]);
//   } printf("\n");
   printf("%d\n",cnt);

return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int  main()
// {
//     int a,sum=0;
//     cin>>a;
//     int arr[a];
//     bool ar[a];
//     int ot=0;
//     memset(ar, 0, sizeof ar);
//     for(int i=0;i<a;i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,arr+a);
//     for(int j=0;j<a;j++)
//     {
//        if(ar[j] == 1)continue;
//        else{
//         for(int k = 0;k<a;k++)
//         {
//             if(arr[k] % arr[j] == 0 ){
//                 ar[k] = 1;
//             }
//         }
//         ot++;
//       }
//
//     }
//     cout<<ot<< endl;
//     return 0;
// }
