#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cout << "請輸入a之值:" << endl;
    cin >>a;
    cout << "請輸入b之值:" << endl;
    cin >>b;
    int A[]={a,b};
    if(a > b){
        i=a;
        a=b;
        b=i;
    }  
    cout << "排列後的順序:"<<"(" << a <<","<< b <<")";

    return 0;
}    