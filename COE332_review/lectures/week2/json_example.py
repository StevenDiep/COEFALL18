import json
data = {}

data['people'] = []
data['people'].append({
'name': 'Dan',
'website': 'tacc.utexas.edu',
'from': 'Texas'
})

data['people'].append({
'name': 'Larry',
'website': 'google.com',
'from': 'Michigan'
})

data['people'].append({
'name': 'Tim',
'website': 'apple.com',
'from': 'Alabama'
})

with open('data.txt', 'w') as outfile:
	json.dump(data,outfile)