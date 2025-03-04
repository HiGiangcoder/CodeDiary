a = [16, 9, 3, 15, 3, 20, 6, 20, 8, 5, 14, 21, 13, 2, 5, 18, 19, 13, 1, 19, 15, 14]

for i in range(26):
    for x in a:
        print(chr(65 + (x + i) % 26), end='')
    print()
