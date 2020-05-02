#!/usr/bin/python3

save = 0
for n in range(999, 1, -1):
    for m in range(999, 1, -1):
        result = n * m
        if str(result) == str(result)[::-1]:
            if save < result:
                save = result
print(save)
