import cv2
import numpy as np
import sys
from numpy import asanyarray
from numpy import savetxt

image = cv2.imread('modi.jpg')
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

lower = 10

coords = np.column_stack(np.where(gray<=lower))
savetxt('data.txt', coords, fmt='%i', delimiter=' ')
np.set_printoptions(threshold=sys.maxsize)

print((coords))