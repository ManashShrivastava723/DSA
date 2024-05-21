def validateipaddress(ip):
    number = ip.split('.')
    if len(number) != 4: #4 part hona chaiye kisi ip address ka
        print(f'Invalid IP address: {ip}')
        return
    for part in number:
        if not part.isdigit(): #sara part number
            print(f'Invalid IP address: {ip}')
            return
        num = int(part) #to check range we are converting them
        if num < 0 or num > 255: 
            print(f'Invalid IP address: {ip}')
            return
        if part != "0" and part.startswith("0"): #zero checking starting me nhi ho agar whole part is not zero then
            print(f'Invalid IP address: {ip}')
            return
    print(f'Valid IP address: {ip}')

while True:
    our_input = input("Enter an IPv4 address to validate (or 'exit' to quit): ")
    if our_input.lower() == 'exit':
        break
    validateipaddress(our_input)