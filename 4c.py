f=open('file1.txt',"r")
total_lines=0
for lines in f:
	lines=lines.rstrip()
	total_lines+=1
f.close()
f=open('file1.txt',"r")
print("There are total",total_lines,"lines.")
last_lines=int(input("How many lines from last you want to print:"))
li_no=0
for lines in f:
	lines=lines.rstrip()
	li_no+=1
if li_no>(total_lines-last_lines):
    print(lines)

input()
