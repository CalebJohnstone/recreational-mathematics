import sys
import calendar
from datetime import datetime

def get_month_extra_days(year, month):
    return month_extra_days[month] + (1 if month == 1 and calendar.isleap(year) else 0)

month_extra_days = [3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3] # 2 - April, June, September, November; 0 - February; 3 - rest
current_release_day = 16
current_month = 9 # October
current_year = 2023

target_day, target_month = [int(arg) for arg in sys.argv[1:]]
target_month -= 1

while not(current_month == target_month and current_release_day == target_day):
    extra_days = get_month_extra_days(current_year, current_month)

    print(f"{current_release_day} {calendar.month_name[current_month+1]} {current_year} (down: {extra_days})")

    if current_release_day <= extra_days:
        current_release_day += 28
    else:
        current_release_day -= extra_days

        current_month = (current_month + 1) % 12
        if current_month == 0:
            current_year += 1
            if calendar.isleap(current_year):
                print("")

current_date = datetime(current_year, current_month+1, current_release_day).weekday()
print(f"End date: {current_release_day} {calendar.month_name[current_month+1]} {current_year}")
print(f"Number of years: {current_year - 2023}")