#  鄒雨笙 UVa Online Judge 2023/10/15

#  Problem 10226 - Hardwood Species


def findFrequency(treeSpecies):
    result = {}
    count = 0
    current = treeSpecies[0]
    length = len(treeSpecies)
    for species in treeSpecies:
        if current == species:
            count += 1
        else:
            result[current] = f"{count/length:.4f}"
            # result[current] = count/length
            current = species
            # reset the count for the new species
            count = 1  
    # add the last species to the result
    result[current] = f"{count/length:.4f}"  
    return result



case = int(input())

print()

for _ in range(case):
    treeSpecies = []

    while True:
        try:
            species = input()
            treeSpecies.append(species)
        except EOFError:
            break
    print(treeSpecies)
    # sorted(treeSpecies)
    treeSpecies.sort()
    print(treeSpecies)

    result = findFrequency(treeSpecies)

    print(result)




