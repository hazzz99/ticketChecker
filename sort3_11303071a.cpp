#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout <<"請輸入a之值:" <<endl;
    cin >>a;
    cout <<"請輸入b之值:" <<endl;
    cin >>b;
    cout <<"請輸入c之值:" <<endl;
    cin >>c;
    //開放輸入a,b,c之數值
    if (a<=b){
        if (b<=c){
            cout <<"a<=b<=c";
        }//如果a<=b且b<=c，即直接輸出
        else if (a<=c){
            cout <<"a<=c<=b";
        } //若a<=b且b<=c為false,則輸出a<=c<=b
        else {
            cout <<"c<=a<=b";
        }//若a<=b且b<=c和a<=c均為false,則輸出c<=a<=b
    }
    else if (b<=c){
        if (a<=c){
            cout <<"b<a<=c";
        }//如果a<=b為false且b<=c和a<=c,則輸出b<a<=c
        else {
            cout <<"b<=c<a";
        }//如果a<=b為false且b<=c但a<=c為false,則輸出b<=c<a
    }
    else {
        cout <<"a>b>c";
    }//如果a<=b,b<=c和a<=c均為flase,則輸出a>b>c

    bool d, e, f;
    cout <<"請輸入d之值:" <<endl;
    cin >>d;
    cout <<"請輸入e之值:" <<endl;
    cin >>e;
    cout <<"請輸入f之值:" <<endl;
    cin >>f;
    //開放輸入d, e, f之數值
    if (d <= e){
        if (e <= f){
            cout <<"d<=e<=f";
        } //如果d<=e且e<=f，即直接輸出
        else if (d <= f){
            cout <<"d<=f<=e";
        } //若d<=e且e<=f為false,則輸出d<=f<=e
        else {
            cout <<"f<=d<=e";
        } //若d<=e且e<=f和d<=f均為false,則輸出f<=d<=e
    }
    else if (e <= f){
        if (d <= f){
            cout <<"e<d<=f";
        } //如果d<=e為false且e<=f和d<=f,則輸出e<d<=f
        else {
            cout <<"e<=f<d";
        } //如果d<=e為false且e<=f但d<=f為false,則輸出e<=f<d
    }
    else {
        cout <<"d>e>f";
    } //如果d<=e, e<=f和d<=f均為false,則輸出d>e>f

    char g, h, i;
    cout <<"請輸入g之值:" <<endl;
    cin >>g;
    cout <<"請輸入h之值:" <<endl;
    cin >>h;
    cout <<"請輸入i之值:" <<endl;
    cin >>i;
    //開放輸入g, h, i之數值
    if (g <= h){
        if (h <= i){
            cout <<"g<=h<=i";
        } //如果g<=h且h<=i，即直接輸出
        else if (g <= i){
            cout <<"g<=i<=h";
        } //若g<=h且h<=i為false,則輸出g<=i<=h
        else {
            cout <<"i<=g<=h";
        } //若g<=h且h<=i和g<=i均為false,則輸出i<=g<=h
    }
    else if (h <= i){
        if (g <= i){
            cout <<"h<g<=i";
        } //如果g<=h為false且h<=i和g<=i,則輸出h<g<=i
        else {
            cout <<"h<=i<g";
        } //如果g<=h為false且h<=i但g<=i為false,則輸出h<=i<g
    }
    else {
        cout <<"g>h>i";
    } //如果g<=h, h<=i和g<=i均為false,則輸出g>h>i

    short int j, k, l;
    cout <<"請輸入j之值:" <<endl;
    cin >>j;
    cout <<"請輸入k之值:" <<endl;
    cin >>k;
    cout <<"請輸入l之值:" <<endl;
    cin >>l;
    //開放輸入j, k, l之數值
    if (j <= k){
        if (k <= l){
           cout <<"j<=k<=l";
        } //如果j<=k且k<=l，即直接輸出
        else if (j <= l){
            cout <<"j<=l<=k";
        } //若j<=k且k<=l為false,則輸出j<=l<=k
        else {
            cout <<"l<=j<=k";
        } //若j<=k且k<=l和j<=l均為false,則輸出l<=j<=k
    }
    else if (k <= l){
        if (j <= l){
            cout <<"k<j<=l";
        } //如果j<=k為false且k<=l和j<=l,則輸出k<j<=l
        else {
            cout <<"k<=l<j";
        } //如果j<=k為false且k<=l但j<=l為false,則輸出k<=l<j
    }
    else {
        cout <<"j>k>l";
    } //如果j<=k, k<=l和j<=l均為false,則輸出j>k>l

    long int m, n, o;
    cout <<"請輸入m之值:" <<endl;
    cin >>m;
    cout <<"請輸入n之值:" <<endl;
    cin >>n;
    cout <<"請輸入o之值:" <<endl;
    cin >>o;
    //開放輸入m, n, o之數值
    if (m <= n){
        if (n <= o){
            cout <<"m<=n<=o";
        } //如果m<=n且n<=o，即直接輸出
        else if (m <= o){
            cout <<"m<=o<=n";
        } //若m<=n且n<=o為false,則輸出m<=o<=n
        else {
            cout <<"o<=m<=n";
        } //若m<=n且n<=o和m<=o均為false,則輸出o<=m<=n
    }
    else if (n <= o){
        if (m <= o){
            cout <<"n<m<=o";
        } //如果m<=n為false且n<=o和m<=o,則輸出n<m<=o
        else {
            cout <<"n<=o<m";
        } //如果m<=n為false且n<=o但m<=o為false,則輸出n<=o<m
    }
    else {
        cout <<"m>n>o";
    } //如果m<=n, n<=o和m<=o均為false,則輸出m>n>o

    long long int p, q, r;
    cout <<"請輸入p之值:" <<endl;
    cin >>p;
    cout <<"請輸入q之值:" <<endl;
    cin >>q;
    cout <<"請輸入r之值:" <<endl;
    cin >>r;
    //開放輸入p, q, r之數值
    if (p <= q){
        if (q <= r){
            cout <<"p<=q<=r";
        } //如果p<=q且q<=r，即直接輸出
        else if (p <= r){
            cout <<"p<=r<=q";
        } //若p<=q且q<=r為false,則輸出p<=r<=q
        else {
            cout <<"r<=p<=q";
        } //若p<=q且q<=r和p<=r均為false,則輸出r<=p<=q
    }
    else if (q <= r){
        if (p <= r){
            cout <<"q<p<=r";
        } //如果p<=q為false且q<=r和p<=r,則輸出q<p<=r
        else {
            cout <<"q<=r<p";
        } //如果p<=q為false且q<=r但p<=r為false,則輸出q<=r<p
    }
    else {
        cout <<"p>q>r";
    } //如果p<=q, q<=r和p<=r均為false,則輸出p>q>r

    float s, t, u;
    cout <<"請輸入s之值:" <<endl;
    cin >>s;
    cout <<"請輸入t之值:" <<endl;
    cin >>t;
    cout <<"請輸入u之值:" <<endl;
    cin >>u;
    //開放輸入s, t, u之數值
    if (s <= t){
        if (t <= u){
            cout <<"s<=t<=u";
        } //如果s<=t且t<=u，即直接輸出
        else if (s <= u){
            cout <<"s<=u<=t";
        } //若s<=t且t<=u為false,則輸出s<=u<=t
        else {
            cout <<"u<=s<=t";
        } //若s<=t且t<=u和s<=u均為false,則輸出u<=s<=t
    }
    else if (t <= u){
        if (s <= u){
            cout <<"t<s<=u";
        } //如果s<=t為false且t<=u和s<=u,則輸出t<s<=u
        else {
            cout <<"t<=u<s";
        } //如果s<=t為false且t<=u但s<=u為false,則輸出t<=u<s
    }
    else {
        cout <<"s>t>u";
    } //如果s<=t, t<=u和s<=u均為false,則輸出s>t>u

    double v, w, x;
    cout <<"請輸入v之值:" <<endl;
    cin >>v;
    cout <<"請輸入w之值:" <<endl;
    cin >>w;
    cout <<"請輸入x之值:" <<endl;
    cin >>x;
    //開放輸入v, w, x之數值
    if (v <= w){
        if (w <= x){
            cout <<"v<=w<=x";
        } //如果v<=w且w<=x，即直接輸出
        else if (v <= x){
            cout <<"v<=x<=w";
        } //若v<=w且w<=x為false,則輸出v<=x<=w
        else {
            cout <<"x<=v<=w";
        } //若v<=w且w<=x和v<=x均為false,則輸出x<=v<=w
    }
    else if (w <= x){
        if (v <= x){
            cout <<"w<v<=x";
        } //如果v<=w為false且w<=x和v<=x,則輸出w<v<=x
        else {
           cout <<"w<=x<v";
        } //如果v<=w為false且w<=x但v<=x為false,則輸出w<=x<v
    }
    else {
        cout <<"v>w>x";
    } //如果v<=w, w<=x和v<=x均為false,則輸出v>w>x

    long double y, z, a1;
    cout <<"請輸入y之值:" <<endl;
    cin >>y;
    cout <<"請輸入z之值:" <<endl;
    cin >>z;
    cout <<"請輸入a1之值:" <<endl;
    cin >>a1;
    //開放輸入y, z, a1之數值
    if (y <= z){
        if (z <= a1){
            cout <<"y<=z<=a1";
        } //如果y<=z且z<=a1，即直接輸出
        else if (y <= a1){
            cout <<"y<=a1<=z";
        } //若y<=z且z<=a1為false,則輸出y<=a1<=z
        else {
            cout <<"a1<=y<=z";
        } //若y<=z且z<=a1和y<=a1均為false,則輸出a1<=y<=z
    }
    else if (z <= a1){
        if (y <= a1){
            cout <<"z<y<=a1";
        } //如果y<=z為false且z<=a1和y<=a1,則輸出z<y<=a1
        else {
            cout <<"z<=a1<y";
        } //如果y<=z為false且z<=a1但y<=a1為false,則輸出z<=a1<y
    }
    else {
        cout <<"y>z>a1";
    } //如果y<=z, z<=a1和y<=a1均為false,則輸出y>z>a1

    string a2, a3, a4;
    cout <<"請輸入a2之值:" <<endl;
    cin >>a2;
    cout <<"請輸入a3之值:" <<endl;
    cin >>a3;
    cout <<"請輸入a4之值:" <<endl;
    cin >>a4;
    //開放輸入a2, a3, a4之數值
    if (a2 <= a3){
        if (a3 <= a4){
            cout <<"a2<=a3<=a4";
        } //如果a2<=a3且a3<=a4，即直接輸出
        else if (a2 <= a4){
            cout <<"a2<=a4<=a3";
        } //若a2<=a3且a3<=a4為false,則輸出a2<=a4<=a3
        else {
            cout <<"a4<=a2<=a3";
        } //若a2<=a3且a3<=a4和a2<=a4均為false,則輸出a4<=a2<=a3
    }
    else if (a3 <= a4){
        if (a2 <= a4){
            cout <<"a3<a2<=a4";
        } //如果a2<=a3為false且a3<=a4和a2<=a4,則輸出a3<a2<=a4
        else {
            cout <<"a3<=a4<a2";
        } //如果a2<=a3為false且a3<=a4但a2<=a4為false,則輸出a3<=a4<a2
    }
    else {
        cout <<"a2>a3>a4";
    } //如果a2<=a3, a3<=a4和a2<=a4均為false,則輸出a2>a3>a4


    return 0;
}