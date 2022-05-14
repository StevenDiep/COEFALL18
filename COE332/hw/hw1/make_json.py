from random import seed
from random import randint
from random import randrange
import json
 
seed(1)

def create_animal():
   head = str(randint(1, 5))
   arms = str(randrange(2, 10, 2))
   legs = str(randrange(3, 9, 3))
   tails = str(randint(1, 2))
 
   new_animal = head + arms + legs + tails
   
   return new_animal

def create_animals(num_animals):
 past_animals = []
 while len(past_animals) != num_animals:
   
 
   new_animal = create_animal()
   if new_animal not in past_animals:
     past_animals.append(new_animal)
 
 return past_animals

def determine_head(num):
 data = {'1': 'snake',
	 '2': 'bull',
	 '3': 'lion',
	 '4': 'raven',
	 '5': 'bunny'}
 
 return data[str(num)]

def create_data_struct(animal_list):
 data = {}
 data['animals'] = []
 for i in range(len(animal_list)):
   current_animal = animal_list[i]
   data['animals'].append({
	'number': str(i+1),
	'head': determine_head(int(current_animal[0])),
	'arms': current_animal[1],
	'legs': current_animal[2],
	'tails': current_animal[3]})
 
 return data

def main():
	animals  = create_animals(20)
	print(animals)
	data = create_data_struct(animals)
	
	with open('data.txt', 'w') as outfile:
	  json.dump(data, outfile)
main()
