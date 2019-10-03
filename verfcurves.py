import numpy as np
import matplotlib.pyplot as plt

def first_curve():
	x=np.linspace(-2,3,100)
	y=x**(4/3)
	plt.plot(x,y,label='Numerator', linestyle='-')

def second_curve1():
	x=np.linspace(-3,3,100)
	y=(8+x)**(-2) 
	plt.plot(x,y,label='Denominator1(8)', linestyle='-')
   
def second_curve2():
	x=np.linspace(-3,3,100)
	y=(-9+x)**(-2)
	plt.plot(x,y,label='Denominator2(-9)', linestyle='-')
	
def x():
	x=np.linspace(-10,10,100)
	y = np.zeros(100)
	plt.plot(x,y,label='X Axis', linestyle='-')
	
first_curve() 
second_curve1()
second_curve2()
x()

plt.legend(loc='best')
plt.axis("equal")
plt.grid()
plt.show()
