# Git
###### tags: `git`
## upload flow
1. 先在github中建立一個新專案，並輸入指令clone到本地端
    ```c 
    git clone https://github.com/WeiCheee/projects.git
    ```
2. 本地端會有以連接的資料夾，將要上傳的檔案拉進資料夾
    ```c
    cd projects
    ```
3. 觀看資料夾狀態
    ```c
    git status
    ```
4. 加進本地端資料夾
    ```c
    git add .
    ```
5. commit到git裡面
    ```c
    git commit -m "whatever"
    ```
6. push上去github
    ```c
    git push
    ```
7. __remove files__
    ```c
    git rm --cached ReleaseEN/ENTool/FWReleaseTool/AutoRun/E992001
    ```

---
# git版本控制
- [基本指令及安裝1](https://ihower.tw/git/basic.html?fbclid=IwAR0tLr3bRigYtLh0UgGM9-u_yM1Rl_f4zi2UsrgFDBaPg5iHR9PhpxP6ke4)  
- [基本指令及安裝2](https://blog.techbridge.cc/2018/01/17/learning-programming-and-coding-with-python-git-and-github-tutorial/?fbclid=IwAR3DggozDRO5UIqrc3eDyOxvc75sz3gGj-avCY0WPUQ1p7VywdlB1frKTPk)