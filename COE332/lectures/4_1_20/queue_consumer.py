from hotqueue import HotQueue

q = HotQueue("queue", host="127.0.0.1",db=15)

q.clear()

print(len(q))

for item in q.consume():
	print(item)

