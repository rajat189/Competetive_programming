import string
def checkio(data):
    if len(data)<10:
        return False
    a=b=c=False
    for i in data:
        if i in string.ascii_lowercase:
            a=True
        elif i in string.ascii_uppercase:
            b=True
        elif i in string.digits:
            c=True
    return a and b and c
if __name__ == '__main__':
    #These "asserts" using only for self-checking and not necessary for auto-testing
    assert checkio('A1213pokl') == False, "1st example"
    assert checkio('bAse730onE4') == True, "2nd example"
    assert checkio('asasasasasasasaas') == False, "3rd example"
    assert checkio('QWERTYqwerty') == False, "4th example"
    assert checkio('123456123456') == False, "5th example"
    assert checkio('QwErTy911poqqqq') == True, "6th example"
