1. create repository

2. set SSH key
	
	ssh-keygen -t rsc -C "email"#modify email to your github account

3. see id\_rsc.pub	in home

4. add SSH key in SSH and GPG keys
	copy the idrsc.pub to the key chart

5. local to github:
	
	git init #在此文件夹生成一个.git隐藏文件；
	
	git add . #将文件添加到缓冲区 . 代表所有文件

	git add 文件名 #添加指定文件

	git status #查看现在的状态

	git commit -m "注释" #提交添加到缓存区的文件

	git remote add origin XXX@XX/test.git #https://github.com/XXX/Qv2ray.git

	git push origin master ##上传


git 删除 源
	git remote rm origin
	git remote add origin [url]（ssh源）

or 修改
	git remote origin set-url[url]（ssh源）

or 修改config文件
	git文件夹，config文件，编辑，替换项目地址
	
使用token
	username
	token

可能遇到问题
如果遇到报错fatal: repository 'xxx.git/' not found，即没找到'xxx.git'。

原因：repository地址被更改了。比如现在要更改repository名称：由原来的“https://XXX@XXX/a.git”改为现在的 “https://xxx@xxx/b.git”

解决方法：

方式1：

git remote set-url origin https://xxx@xxx/B.git   # 设置远程url为修改后的地址
git remote -v    # 查看remote链接


方式2：

git remote rm origin # 移出旧的http的origin
git remote add origin https://xxx@xxx/B.git # 添加新的git方式的origin 
git remote -v    # 查看remote链接




更新仓库

git status

git add -A

git commit -a -m "update" ： 能提交修改过，但是没有添加到缓存区的文件（修改过的就能提交）

git push origin master -f


删除github中的某个文件(夹)

 git pull origin master  # 将远程仓库里面的项目拉下来
 dir  # 查看有哪些文件夹
 git rm -r --cached picture  # 删除picture文件夹
 git commit -m "删除了picture文件夹"  # 提交,添加操作说明
 git push origin master  # 将本次更改更新到github项目上去


