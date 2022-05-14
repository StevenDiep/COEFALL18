import json
with open('data.txt') as json_file:
	data = json.load(json_file)
	for p in data['x_values']:
		print('x: ' + str(p['x']))
		print('x^2: ' + str(p['x_squared']))
		print('x^3: ' + str(p['x_cubed']))
		print('')
