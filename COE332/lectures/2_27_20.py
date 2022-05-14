from multiprocessing import Queue

q = queue.Queue()
q.put(5)
q.put(7)
q.put('A')
print(q)
