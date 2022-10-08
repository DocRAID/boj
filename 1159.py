import sys
input = sys.stdin.readline

n = int(input())
team_list = [input().rstrip() for _ in range(n)]
team_list_d = {}

for name in team_list :
    if name[0] in team_list_d :
        team_list_d[name[0]] += 1
    else :
        team_list_d[name[0]] = 1

people_count = 0
people_name = []
for name, count in team_list_d.items() :
    if count >= 5 :
        people_name.append(name)
        people_count += 1

people_name.sort()

if people_count != 0 :
    print(''.join(people_name))
else :
    print("PREDAJA")