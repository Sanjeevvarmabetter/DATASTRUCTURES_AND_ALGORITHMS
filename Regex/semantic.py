# returtn the incorrect ips

# ipv4's  = "92.85" -- starting with are threat

# ipv6 = "2510:a5:*:*:*" --this pattern are also threat 


# ipv6 8 groups of 4 hex,separated by colons


# hex = [0-9a-fA-F]



import re




ip_v4_pattern = re.compile("92.85")
ip_v6_pattern = re.compile('^2510:a5:[0-9a-fA-F]+:[0-9a-fA-F]+:[0-9a-fA-F]+:[0-9a-fA-F]+$')

incorrect_ip = []



with open('ip.lst','r') as f:
    for i in f:
        ip = i.strip()
        if ip_v4_pattern.match(i) or ip_v6_pattern.match(i):
            incorrect_ip.append(ip)

print(incorrect_ip)




# now i need to print the last char of the ipaddress







# for i in ipv4:
#     if not  ip_v4_pattern.startswith(i):
#         incorrect_ip.append(i)

# for i in ipv6:
#     if not ip_v6_pattern.match(i):

#         incorrect_ip.append(i)

