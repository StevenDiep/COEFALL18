import math
import numpy as np
import json

x = np.arange(0, 2*math.pi, .01)
y1 = x*x
y2 = x*x*x


numbers = [];
for i in range(len(x)):
	numbers.append({'x':x[i], 'x_squared':y1[i], 'x_cubed':y2[i]})

with open('data2.txt','w') as file:
	json.dump(numbers,file)
