from hotqueue import HotQueue

q = HotQueue("queue", host="127.0.0.1",db=15)

@q.worker
def do_work(item):
	print(item)

print(len(q))

do_work()

