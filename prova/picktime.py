import re
flag = 1
f = open("file.txt", "r")
for line in f:
    match = re.search("(RDTSC)", line)
    match2 = re.search("RETIRED_FLOPS_DOUBLE_ALL",line)
    if match and flag == 1:
        runtime = float(line.split()[5])
        flag = 0
    if match2:
        retired = float(line.split()[5])

print(runtime)
print(retired)
