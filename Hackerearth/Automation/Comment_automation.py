from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time
import os

def do_comment(user,passw,Link,titles,comments,youtube,github,driver):
    try:
        file=open("Links.txt",'r')
    except:
        file=open("Links.txt",'a+')
        file.seek(0)
        for i in range(len(Link)):
            file.write(Link[i]+'\n')
        file.close()
    file=open("Links.txt",'r')
    file.seek(0)
    links=file.readlines()
    file.close()
    web=webdriver.Chrome(driver)
    web.get("https://www.hackerearth.com/")
    login=web.find_element(By.CLASS_NAME, 'buttonText')
    login.click()
    data=web.find_elements(By.CLASS_NAME,'inputField')
    data[0].send_keys(user)
    data[1].send_keys(passw)
    submit=web.find_element(By.CLASS_NAME,'submitButton')
    submit.click()
    for i in range(len(links)):
        time.sleep(2)
        java="window.location.replace('"+links[i][:-1]+"discussion/new/')"
        web.execute_script(java)
        title=web.find_element(By.CLASS_NAME, 'topic-title')
        title.send_keys(titles[i])
        comment=web.find_element(By.CSS_SELECTOR, 'div.ck.ck-content.ck-editor__editable.ck-rounded-corners.ck-editor__editable_inline.ck-blurred')
        comment.send_keys(comments[i])
        comment.send_keys(Keys.ENTER)
        comment.send_keys("Youtube link is ")
        link_button=web.find_elements(By.CSS_SELECTOR, 'button.ck.ck-button.ck-off')
        link_button[2].click()
        You=web.find_element(By.CLASS_NAME, 'ck.ck-input.ck-input-text')
        You.send_keys(youtube[i])
        save=web.find_element(By.CSS_SELECTOR, 'button.ck.ck-button.ck-off.ck-button-save')
        save.click()
        comment.send_keys(Keys.RIGHT)
        comment.send_keys(Keys.ENTER)
        comment.send_keys("Github link is ")
        link_button=web.find_elements(By.CSS_SELECTOR, 'button.ck.ck-button.ck-off')
        link_button[2].click()
        You=web.find_element(By.CLASS_NAME, 'ck.ck-input.ck-input-text')
        You.send_keys(github[i])
        save=web.find_element(By.CSS_SELECTOR, 'button.ck.ck-button.ck-off.ck-button-save')
        save.click()
        comment.send_keys(Keys.RIGHT)
        comment.send_keys(Keys.ENTER)
        publish=web.find_element(By.CSS_SELECTOR, 'button.btn.btn-blue.btn-large-nuskha.margin-left-8')
        publish.click()
        file=open("Links.txt",'w')
        file.truncate()
        for j in range(i+1,len(links)):
            file.write(links[j])
        file.close()
        print("comment "+str(i))
    os.remove("Links.txt")
    web.close()

Username="Geeksman"
Password="Ritik@123"
Links=["https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/","https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/","https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/"]
Titles=["TGY","TGY","TGY"]
Comments=["easy","easy","easy"]
Youtube=['youtube.com','youtube.com','youtube.com']
Github=['github.com','github.com','github.com']
Driver="C:/Users/LENOVO/Downloads/chromedriver_win32/chromedriver"
do_comment(Username, Password, Links, Titles, Comments, Youtube, Github, Driver)
