import redis
import json
from hotqueue import HotQueue

q = HotQueue("queue", host="127.0.0.1",port=6222, db=15)

q.put(1)
q.put("abc")
q.put(['1', 2, {'key': 'value'}, '4'])

@q.worker
def echo(item):
	print(str(item))
