def LastNlines(fname, N): 
        with open('file1.txt') as file: 
          for line in (file.readlines() [-N:]): 
                print(line, end ='') 
    
if __name__ == '__main__': 
    fname = 'file1.txt'
    N = 3
    try: 
        LastNlines(fname, N) 
    except: 
        print('File not found')
