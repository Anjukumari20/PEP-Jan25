   #include <iostream>
    using namespace std;
    int main() {
      /*  int arr[5]={6,7,3,1,8};
        for(int i=0;i<5;i++){//i<8 gives err-array index out of bound but when we use online compiler it gives garbage value
            cout<<arr[i];
        }
        for(auto x: arr)//auto we use iterate over any data type
        {
            cout<<x<<" ";
        }
        }*/

       //Take input from user of 5 numbers, store them in an array and print the numbers
        int n;
      cout<<"enter array size"<<endl;
      cin>>n;
      int arr[n];
      cout<<"enter array elements"<<endl;
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int x:arr){
        cout<<x<<" ";
      }
        return 0;
    }