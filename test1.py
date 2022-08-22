l=[{"Dg set":"Diesel generator"},{"Organization":"Organisation"},{"Group":"Organisation"},{"Orange":"Kinnu"},{"Orange":"narangi"}]
newLIst=list()
for dict in l:
    for item in dict:
        newLIst.append([item,dict[item]])
        print()
        
print(newLIst)