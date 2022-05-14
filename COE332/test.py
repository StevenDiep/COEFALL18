import random, uuid, datetime, json

userdata = { "data":[] }

def add_data(animal):
	userdata["data"].append(animal)



heads = ["snake", "raven", "lion", "bull", "eagle", "bunny"]

for i in range(0,100):	
	uid = str(uuid.uuid4())
	head = random.choice(heads)
	arms = random.randint(2,10)
	legs = random.randint(3,12)
	tails = random.randint(0,2)
	cdate = str(datetime.datetime.now())

	animal={}
	animal["uid"] = uid
	animal["head"] = head
	animal["arms"] = arms
	animal["legs"] = legs
	animal["tails"] = tails
	animal["timestamp"] = cdate

	print(json.dumps(animal))
	
	add_data(animal)


##print (json.dumps(userdata))

#for item in userdata:
#	print (item)

#for item in userdata['data']:
#	if (item.get('head') == 'snake'):
#		print (item)


with open("data_file.json", "w") as write_file:
    json.dump(userdata, write_file)


def getdata():
	with open("data_file.json", "r") as json_file:
		userdata == json.load(json_file)
#		print (userdata)
#		print (type(userdata))
	return userdata

	
test = getdata();
#print (test)
#print (type(test))

print ("/n/n/n/adding animals/n/n/n/")


#for item in userdata['data']:
#	if (item.get('head') == 'snake'):
#		print (item)
#        add_data(item)
