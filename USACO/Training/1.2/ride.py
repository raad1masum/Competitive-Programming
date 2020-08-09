"""
ID: piraadw1
LANG: PYTHON3
TASK: ride
"""
fin = open ('ride.in', 'r')
fout = open ('ride.out', 'w')

s1 = fin.readline()[:-1]

s2 = fin.readline()[:-1]

r1 = 1
for ch in s1:
    r1 *= ord(ch)-64

r2 = 1
for ch in s2:
    r2 *= ord(ch)-64

if r1%47==r2%47:
    s = "GO\n"
else:
    s = "STAY\n"

fout.write(s)
fout.close()
