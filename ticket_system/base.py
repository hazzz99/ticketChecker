print("Hello Python!")
#印出文字

name = "Alice"
age = 20
height = 165.5
#不用寫 int、string，Python 會自動判斷型別。

age = 18
if age >= 18:
    print("你是成年人")
else:
    print("你是未成年")
#Python 沒有大括號 {}，用 縮排（空四格） 來表示程式區塊。
#條件後面記得加 :

# for 迴圈（像 C++ 的 i = 0; i < 5; ++i）
for i in range(5):
    print(i)

# while 迴圈
count = 0
while count < 5:
    print(count)
    count += 1
#range(5) 就是 [0, 1, 2, 3, 4]，不包含 5 本身。
def say_hello(name):
    print("Hello", name)

say_hello("Bob")
#def 開頭定義函式，後面參數跟 :，裡面還是靠縮排。