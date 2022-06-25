def elements(x):
    tube = []
    ans = []
    d = {}
    for i in x:
        # print()
        if(i[0] == 1):
            print(i[0])
            tube.append(i[1])
        else:
            for i in tube:
                if i in d: 
                    d[i] += 1
                else:
                    d[i] = 1
            sd = sorted(d.items(), key=lambda p: p[0])  #sorting by value
            # find the max ones in tube and compare their indexes
            max_index = 0
            max_value = sd[0][1]
            # for k,v in sd.items():
                

# {{1,62}, {1,49}, {2,-1}}
x = [[1,62], [1,49], [2,-1]]
elements(x)