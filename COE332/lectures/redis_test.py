import redis

rd = redis.StrictRedis(host='127.0.0.1', port=6333, db=0)
rd.set("100", "10")
print(rd.get("100"))
