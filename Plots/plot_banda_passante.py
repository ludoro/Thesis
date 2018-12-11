import matplotlib.pyplot as plt
import numpy as np

"""
Y values with script and N:0-k with k number of threads.
"""
plt.xticks(np.arange(1,25,1))
data = [4137.8, 6377.8, 8593.325, 10193.825, 10333.075, 10530.25, 11469.625,
            12184.95, 12764.45, 13600.325, 14297.199999999999, 15216.4, 15706.55,
            16321.45, 16606.45, 17175.175, 17385.125, 17579.3, 17595.2,
            17724.42, 17436, 17544.67, 17803.225, 18081.8]
yticks = [min(data)]
for i in sorted(data[0:]):
  if i-yticks[-1] > 800:
    yticks.append(i)

plt.plot(data, '-bo')
plt.ylabel("Bandwidth [Mb/s]", fontsize=12)
plt.xlabel("Number of threads", fontsize=12)
plt.yticks(yticks)
plt.savefig("Banda_passante.png")
plt.show()
