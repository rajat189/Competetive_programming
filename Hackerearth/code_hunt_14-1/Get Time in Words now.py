#	link	:-	https://www.hackerearth.com/code_hunt_14-1/algorithm/get-time-in-words-now/
#	problem	:-	Get Time in Words now

def time(hours,minutes):
    time_dict = {
        '0': '""', 
        '1': 'one',
        '2': 'two',
        '3': 'three',
        '4': 'four',
        '5': 'five',
        '6': 'six',
        '7': 'seven',
        '8': 'eight',
        '9': 'nine',
        '10': 'ten',
        '11': 'eleven',
        '12': 'twelve',
        '13': 'thirteen',
        '14': 'fourteen',
        '15': 'quarter past',
        '16': 'sixteen',
        '17': 'seventeen',
        '18': 'eighteen',
        '19': 'nineteen',
        '20': 'twenty',
        '30': 'half past',
        '40': 'forty',
        '45': 'quarter to',
        '50': 'fifty'
        }

    if minutes == 1 or minutes == 60 - 1:
        plural = 'minute'
    else:
        plural = 'minutes'

    if minutes == 0:
        return "%s o' clock" % time_dict[str(hours)]
    
    elif minutes <= 30:
        if minutes % 15 == 0:
            return '%s %s' % (time_dict[str(minutes)], time_dict[str(hours)])
        elif minutes > 20:
            return '%s %s %s past %s' % (time_dict[str(minutes - minutes%10)], time_dict[str(minutes%10)], plural, time_dict[str(hours)])
        else:
            return '%s %s past %s' % (time_dict[str(minutes)], plural, time_dict[str(hours)])

    elif minutes > 30:
        if minutes % 15 == 0:
            return '%s %s' % (time_dict[str(minutes)], time_dict[str(hours + 1)])
        elif minutes < 40:
            return '%s %s %s to %s' % (time_dict[str(60 - minutes - (60 - minutes)%10)], time_dict[str(minutes%10)], plural, time_dict[str(hours + 1)])
        else:
            return '%s %s to %s' % (time_dict[str(60 - minutes)], plural, time_dict[str(hours + 1)])

H = int(raw_input().strip())
M = int(raw_input().strip())

print time(H,M)
