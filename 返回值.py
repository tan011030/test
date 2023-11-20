def get_formatted_name(first_name, middle_name, last_name): 
 """返回整洁的姓名""" 
 full_name = first_name + ' ' + middle_name + ' ' + last_name 
 return full_name.title() 
musician = get_formatted_name('tan', 'ting', 'shang') 
print(musician) 
def build_person(first_name, last_name): 
 
 """返回一个字典，其中包含有关一个人的信息""" 
 person = {'first': first_name, 'last': last_name}
 return person
musician = build_person('jimi', 'hendrix') 
print(musician) 


def build_person(first_name, last_name, age=''): 
 """返回一个字典，其中包含有关一个人的信息""" 
 person = {'first': first_name, 'last': last_name} 
 if age: 
  person['age'] = age 
 return person 
musician = build_person('jimi', 'hendrix', age=27) 
print(musician)  



def city_country(city, country):
    formatted_string = f"{city.title()}, {country.title()}"
    return formatted_string
# 测试函数
print(city_country("santiago", "chile")) # 输出 "Santiago, Chile"
print(city_country("new york", "united states")) # 输出 "New York, United States"
print(city_country("tokyo", "japan")) # 输出 "Tokyo, Japan"
