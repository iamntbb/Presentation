import numpy as np
import matplotlib.pyplot as plt
from matplotlib.patches import Polygon

def first_curve():
	x=list(range(-2,3))
	y=[(3/4)*i**(4/3) for i in x]
	plt.plot(x,y,label='Numerator', linestyle='-')

def second_curve1():
	x=list(range(-3,3))
	y=[(8+i)**(-2) for i in x]
	plt.plot(x,y,label='Denominator1(8)', linestyle='-')
   
def second_curve2():
	x=list(range(-3,3))
	y=[(-9+i)**(-2) for i in x]
	plt.plot(x,y,label='Denominator2(-9)', linestyle='-')
	
def x():
	x=list(range(-7,7))
	y=[0 for i in x]
	plt.plot(x,y,label='X Axis', linestyle='-')
	
first_curve() 
second_curve1()
second_curve2()
x()

plt.legend(loc='best')
plt.axis("equal")
plt.grid()
plt.show()
