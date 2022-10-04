class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        freq = Counter(secret)
        guessFreq = Counter(guess)
        x = 0
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                freq[secret[i]] -= 1
                guessFreq[guess[i]] -= 1
                x += 1
                if freq[secret[i]] == 0:
                    del freq[secret[i]]
                if guessFreq[guess[i]] == 0:
                    del guessFreq[guess[i]]
        #print(x)
        #print(freq)
        #print(guessFreq)
        y = 0
        for key, value in guessFreq.items():
            if key in freq:
                ctr = min(freq[key], value)
                y += ctr
                if freq[key] == 0:
                    del freq[key]
                if value == 0:
                    del guessFreq[key]
        return str(x) + 'A' + str(y) + 'B'
