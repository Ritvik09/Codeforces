string = input().lower()
vowel = ['a','e','i','o','u','y']
s = ""
for i in range(len(string)):
    if string[i] not in vowel:
        s+='.'
        s+=string[i]
print(s)
