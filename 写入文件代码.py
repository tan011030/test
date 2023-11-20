# 提示用户输入名字
user_name = input("请输入您的名字: ")

# 将名字写入文件
with open("C:/vs code file/guest.txt", "w") as file:
    file.write(user_name)

print("名字已写入到 guest.txt 文件中。")
