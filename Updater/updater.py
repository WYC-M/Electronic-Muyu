import os
import wget

os.remove("muyu.exe")
print("电子木鱼正在更新, 请稍候...")
url = 'https://wyc-m.github.io/update/muyu.exe'
wget.download(url, out='muyu.exe')
os.system("start muyu.exe")