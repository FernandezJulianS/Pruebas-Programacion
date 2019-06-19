from sys import stdin,stdout

a=stdin.read()
lineas=a.split("\n")
for i in range(0,len(lineas)):
	stdout.write(str(i))
	stdout.write("\n")
