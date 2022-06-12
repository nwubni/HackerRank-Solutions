def superReducedString(s):
    # Write your code here
    alphabets = 'abcdefghijklmnopqrstuvwxyz'

    for alphabet in alphabets:
        while s.find(alphabet * 2) != -1:
            s = s.replace(alphabet * 2, '')

    for c in s:
        s = s.replace(c * 2, '')

    return s if(len(s) > 0) else "Empty String"

print(superReducedString("abba"))
