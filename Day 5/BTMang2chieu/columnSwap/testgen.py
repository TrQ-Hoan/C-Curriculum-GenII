from random import randint as ri
from subprocess import call
from zipfile import ZipFile as zf
import os

def inputGen(f):
    n,m = ri(1,100), ri(1,100)
    f.write("%d %d %d %d\n"%(n,m, ri(0,n), ri(0,m)))
    for _ in range(n):
        for __ in range(m):
            f.write("%d "%ri(0,100000))
        f.write("\n")
    f.close()

def outputGen(fi, fo):
    call("./sol",stdin=fi, stdout=fo)

def zipAndClean():
    files = os.listdir()
    # zip *.in, *.out into testcase.zip
    with zf("testcase.zip", "w") as testcase:
        for fileName in files:
            ext = os.path.splitext(fileName)[-1]
            if ext in [".in", ".out"]:
                testcase.write(fileName)
    # delete all files in dir not in whilelist
    whiteList = ["readme.md", "sol.cpp", "testcase.zip", "testgen.py"]
    for fileName in files:
        if fileName not in whiteList:
            os.remove(fileName)

def main():
    # compile sol.cpp
    call(["g++", "-g", "-O2", "-std=c++17", "sol.cpp", "-o", "sol"])
    numberOfTestcase = 10
    for i in range(1,numberOfTestcase+1):
        fi = open("%d.in"%i, "w")
        inputGen(fi)
        fi = open("%d.in"%i, "r")
        fo = open("%d.out"%i, "w")
        outputGen(fi, fo)
        fi.close()
        fo.close()
    zipAndClean()
    
if __name__ == "__main__":
    main()

