import os
import glob
import subprocess;

EXE_NAME = "useless-log.exe"

def build():
    # working directory
    print("Current Working Directory = " + os.getcwd())

    # Note, this will only perform build/linking on the files in the current directory.
    cpp_files = glob.glob(os.getcwd() + "/*.cpp")
    subprocess.run(["clang", "-c"] + cpp_files)
    print("Building o files from " + str(cpp_files))

    o_files = glob.glob(os.getcwd() + "/*.o")
    subprocess.run(["clang"] + o_files + ["-o", EXE_NAME])
    print("Building executable from " + str(o_files))

    print("Built " + EXE_NAME)

def clean():
    cleanup_files = glob.glob(os.getcwd() + "/*.txt") + glob.glob(os.getcwd() + "/*.o") + glob.glob(os.getcwd() + "/*.exe")
    for file in cleanup_files:
        print("removing " + file + "...")
        os.remove(file)

    print("Done with cleanup.");

def run():
    print("Current working directory = " + os.getcwd())
    subprocess.run([EXE_NAME])