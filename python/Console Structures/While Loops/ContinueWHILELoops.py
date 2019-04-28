i = 0
while True:
    i += 1
    if i == 2:
        print("Skipping 2")
        continue
    if i == 5:
        print("Breaking 5")
        break
    print(i)

print("Finished")
