#include <iostream>
using namespace std;
int main(){
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 3; i++)
    {
       cout<<arr[i]*2<<endl;
    }
    
    
}


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i < 3; i++)
//     {
//        cout<<arr[3]*1;
//     }
    
    
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int values[5] = {};
//     int zeros = 0;
//     int ones = 0;

//     for(int i=0;i<5;i++){
//         cin>>values[i];
//     }

//     cout<<endl<<""<<endl;

//     for(int i=0;i<5;i++){
//         if(values[i]==0){
//             zeros++;
//         }
//         if(values[i]==1){
//             ones++;
//         }
//     }

//     cout<<"Total Zeros : "<<zeros<<endl;
//     cout<<"Total Ones : "<<ones;
// }




// #include<iostream>
// using namespace std;

// bool isPresent(int values[],int length,int toFind){
//     for(int i=0;i<length;i++){
//         if(values[i]==toFind){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int values[5] = {};
//     int toFind = 0;

//     for(int i=0;i<5;i++){
//         cin>>values[i];
//     }

//     cout<<""<<endl;

//     cout<<"Enter a number to find"<<endl;
//     cin>>toFind;

//     cout<<""<<endl;


//     int output = isPresent(values,5,toFind);

//     if(output==1){
//         cout<<endl<<"Found";
//     }else{
//         cout<<endl<<"Not Found";
//         }





// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int length;    
//     cout<<"Enter the length of Array : ";
//         cin>>length;
//     while(length<5){
//              cout<<"Enter the length of Array ( Above 5 ): ";
//              cin>>length;
//     }
//     int arr[length]={};
//     for(int i=0;i<length;i++){
//         cin>>arr[i];
//     }
//     int last=length-1;
//     cout<<"the values is "<<endl;
//     for(int i=0;i<length/2+1;i++){
//         cout<<arr[i]<<endl;
//         cout<<arr[last]<<endl;
//         last--;
//     }

//   return 0;
// }
