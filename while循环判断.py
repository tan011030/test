while True:
    try:
        age = int(input("请输入您的年龄（输入0退出）："))

        if age == 0:
            print("感谢使用，祝您观影愉快！")
            break
        elif age < 3:
            print("您不到3岁，免费观影。")
        elif 3 <= age <= 12:  
            print("您的票价为 10 美元。")
        else:
            print("您的票价为 15 美元。")

    except ValueError:
        print("请输入有效的年龄（整数），或输入0退出。")
