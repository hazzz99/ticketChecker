#include <iostream>
#include <string>
using namespace std;
int bangla(int n);
int times = 0;
int main(){
    string n, N;
    while (cin >> n){
        times++;
        cout << times <<". ";
        if (n.length() > 7){
            N = n.substr(n.length() - 7);
            //取得n[7]之後的字串作為N
            n = n.substr(0, n.length() - 7);
            
            if (!n.empty()) bangla(stoi(n));
            cout <<"kuti ";
            if (!n.empty()) bangla(stoi(N));
        }
        else {
            bangla(stoi(n));
        }
        cout << endl;
    }
}
int bangla(int n){
    int kuti = n / 10000000,
    lakh = (n % 10000000) / 100000,
    hajar = (n % 100000) / 1000,
    shata = (n % 1000) / 100,
    remainder = n % 100;
    if (kuti > 0) cout <<kuti <<" kuti ";
    if (lakh > 0) cout <<lakh <<" lakh ";
    if (hajar > 0) cout <<hajar <<" hajar ";
    if (shata > 0) cout <<shata <<" shata ";
    if (remainder > 0){
        cout << remainder <<endl;
    }
    return 0;
}