dospath = input("input the path for your preffered drive of your dos emulation software (e.g. /home/username/dos): ")

import getpass
username = getpass.getuser()
dospath = dospath.replace("~","/home/" + username)

import os

os.environ['PATH'] += ':/bin:/usr/bin'

os.system("touch " + dospath + "/INPUT.TXT")
os.system("touch " + dospath + "/OUTPUT.TXT")

os.system("git clone https://github.com/eshnd/dosemu-linux dl")


os.system('{ echo "c = '+dospath+'"; cat dl/python/main.py; } > temp && mv temp dl/python/main.py')
