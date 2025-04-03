# dosemu-api
access host computer

The gfx folder can be repurposed to be a dos graphics library for beginners who don't know how to use BIOS interrupts. I coded it to be as easy as possible so that my friends could contribute code to the GUI.
# how to install
- THIS IS FOR LINUX USERS ONLY (it's possible to install on mac and windows but you're gonna have to do it manually)
- clone the repo and cd into the ```ins``` folder
- run ```source install.sh```
- follow the installation instructions
- once it's done, ```source``` either your ```.bashrc``` or ```.zshrc``` depending on what shell you use (only bash and zsh are supported by the install script)
- run ```dosemu-linux```
- boom! it's installed
# manual installation
- this isn't gonna be super technical because idk what OS you're using
- download this repo and move the contents of the "execs" folder into your dos folder
- move the backend folder into your dos folder as well
- open main.py in a code editor and add a "c" variable at the very top which is defined by the location of your dos folder
- Now run the python file and open dosbox at the same time
- mount c: and go into it
- you have working executable files and can run commands in whatever shell you use!
- you're gonna have to do the whole process of starting the python file manually and can only use windows commands, but you can optimize it more for your OS if you want
# for serious dos devs
- a lot of this project was made for fun as a challenge, but for serious developers who want to use this:
- move SRS.C from the linux directory into your project files
- add ```#include "SRS.C"``` to your headers in your project
- make 2 files in C, INPUT.TXT and OUTPUT.TXT
- move the backend directory to C
- run python file in backend and dos emulation software at the same time
- you can now access modern tech from dos
