import json

x=[];
y1=[];
y2=[];

with open('data2.txt') as json_file:
	numbers = json.load(json_file)
	for p in numbers:
		x.append(p['x'])
		y1.append(p['x_squared'])
		y2.append(p['x_cubed'])

print(y1)
