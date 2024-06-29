#generate fibonacci sequence up to 4,000,000 (inclusive).
a, b = 1, 1
esumm = 0 #sum of the even fibonacci numbers
while True:
	c = a + b
	a = b
	b = c

	if b > 4000000: break
	if(b % 2 == 0): esumm += b
print(esumm)