def convert24(str1):
    if str1[-2:] == "AM" and str1[5:7] == "AM":
        return (abs((int(str1[0:2])-int(str1[9:11]))*60) + abs(int(str1[3:5])-int(str1[12:14])))
           
    elif str1[-2:] == "PM" and str1[5:7] == "PM":
        return (abs((int(str1[0:2])-int(str1[9:11]))*60) + abs(int(str1[3:5])-int(str1[12:14])))
         
    elif str1[-2:] == "PM" and str1[5:7] == "AM":
        return str1[:-2]
          
    else:
          
        return str(int(str1[:2]) + 12) + str1[2:8]
  
# Driver Code        
print(convert24("08:05:45 PM"))