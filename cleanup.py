#clean up the repository to match testcase format with OJ
from shutil import rmtree as rm
import os, zipfile
def main():
    for root, dirs, _ in os.walk('.'):
        if "in" in dirs:
            with zipfile.ZipFile(root+"/testcases.zip", "w") as zf:
                i = 1
                for f in os.listdir(root+'/in'):
                    zf.write(root+'/in/'+f, '%d.in'%i)
                    i += 1
                i = 1
                for f in os.listdir(root+'/out'):
                    zf.write(root+'/out/'+f, '%d.out'%i)
                    i += 1
                zf.close()
            rm(root+"/in")
            rm(root+"/out")

if __name__ == "__main__":
    main()

