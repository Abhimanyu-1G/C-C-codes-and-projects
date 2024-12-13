n = int(input())
phoneBook = {}


for i in range(0, n):
    entry = str(input()).split(" ")
    name = entry[0]
    number = entry[1]  
    phoneBook[name] = number
  

while True:
    try:
        name = input()
    except :
        break
    if name in phoneBook:
        number = phoneBook[name]
        print(name + "=" + number)
    else:
        print("Not found")
