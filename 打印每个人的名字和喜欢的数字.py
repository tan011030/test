person = {'first_name':'tingshang','last_name':'tan','age':'22','city':'zhenzhou'}
full_name = person['last_name'] + person['first_name']
print(person['last_name'])
print(person['first_name'])
print(full_name)
print(person['age'])
print(person['city'])
numbers = {'tantinsghang':'4','zhangzheng':'7','qiushulin':'6','zhangruiyuan':'5'}
print(numbers)
# 创建一个空字典来存储人名和数字
favorite_numbers = {}

# 询问朋友的喜欢的数字并存储到字典中
friends = ["Alice", "Bob", "Charlie", "David", "Eve"]
for friend in friends:
    number = input(f"{friend}, 请输入你喜欢的一个数字: ")
    while not number.isdigit():  # 确保输入是一个有效的数字
        number = input("请输入一个有效的数字: ")
    favorite_numbers[friend] = int(number)

# 打印每个人的名字和喜欢的数字
for friend, number in favorite_numbers.items():
    print(f"{friend}喜欢的数字是: {number}")
messages = {'Alice':'1','Bob':'2','Charlie':'3','David':'4','Eve':'5'}
for name,number in messages.items():
    print(name.title() + "最喜欢的数字是" + number.title() + "。")
