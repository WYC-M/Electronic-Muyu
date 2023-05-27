# 电子木鱼说明文档

## 一 简介

GitHub 项目主页 <https://github.com/WYC-M/Electronic-Muyu>   
GitHub 作者主页 <https://github.com/WYC-M>

本程序力求以最简单的界面，实现较为丰富的功能

本软件遵循 MIT 许可

## 二 用法

1 敲木鱼：按**空格**键，功德+1  

2 佛祖陪你笑：按**1**，功德-50  

3 抽奖：按**2**  

4 播放大悲咒：按**3**，功德+10 

![软件截图](https://wyc-m.github.io/pic/muyu-screenshot.png)


## 三 作者的悄悄话（奇妙小功能）

1 替换公告文本：在 `.ewf` 文件夹下新建 `text.txt` 并在文档内输入相关内容（64字符以内）
* 若要恢复默认文本，删除 `text.txt` 即可

2 替换大悲咒：在 `.ewf` 文件夹下将 `backgroundmusic.mp3` 替换成自己的音乐

3 替换功德文本：在设置界面选择 `1_自定义文字` 然后输入您想要替换的内容（64字符以内）
* 若要恢复默认文本，在设置界面选择 `2_恢复默认文字`即可

![设置](https://wyc-m.github.io/pic/muyu-config.png)

## 四 编译
如果您使用 Visual Studio 进行编译，请把项目属性页中的 `高级-高级属性-字符集` 设置为 `未设置`

![项目属性](https://wyc-m.github.io/pic/muyu-build.png)