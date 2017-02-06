git install note
=================

[dong@localhost ~]$ git --version
git version 1.8.3.1
[dong@localhost ~]$ 

[dong@localhost ~]$ pwd
/home/dong
[dong@localhost ~]$ ssh-keygen -t rsa -C "zhd0305"
Generating public/private rsa key pair.
Enter file in which to save the key (/home/dong/.ssh/id_rsa): 
Created directory '/home/dong/.ssh'.
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in /home/dong/.ssh/id_rsa.
Your public key has been saved in /home/dong/.ssh/id_rsa.pub.
The key fingerprint is:
ac:71:f8:c3:a9:20:78:78:75:3d:e2:3a:18:81:57:38 zhd0305
The key's randomart image is:
+--[ RSA 2048]----+
|   .             |
|  E .            |
| . o             |
|. o    +         |
| . .. = S        |
| o.. o B o       |                                                     
|o +o. o =        |                                                     
| o...o . .       |                                                     
|    ...          |                                                     
+-----------------+                                                     
[dong@localhost ~]$ ls
a.out    Documents  hello.c  Pictures  Templates  test2.c  test.c
Desktop  Downloads  Music    Public    test       test3.c  Videos
[dong@localhost ~]$ ls ./.ssh
id_rsa  id_rsa.pub
[dong@localhost ~]$ more ./.ssh/id_rsa.pub
ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCzBUaBjdhCmm7t2sbe0get9K05ogUtXCzn
klO5EfhiUpmpg8khsblubTtI93VuxB7iLMZ2NIF5suYH4y23rqJRzPdX/ePDBNBwCFqAKIRq
stJBzok125Xh+Ma+unlKAFqI4LEwWxzEg4So9RWq+wO8LAfVYezYcDpo6C23ZiNVj1J9dVAJ
WKlelhnYctOYsTYxW/Hl0P9GPQIQl68A/ayO/VUSk58Y1/WPAdg7jrV3v498FJYgBEeiD95V
jv2LLcOBINBXkooKVMqpsKUbZHBQP8Xc/uKoFSIFLjKvrIUCxVsgOz12u2cYR3JfJJfWXLj5
jJYthYQFkvXxILVXdSQ7 zhd0305
[dong@localhost ~]$ 

[dong@localhost ~]$ ll
total 40
-rwxrwxr-x. 1 dong dong 8555 Jan 22 09:58 a.out
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Desktop
drwxrwxr-x. 2 dong dong   34 Feb  5 10:58 docs
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Documents
drwxr-xr-x. 2 dong dong   52 Feb  4 14:39 Downloads
-rw-rw-r--. 1 dong dong   59 Jan 17 22:09 hello.c
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Music
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Pictures
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Public
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Templates
-rwxrwxr-x. 1 dong dong 8502 Jan 17 13:02 test
-rw-r--r--. 1 root root  275 Jan 21 15:10 test2.c
-rw-rw-r--. 1 dong dong  334 Jan 22 09:58 test3.c
-rw-rw-r--. 1 dong dong   67 Jan 21 14:24 test.c
drwxr-xr-x. 2 dong dong    6 Sep  3 16:40 Videos

[dong@localhost ~]$ mkdir learngit
[dong@localhost ~]$ cd learngit/

[dong@localhost learngit]$ pwd
/home/dong/learngit

[dong@localhost learngit]$ git init
Initialized empty Git repository in /home/dong/learngit/.git/
[dong@localhost learngit]$ ll
total 0
[dong@localhost learngit]$ 


[dong@localhost ~]$ git config --global user.name "zhd0305"

git clone git@github.com:zhd0305/hello-world.git

[dong@localhost learngit]$ ll
total 0

[dong@localhost learngit]$ git clone git@github.com:zhd0305/hello-world.git
Cloning into 'hello-world'...
The authenticity of host 'github.com (192.30.253.112)' can't be established.
RSA key fingerprint is 16:27:ac:a5:76:28:2d:36:63:1b:56:4d:eb:df:a6:48.
Are you sure you want to continue connecting (yes/no)? yes
Warning: Permanently added 'github.com,192.30.253.112' (RSA) to the list of known hosts.
remote: Counting objects: 60, done.
remote: Total 60 (delta 0), reused 0 (delta 0), pack-reused 60
Receiving objects: 100% (60/60), 15.74 KiB | 5.00 KiB/s, done.
Resolving deltas: 100% (22/22), done.
[dong@localhost learngit]$ ll
total 4
drwxrwxr-x. 4 dong dong 4096 Feb  5 11:23 hello-world
[dong@localhost learngit]$ 

[dong@localhost learngit]$ ll
total 4
drwxrwxr-x. 4 dong dong 4096 Feb  5 11:23 hello-world
[dong@localhost learngit]$ ll /hello-world
ls: cannot access /hello-world: No such file or directory

[dong@localhost learngit]$ ll ./hello-world
total 28
-rw-rw-r--. 1 dong dong   24 Feb  5 11:23 ADT
drwxrwxr-x. 2 dong dong 4096 Feb  5 11:23 code
-rw-rw-r--. 1 dong dong  924 Feb  5 11:23 CPL study notes.rst
drwxrwxr-x. 2 dong dong   72 Feb  5 14:33 docs
-rw-rw-r--. 1 dong dong  805 Feb  5 11:23 index_old.rst
-rw-rw-r--. 1 dong dong  789 Feb  5 11:23 index.rst
-rw-rw-r--. 1 dong dong  579 Feb  5 11:23 README.md
-rw-rw-r--. 1 dong dong  627 Feb  5 11:23 章节编号.rst
[dong@localhost learngit]$ cd ./hello-world/docs
[dong@localhost docs]$ ll
total 4
-rw-rw-r--. 1 dong dong 3656 Feb  5 11:24 git install notes.rst
[dong@localhost docs]$ git add git\ install\ notes.rst
[dong@localhost docs]$ git commit -m "add a notes"
[master 6844faf] add a notes
 1 file changed, 93 insertions(+)
 create mode 100644 docs/git install notes.rst
[dong@localhost docs]$ git remote -v
origin  git@github.com:zhd0305/hello-world.git (fetch)
origin  git@github.com:zhd0305/hello-world.git (push)
[dong@localhost docs]$ git push origin master
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (4/4), 1.78 KiB | 0 bytes/s, done.
Total 4 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local objects.
To git@github.com:zhd0305/hello-world.git
   ebb452a..6844faf  master -> master
[dong@localhost docs]$ 

