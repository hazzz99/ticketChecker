#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int gradeCounter{0}, smallest,largerest; //定義最大值與最小值
    int levelA{0}, levelB{0}, levelC{0}, levelD{0}, levelF{0}; //設置成績的區間
    double average{0.0},total{0.0}; //平均用浮點數來表示才會有小數點後一位的數字
    smallest =100; //設最小值為極大值
    largerest =0; //設最大值為極小值

    cout <<"Enter grade or -1 to quit: "; //以-1區隔"若干"的數量
    int grade;
    cin >>grade;

    while (grade != -1){ //不包含-1的計算過程
        gradeCounter = gradeCounter +1; 
        total = total + grade;
        if (smallest > grade){
            smallest = grade; //比最小值還小就取代為最小值
        }
        if (largerest <grade){
            largerest = grade; //比最大值還大就取代為最大值
        }
        if (grade >=90){
            levelA = levelA +1;
        }
        else if (grade >=80){
            levelB = levelB +1;
        }
        else if (grade >=70){
            levelC = levelC +1;
        }
        else if (grade >=60){
            levelD = levelD +1;
        }
        else if (grade <60){
            levelF =levelF +1;
        }

        average = total/gradeCounter; 

        cout <<"Enter grade or -1 to quit: ";
        cin >>grade; 
    }

    cout <<"The smallest is :" << smallest <<endl;
    cout <<"The largerest is :" << largerest <<endl;
    cout <<"Total of all grades is :" << total <<endl;
    cout <<"Class average is :" << average <<endl;
    cout <<"The sum of gradeCounter is :" << gradeCounter <<endl;
    cout <<"The number of level A is :" << levelA <<endl;
    cout <<"The number of level B is :" << levelB <<endl;
    cout <<"The number of level C is :" << levelC <<endl;
    cout <<"The number of level D is :" << levelD <<endl;
    cout <<"The number of level F is :" << levelF <<endl;


    return 0;

}