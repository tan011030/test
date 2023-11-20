players = ['charles', 'martina', 'michael', 'florence', 'eli'] 
print("Here are the first three players on my team:") 
for player in players[:4]:
   print(player.title()) 
my_foods = ['pizza', 'falafel', 'carrot cake']   
friend_foods = my_foods[:]
my_foods.append('cannoli')
friend_foods.append('ice cream') 
print("My favorite foods are:")
print(my_foods) 
print("\nMy friend's favorite foods are:")
print(friend_foods)
menus = ['pizza', 'falafel', 'carrot cake','noodles','dumpling']
my_foods = menus[:3]
print("The first three items in the list are:" )
print(my_foods)
my_foods = menus[1:4]
print("Three items from the middle of the list are:" )
print(my_foods)
my_foods = menus[2:]
print("The last three items in the list are:" )
print(my_foods)