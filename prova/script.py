import os
import re
sum = 0
sd = 0
n = 20
l = [None]*n
j = 0
for i in range(0,n):
    cmd = "likwid-perfctr -g FLOPS_DP -C S1:0 -m ./naive_OMP > fileOMP.txt"
    os.system(cmd)
    f = open("fileOMP.txt", "r")
    for line in f:
        match = re.search("(RDTSC)", line)
        if match:
            a = float(line.split()[5])
            l[j] = a
            j = j + 1

for i in range(0,n):
    sum = sum + l[i]

avg = sum/n
for i in range(0,n):
    sd = sd + pow(l[i]-avg,2)

sd = sd/(n-1)

print(avg)
print(sd)
