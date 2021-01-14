
t = int(input())
while t:
	n = str(input())
	l = len(n)
	flag = False
	
	for i in range(0, l):
		# print (flag == True)
		sol = n[(l-1)-i]
		
		if flag == False:
			if int(sol) != 0:
				flag = True
				print(sol, end="")
		elif(flag == True):
			print(sol, end="")
		# print (flag)
	t -= 1
	print()