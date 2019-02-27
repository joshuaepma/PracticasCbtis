import numpy as np 

def function(x):
	return np.sum(x*x, axis=1)

def pso():
	lb = -10
	ub = 10

	n = 5 # number of variables
	nparts = 10 # number of partcles
	x = lb + np.random.random([nparts,n]) * (ub - lb) # genera matrix random
	v = np.zeros([nparts,n])

	fx = function(x)
	pbest = x.copy()
	fx_pbest = fx.copy()
	
	idx = np.argmin(fx_pbest)
	gbest = pbest[idx]
	fx_gbest = fx_pbest[idx]

	t = 0
	tmax = 100000
	W, C1, C2 = 0.7, 1.4, 1.4
	while t < tmax:
		
		v = W*v + C1*np.random.random([nparts,n])*(pbest - x) + C2*np.random.random([nparts,n])*(gbest - x)
		x += v
		fx = function(x)

		idx = fx < fx_pbest
		fx_pbest[idx] = fx[idx]
		pbest[idx] = x[idx]

		idx = np.argmin(fx_pbest)
		gbest = pbest[idx]
		fx_gbest = fx_pbest[idx]

		t += 1
	print gbest
	print fx_pbest



pso()