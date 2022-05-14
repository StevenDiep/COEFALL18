import redis

def tot_primes(n):
   """ Returns the total number of primes less than or equal to `n`."""
   primes = [2]
   if n < 2:
    return 0
   for i in range(2, n+1):
     for j in range(2, i):
       if (i % j == 0):
         break
       if j == i-1:
         primes.append(i)
   return len(primes)

def store_tot_primes_redis(max=100):
  for i in range(2, max+1):
    num_primes = tot_primes(i)
    rd.set(str(i), str(num_primes))


rd = redis.StrictRedis(host='127.0.0.1', port=6200, db=0)
#store_tot_primes_redis()
store_tot_primes_redis(20)
for i in range(20):
  print("For i = " + str(i) + " there are " + str(rd.get(str(i))) + " prime numbers")

