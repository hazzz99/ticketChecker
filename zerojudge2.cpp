#include <iostream>
#include <cmath>
using namespace std;
int reverseNumber (int num){
    int reversed = 0;
    while (num != 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
} //顛倒數值 ex:123 -> 321
bool isPrime (int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i){ //i*i <=n 比i <= sqrt(n)來得好
        if (n % i == 0) return false;
    }
    return true;
} //判斷是否為質數
int main(){
    int N;
    while (cin >>N){
        if (!isPrime(N)) cout <<N <<" is not prime." <<endl;
        //如果n不是質數的時候輸出N is not prime.
        else {
            int reversed = reverseNumber(N); //reversed是已顛倒後的數值
            if (reversed != N && isPrime(reversed)) cout <<N <<" is emirp." <<endl;
            //如果reversed不等於N且reversed是質數
            else cout <<N <<" is prime." <<endl;
        }
    }
    return 0;
}
