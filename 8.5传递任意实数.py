def greet_users(names): 
 """向列表中的每位用户都发出简单的问候""" 
 for name in names: 
        msg = "Hello, " + name.title() + "!" 
        print(msg) 
names = ['hannah', 'ty', 'margot']
greet_users(names)

def print_models(unprinted_designs, completed_models):
 """ 
 模拟打印每个设计，直到没有未打印的设计为止
 打印每个设计后，都将其移到列表completed_models中
 """ 
 while unprinted_designs: 
  current_design = unprinted_designs.pop() 
 # 模拟根据设计制作3D打印模型的过程
 print("Printing model: " + current_design) 
 completed_models.append(current_design)
 



def show_magicians(magicians):
    for magician in magicians:
        print(magician)

magicians_list = ["Alice", "Bob", "Charlie", "David", "Eva"]
show_magicians(magicians_list)

def make_pizza(*toppings): 

    print("\nMaking a pizza with the following toppings:") 
    for topping in toppings: 
     print("- " + topping) 
make_pizza('pepperoni') 
make_pizza('mushrooms') 
make_pizza('green peppers')
make_pizza('extra cheese')


def make_pizza(size, *toppings):
  
  """概述要制作的比萨""" 
  print("\nMaking a " + str(size) + "-inch pizza with the following toppings:")
  for topping in toppings:
   print("- " + topping) 
make_pizza(16, 'pepperoni') 
make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese') 


def build_profile(first, last, **user_info): 
 """创建一个字典，其中包含我们知道的有关用户的一切""" 
 profile = {} 
 profile['first_name'] = first
 profile['last_name'] = last
 for key, value in user_info.items():
  profile[key] = value 
 return profile 
user_profile = build_profile('albert', 'einstein', 
 location='princeton', 
 field='physics') 
print(user_profile) 