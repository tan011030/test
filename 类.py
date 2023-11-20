class Dog():
  

 def __init__(self, name, age): 
 
  self.name = name 
  self.age = age 
 def sit(self): 
  print(self.name.title() + " is now sitting.") 
 def roll_over(self): 
  print(self.name.title() + " rolled over!") 
my_dog = Dog('willie', 6)
print("My dog's name is " + my_dog.name.title() + ".")
print("My dog is " + str(my_dog.age) + " years old.")



class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"Restaurant name: {self.restaurant_name}")
        print(f"Cuisine type: {self.cuisine_type}")

    def open_restaurant(self):
        print(f"The restaurant {self.restaurant_name} is now open!")

# 创建一个Restaurant实例
my_restaurant = Restaurant("Delicious Bites", "Italian")

# 调用方法来描述餐馆和宣布开业
my_restaurant.describe_restaurant()
my_restaurant.open_restaurant()
