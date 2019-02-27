import numpy as np


def function(x):
	return x*x

def es():

	t = 0 # generacion
	x = np.random.random() #individuo
	fx = function(x) # evaluacion
	
	while(t < 10000):
		xp = x + np.random.normal()
		fxp = function(xp)
		if fxp < fx:
			x = xp
			fx = fxp
		t += 1

	print(fx)

es()
