user_0 = { 
 'username': 'efermi', 
 'first': 'enrico', 
 'last': 'fermi', 
 } 
for key, value in user_0.items():
  print("\nKey: " + key)
print("Value: " + value)
favorite_languages = { 
 'jen': 'python', 
 'sarah': 'c',     
 'edward': 'ruby', 
 'phil': 'python', 
 } 
for name, language in favorite_languages.items():
 print(name.title() + "'s favorite language is " + language.title() + ".") 
 messages = {'zhangzheng':'2','tantingshang':'4',}
 for name,number in messages.items():
   print(name.title() + "最喜欢的数字是" + number.title() + "。")
   favorite_languages = { 
 'jen': 'python', 
 'sarah': 'c', 
 'edward': 'ruby', 
 'phil': 'python', 
 } 
   friends = ['phil', 'sarah']
for name in favorite_languages.keys():
 print(name.title()) 
 if name in friends:
   print(" Hi " + name.title() + ", I see your favorite language is " + favorite_languages[name].title() + "!")