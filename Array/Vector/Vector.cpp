// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int>elements;
//     elements.push_back(8);
//     elements.push_back(7);
//     elements.push_back(7);
//     elements.pop_back();
//     cout<<elements.size();
    
//     for(int i =0;i<elements.size();i++){
//         cout<<elements[i];
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> elements;
    int length;

    cout << "Enter the length of the vector: ";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        int element;
        cin >> element;
        elements.push_back(element);
    }
    for (int i = 0; i < elements.size(); i++)
    {
        cout << elements[i] << " ";
    }
    cout << endl;
}
