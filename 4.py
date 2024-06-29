maxx = 0
#generate all products of two three digit numbers.
for a in range(100, 1000):
	for b in range(100, 1000):
		product = a * b
		p_string = str(product)
		if p_string == p_string[::-1]:
			if product > maxx:
				maxx = product
				
print(maxx)
input()