def validate(IP):
    # Split the IP address into parts
    parts = IP.split('.')
    
    # There should be exactly four parts
    if len(parts) != 4:
        print(f'Invalid IP address: {IP}')
        return
    
    for part in parts:
        # Each part should be a number
        if not part.isdigit():
            print(f'Invalid IP address: {IP}')
            return
        
        # Convert part to integer and check the range
        num = int(part)
        if num < 0 or num > 255:
            print(f'Invalid IP address: {IP}')
            return
        
        # Check for leading zeros (except for "0" itself)
        if part != "0" and part.startswith("0"):
            print(f'Invalid IP address: {IP}')
            return
    
    print(f'Valid IP address: {IP}')

# Get user input for IP addresses
while True:
    user_input = input("Enter an IPv4 address to validate (or 'exit' to quit): ")
    if user_input.lower() == 'exit':
        break
    validate(user_input)