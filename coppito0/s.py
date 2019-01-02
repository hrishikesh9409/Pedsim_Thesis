f= open("test.xml","a+")

for i in range(50):
     f.write('<agent x="30" y="-30" n="1" dx="50" dy="50">' "\n"
   				'<addwaypoint id="wu" />' "\n"
   				'<addwaypoint id="wd" />' "\n"
   				'<addwaypoint id="wz" />' "\n"
  			  '</agent> ' "\n")

f.close() 