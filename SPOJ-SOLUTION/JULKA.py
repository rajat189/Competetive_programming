iters = 10

while iters:
    iters -= 1
    
    k_plus_d = input()                  # this is the sum
    k_minus_d = input()                 # the diff
    
    k = (k_plus_d + k_minus_d) / 2
    d = (k_plus_d - k)
    
    print k
    print d