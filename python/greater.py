import datetime


current_time = datetime.datetime.now()

current_hour = current_time.hour


morning_greeting = "Good Morning"
afternoon_greeting = "Good Afternoon"
night_greeting = "Good Night"


if 5 <= current_hour < 12:
    greeting = morning_greeting
elif 12 <= current_hour < 17:
    greeting = afternoon_greeting
else:
    greeting = night_greeting


print(greeting)
