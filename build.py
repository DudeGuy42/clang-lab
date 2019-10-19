import os
import glob
import subprocess;

EXE_NAME = "useless-log.exe"
# working directory
print("Current Working Directory = " + os.getcwd())

cpp_files = glob.glob(os.getcwd() + "/*.cpp")
subprocess.run(["clang", "-c"] + cpp_files)

o_files = glob.glob(os.getcwd() + "/*.o")
subprocess.run(["clang"] + o_files + ["-o", EXE_NAME])

print("Built " + EXE_NAME)
