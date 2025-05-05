#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#define N 11
using namespace std;
void show (int a[N]);
int findMax (int a[N]);
int findMin (int a[N]);
double findAver (int a[N]);
int findMed (int a[N]);

int main(void){
    int i, array[N];
    srand(time(NULL));
    for (i=0; i<=N-1; i++) array[i] = rand()%101;
    show(array);
    cout <<"\n";
    cout <<"Max=" <<findMax(array) <<endl;
    cout <<"Min=" <<findMin(array) <<endl;
    cout <<"Aver=" <<findAver(array) <<endl;
    cout <<"Med=" <<findMed(array) <<endl;
    return 0;
}
void show (int a[N]){
    for (int i = 0; i <N; i++){
        cout << a[i] <<" ";
    }
}
int findMax (int a[N]){
    int Max = a[0];
    for (int i = 0; i < N; i++){
        if (a[i] > Max){
            Max = a[i];
        }
    }
    return Max;
}
int findMin (int a[N]){
    int Min = a[0];
    for (int i = 0; i < N; i++){
        if (a[i] < Min){
            Min = a[i];
        }
    }
    return Min;
}
double findAver (int a[N]){
    double sum = 0;
    for (int i = 0; i <N; i++){
        sum += a[i];
    }
    double Aver = sum / N;
    return Aver;
}
int findMed (int a[N]){
    vector<int>vec(a, a+N);
    sort(vec.begin(), vec.end());
    return vec[5];
}