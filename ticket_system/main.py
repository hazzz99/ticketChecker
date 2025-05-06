from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import time
from datetime import datetime

# 初始化瀏覽器
options = webdriver.ChromeOptions()
options.add_argument('--start-maximized')
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=options)

# 打開高鐵官網
driver.get("https://www.thsrc.com.tw")
time.sleep(2)  # 等待頁面載入

# 選擇出發站/到達站
Select(driver.find_element(By.ID, "selectStation01"))\
    .select_by_visible_text("高雄")
Select(driver.find_element(By.ID, "selectStation02"))\
    .select_by_visible_text("台中")

# 選擇今天日期與時間
now = datetime.now()
date_str = now.strftime("%Y/%m/%d")
driver.find_element(By.ID, "toTimeInputField" ).clear()
driver.find_element(By.ID, "toTimeInputField").send_keys(date_str)
Select(driver.find_element(By.ID, "toTimeTable"))\
    .select_by_visible_text("09:00")

# 點擊查詢按鈕
driver.find_element(By.ID, "queryForm\"").submit()
time.sleep(3)

# 抓取查詢結果表格（簡單示範）
results = driver.find_elements(By.CSS_SELECTOR, ".resultTable tbody tr")

print("\n=== 查詢結果 ===")
for row in results:
    cols = row.find_elements(By.TAG_NAME, "td")
    if len(cols) >= 5:
        train_no = cols[0].text
        dep_time = cols[1].text
        arr_time = cols[2].text
        price = cols[4].text
        print(f"車次: {train_no} | 出發: {dep_time} | 抵達: {arr_time} | 票價: {price}")

input("\n按 Enter 結束程式...")
driver.quit()
