# c = "/home/eshnd/projects/dosemu-linux/"
outfile = c + "/OUTPUT.TXT"
infile = c + "/INPUT.TXT"

f = open(outfile, "w")
f.write("")
f.close()

while (True):
    f = open(infile, "r")
    cmd = f.read()
    if "exit" in cmd:
        import sys
        sys.exit()
    
    try:
        import subprocess
        result = subprocess.check_output(cmd, shell=True, text=True)
    except:
        result = "that's not a valid command"

    f = open(outfile, "w")
    f.write(result)
    f.close()
