#practical 6a

f = open("file1.txt")
print(f.read())
f.close()

#practical 6b

f = open('file1.txt','a')
f.write("Hello good morning")
f.close()

f = open("file1.txt")
print(f.read())
f.close()

#practical 6c

# Python implementation to 
# read last N lines of a file 

# Function to read 
# last N lines of the file 
def LastNlines(fname, N): 
	# opening file using with() method 
	# so that file get closed 
	# after completing work 
	with open(fname) as file: 
		
		# loop to read iterate 
		# last n lines and print it 
		for line in (file.readlines() [-N:]): 
			print(line, end ='') 


# Driver Code: 
if __name__ == '__main__': 
	fname = 'file1.txt'
	N = 3
	try: 
		LastNlines(fname, N) 
	except: 
		print('File not found')

a = 5
b = 6
for x in range(0,9):
        print('*')


for x in range(0,6):
        c = a+b
        print(c)
        
