task2_a
def decrypt_with_mapping(text, mapping, words_per_line=10):
    decrypted_text = ""
    word_count = 0
    for char in text:
        if char in mapping:
            decrypted_text += mapping[char]
            if char == ' ':
                decrypted_text += ' '
                word_count += 1
                if word_count % words_per_line == 0:
                    decrypted_text += '\n'
        elif char == '\n':
            decrypted_text += '\n'
            word_count = 0
        elif char == '.':
            decrypted_text += '. '
        elif char == ',':
            decrypted_text += ', '
        else:
            decrypted_text += "*"
    return decrypted_text


text ="gtd bsvgl vf fgedsugt dffml dkcymvsf gtmg gtd chjde ha \
aevdsxftvc tdycf bf gh id fgehsu aehz tmexftvcf. aevdsxf qms \
uvod bf gtd fgedsugt jd sddx jtds yvad udgf ghbut. \
vs mxxvgvhs, cdhcyd dkcedff bsvgl gtehbut yhod, amzvyl, aevdsxf, msx \
hgtdef ftmed fghevdf ha avsxvsu qhzzhs uehbsx jvgt fhzdhsd. gtded \
med zmsl idsdavgf ha fgmlvsu bsvgdx vs ghbut gvzdf, mf \
vg tdycf gh amqd qtmyydsuvsu fvgbmgvhsf jvgt qhbemud. gtd vzchegmsqd \
ha fgmlvsu bsvgdx tmf fgebqp m qthex mzhsu zmsl cdhcyd \
gtehbuthbg tvfghel. pddcvsu zdzhevdf ha jtmg jd tmod mqqhzcyvftdx gtehbuthbg \
tvfghel qms tdyc bf fdd thj vsxvovxbmyf msx qhzzbsvgvdf tmod \
cdefdodedx gtehbut ghbut gvzdf msx vsgh m ievutgde abgbed."

words = text.split()
for i, word in enumerate(words, 1):
    print(word, end=' ')
    if i % 10 == 0:
        print()

mapping = {
    'm':'a',
    'd':'e',
    't':'h',
    'g':'t',
    'h':'o',
    'i':'b',
    'a':'f',
    'u':'g',
    'b':'u',
    'e':'r',
    'f':'s',
    's':'n',
    'x':'d',
    'v':'i',
    'o':'v',
    'l':'y',
    'c':'p',
    'y':'l',
    'k':'x',
    'q':'c',
    'z':'m',
    'j':'w',
    'p':'k',
    ' ': ' ',
}

decrypted_text = decrypt_with_mapping(text, mapping)
print("\nDecrypted Text (10 words per line with newline):")
print(decrypted_text)