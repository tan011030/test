from urllib.request import urlopen

url = "http://www.baidu.com"
resp = urlopen(url)
html_content = resp.read().decode("utf-8")

with open("mybaidu1.html", mode="w", encoding="utf-8") as f:
    f.write(html_content)

print("over!")
