from commentor import do_comment
import pandas as pd 
data = pd.read_csv("array.csv")
#['ques_link', 'git_sol', 'youtube_sol', 'title', 'comment']
ques = data['ques_link'].values.tolist()
git = data['git_sol'].values.tolist()
youtube = data['youtube_sol'].values.tolist()
title = data['title'].values.tolist()
comment = data['comment'].values.tolist()
my_comment=[]

for x in range(len(comment)):
	my_comment.append(str(comment[x])+"\n"+"youtube link : "+str(youtube[x])+"\n Github Solution link : "+str(git[x]))
driver = "F:\\automation\\chromedriver.exe"
Username="Geeksman"
Password="Ritik@123"


my_ques = []
spec_comment =[]
my_title=[]
for i in range(40):
	my_ques.append(ques[9])
	spec_comment.append(my_comment[9])
	my_title.append(title[9])

do_comment(Username, Password, my_ques, my_title, spec_comment,driver)
