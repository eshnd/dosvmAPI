dospath = input("input the path for your preffered drive of your dos emulation software (e.g. /home/username/dos): ")

import getpass
username = getpass.getuser()
dospath = dospath.replace("~","/home/" + username)

import os

os.environ['PATH'] += ':/bin:/usr/bin'

os.system("touch " + dospath + "/INPUT.TXT")
os.system("touch " + dospath + "/OUTPUT.TXT")

os.system('''{ echo "c = '''' + dospath + ''''"; cat ../backend/main.py; } > temp && mv temp ../backend/main.py''')

os.system("mv ../backend ../execs/* " + dospath)

backpath = dospath + "/backend"

os.system('''printf '\nalias dosemu-linux="dosbox & python3 ''' + backpath + '''/main.py & wait"' >> ~/.bashrc''')
os.system('''printf '\nalias dosemu-linux="dosbox & python3 ''' + backpath + '''/main.py & wait"' >> ~/.zshrc''')
