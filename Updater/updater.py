import os
import wget

print("========================")
print("电子木鱼 更新器 By WYC-M")
print("========================")
print()

os.remove("muyu.exe")
print("电子木鱼正在更新, 请稍候...")
url = "https://wyc-m.github.io/update/muyu/muyu.exe"
wget.download(url, out="muyu.exe")
os.system("start muyu.exe")