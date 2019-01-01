f= open("test.xml","a+")

for i in range(132):
     f.write('<agent x="30" y="-30" n="1" dx="180" dy="50">' "\n"
   				'<addwaypoint id="wu" />' "\n"
   				'<addwaypoint id="wd" />' "\n"
  			  '</agent> ' "\n")

f.close() 