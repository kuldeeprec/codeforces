
def convert24(str1):

	if str1[-2:] == "am" and str1[:2] == "12":
		return "00" + str1[2:-2]
		
		
	elif str1[-2:] == "am":
		return str1[:-2]
	
	
	elif str1[-2:] == "pm" and str1[:2] == "12":
		return str1[:-2]
		
	else:
		return str(int(str1[:2]) + 12) + str1[2:5]

def hours(str):
    str1=convert24(str[:7])
    str2=convert24(str[8:])
    ans = (24-(int(str1[:2])-int(str2[:2])))*60-((int(str1[3:5])-int(str2[3:5])))
    return ans
print(hours("01:23am-01:08am"))
