ch = (input("Enter the character :"))
if ch>='A' and ch<='Z':
    print('its capital char ')
elif ch>='a' and ch<='z':
    print('its small char')
else:
    print('other character ')

if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'):
    print('it is Vowel')
else:
    print('Not vowel')

print(type(ch))
print('ASCII calue of ',ch,'is',ord(ch))