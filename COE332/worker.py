
from flask import Flask
from hotqueue import HotQueue
import json, redis, datetime, uuid


rd = redis.StrictRedis(host='127.0.0.1', port=6333, db=7)
q = HotQueue("queue", host="127.0.0.1", port=6333, db=15)

def get_data(datafilename):
	with open(datafilename) as json_file:
		userdata = json.load(json_file)
	return userdata

mydata = get_data("data.txt")

@q.worker
def do_work(item):
	#Wrench, checking if the job is yours
	if item['command'] == 'sd33896':
		#If the parameter I'm looking for matches snake
		if item['parameter'] == 'snake':
			#Update status of your job to in progress
			item['status'] = 'In Progress'
			uid = item['uid']
			rd.set(uid, json.dumps(item))
			
			#Perform job
			for animal in mydata['animals']:
				if (animal['head'] == item['parameter']):
					print("A " + str(item['parameter']) + " has "+ str(animal['arms']) + " arms.")
			
			#Update Status of job to complete
			item['status'] = 'Complete'
			rd.set(uid, json.dumps(item))
		else:
			q.put(item)
	else:
		q.put(item)

do_work()

