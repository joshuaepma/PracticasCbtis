import numpy as np

def function(x):
	return np.sum(x*x, axis=1)

CR = 0.8
F = 0.5
mu = 10
n = 5
lb = -5.0
ub = 5.0
P = lb + np.random.random([mu,n]) *(ub-lb)

fp = function(P)

t= 0
T = 1000
u = np.zeros(n) # guardar cruza y mutacion

while t < T:
	for i in range(mu):
		# mut and rec
		r1, r2, r3 = np.random.permutation(mu)[:3]
		irand = np.random.randint(n)
		for j in range(n): # diferentes dimensiones
			if np.random.random() < CR or j==irand: # 0-1
				# idx = np.argim(fp) best/1
				u[j] = P[r3,j] + F*(P[r1,j] - P[r2,j])
				if u[j] > ub or u[j] < lb: # 
					u[j] = (P[r1,j] + P[r2,j] + P[r3,j])/3.0
			else:
				u[j] = P[i,j]
		fu = function(np.array([u]))
	if fu[0] < fp[i]:
		fp[i] = fu[0]
		P[i] = u
	t += 1


idx = np.argmin(fp)
print P[idx]
print 



