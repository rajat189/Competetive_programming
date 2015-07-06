def is_pal(number):
  return str(number) == str(number)[::-1].strip('0')
def dec_to_bin(number):
  return int(bin(number)[2:])
def bin_pal(number):
  return is_pal(dec_to_bin(number))
def both(number):
  return is_pal(number) and bin_pal(number)
print(sum(number for number in range(1, 1000000, 2) if both(number)))