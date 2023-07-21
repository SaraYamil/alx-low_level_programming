#!/user/bin/python3

largest_pallindrome = 0

for i in rang(100, 1000):
       for j in rang(100, 1000):
       product = i * j
       if str(product) == str(product) [ ::-1] and product > largest_pallindrome
	    largest_pallindrome = product

#save the result in the file
with open( "102-result" , "w") as file :
	file.write(str(largest_pallindrome))
