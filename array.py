a = [1,2,3]
even_sum = []
odd_sum = []
for i in a:
    if i%2 == 0 :
        even_sum.append(i)
    else:
        odd_sum.append(i)

print(even_sum , sum(even_sum))
print(odd_sum,sum(odd_sum))
