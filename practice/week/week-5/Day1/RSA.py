import random
import time

def is_prime(n, k=5):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0:
        return False

    def check(a, s, d, n):
        x = pow(a, d, n)
        if x == 1:
            return True
        for _ in range(s - 1):
            if x == n - 1:
                return True
            x = pow(x, 2, n)
        return x == n - 1

    s, d = 0, n - 1
    while d % 2 == 0:
        s += 1
        d //= 2

    for _ in range(k):
        a = random.randint(2, n - 2)
        if not check(a, s, d, n):
            return False
    return True

def generate_prime(bits):
    # Generate a random prime number of specified bit length.
    while True:
        num = random.getrandbits(bits)
        num |= (1 << bits - 1) | 1  
        # Ensure the number has the desired bit length and is odd
        if is_prime(num):
            return num

def gcd(a, b):
    # Calculate the Greatest Common Divisor (GCD) of two numbers.
    while b != 0:
        a, b = b, a % b
    return a

def mod_inverse(a, m):
    # Calculate the modular inverse of a number.
    m0, x0, x1 = m, 0, 1
    while a > 1:
        q = a // m
        m, a = a % m, m
        x0, x1 = x1 - q * x0, x0
    return x1 + m0 if x1 < 0 else x1

def generate_keys(k):
    # Generate RSA key pairs.
    p = generate_prime(k // 2)
    q = generate_prime(k // 2)
    n = p * q
    phi = (p - 1) * (q - 1)
    
    e = random.randrange(1, phi)
    while gcd(e, phi) != 1:
        e = random.randrange(1, phi)
    
    d = mod_inverse(e, phi)
    
    return (e, n), (d, n)

def encrypt(message, public_key):
    # Encrypt a message using RSA.
    e, n = public_key
    encrypted_msg = [pow(ord(char), e, n) for char in message]
    return encrypted_msg

def decrypt(ciphertext, private_key):
    """Decrypt a ciphertext using RSA."""
    d, n = private_key
    decrypted_msg = [chr(pow(char, d, n)) for char in ciphertext]
    return ''.join(decrypted_msg)

def main():
    k_values = [16, 32, 64, 96]
    
    for k in k_values:
        print(f"Key length: {k}")
        
        start_time = time.time()
        public_key, private_key = generate_keys(k)
        key_generation_time = time.time() - start_time
        
        print("Public key (e, n):", public_key)
        print("Private key (d, n):", private_key)
        print("Key generation time:", key_generation_time, "seconds")
        
        plaintext = input("Enter the plaintext: ")
        
        start_time = time.time()
        ciphertext = encrypt(plaintext, public_key)
        encryption_time = time.time() - start_time
        
        print("Ciphertext:", ciphertext)
        print("Encryption time:", encryption_time, "seconds")
        
        start_time = time.time()
        decrypted_text = decrypt(ciphertext, private_key)
        decryption_time = time.time() - start_time
        
        print("Decrypted text:", decrypted_text)
        print("Decryption time:", decryption_time, "seconds")
        
        if plaintext == decrypted_text:
            print("Decryption successful!")
        else:
            print("Decryption failed!")
        
        print("="*40)

if __name__ == "__main__":
    main()
