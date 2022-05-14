import json
import numpy as np

x = np.linspace(0, 2*np.pi, 50)
xlist = np.ndarray.tolist(x)

datax = {}
datax['x_values'] = [];
for xv in x:
	datax['x_values'].append({'x': xv, 'x_squared': xv*xv, 'x_cubed': xv*xv*xv})


with open('data.txt', 'w') as outfile:
	json.dump(datax, outfile)
