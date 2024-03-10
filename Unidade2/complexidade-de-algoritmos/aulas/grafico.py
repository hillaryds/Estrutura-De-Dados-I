import numpy as np
import matplotlib.pyplot as plt


n = np.arange(1,10)

Tn = n #melhor algoritmo
Tn2 = n ** 2 
Tlog = np.log(n)

plt.plot(Tn)
plt.plot(Tn2)
plt.plot(Tlog)
plt.legend(['O(n)', 'O(n²)', 'O(logn)'])
plt.xlabel('Entrada')
plt.ylabel('Complexidade de tempo')