import math 
def distance(coord1, coord2):
  return math.sqrt(pow(coord1[0] - coord2[0], 2) + pow(coord1[1] - coord2[1], 2))


def RectangleArea (strArr):
  
  numArr = map(strArr)

  width = distance(numArr[0], numArr[1])
  height = distance(numArr[1], numArr[2])
  

  return width * height
print(RectangleArea(["(0 0)", "(3 0)", "(0 2)", "(3 2)"]))