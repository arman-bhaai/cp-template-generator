#! python3
import os
import shutil

source_file = "template1.cpp"

dest_dir = "Codes"
os.mkdir(dest_dir)
names = "ABCDEFGHIJKLMNOPQRST"

for name in names:
	filename = dest_dir+ "\\" + name+".cpp"
	shutil.copy(source_file, filename)