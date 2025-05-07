tickets = [{"train_no": "123", "time": "08:30", "price": 700},
           {"train_no": "125", "time": "09:00", "price": 700},
           {"train_no": "127", "time": "09:30", "price": 750}]
#ti
print("=== 班次清單 ===")
for ticket in tickets:
    print(f"車次: {ticket['train_no']} | 出發: {ticket['time']} | 價格: {ticket['price']} 元")
number = int(input("請輸入想查詢的票券編號(1~3): "))- 1
if 0 <= number < len(tickets):
    selected = tickets[number]
    print(f"你選擇的是:\n車次: {selected['train_no']} | 出發: {selected['time']} | 價格: {selected['price']}")
else:
    print("輸入錯誤,請輸入1~3的數字")
new_no = int(input("請輸入新車次: "))
new_time = int(input("請輸入出發時間: "))
new_price = int(input("請輸入票價: "))
tickets.append({"train_no": new_no, "time": new_time, "price": new_price})
print("新增成功!")
for ticket in tickets:
    print(f"車次: {ticket['train_no']} | 出發: {ticket['time']} | 價格: {ticket['price']} 元")