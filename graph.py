import numpy as np
import matplotlib.pyplot as plt

data1 = np.loadtxt('data.txt')
data2 = np.loadtxt('data0.txt')

plt.figure()
plt.plot(data1[:,0], data1[:,1], label='valor final de u')
plt.plot(data2[:,0], data2[:,1], label ='valor inicial de u')

plt.legend()
plt.xlabel("x")
plt.ylabel("y")
plt.savefig('grafica.png')
plt.show()


