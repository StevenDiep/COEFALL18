

class Job:
	def __init__(self, uid, status, command, parameter, time):
		self.uid = uid
		self.status = status
		self.command = command
		self.parameter = parameter
		self.time = time
		self.start_time = 0;
		self.end_time = 0;
		self.output = 0;
	
	def __str__(self):
		return "Job ID: " + str(self.uid)

	def change_status(self, new_status):
		self.status = new_status
		return new_status	
	
	def return_arms(self, mydata):
		for animal in mydata['animals']:
			if (animal['head'] == item['parameter']):
				print("A " + str(item['parameter']) + " has "+ str(animal['arms']) + " arms.")


