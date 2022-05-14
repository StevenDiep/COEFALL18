import json

def read_json(file_name):
	with open(file_name) as json_file:
		data = json.load(json_file)
		for p in data['animals']:
	  		print('Animal number: ' + p['number'])
	  		print('Num heads: ' + p['head'])
	  		print('Num arms: ' + p['arms'])
	  		print('Num legs: ' + p['legs'])
	  		print('Num tails: ' +p['tails'])
	  		print()

def main():
  file_name = 'data.txt'
  read_json(file_name)
main()
