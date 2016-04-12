def valid_segments(s):
	text = ""
	values_index = -1
	words_index = -1
	k = -1
	lb = -1
	ub = -1
	for i in range(0, len(s)):
		if (s[i] == '\n'):
			values_index = i+1
			break
		else:
			text += char;
	for i in range(values_index, values_index + 6):
		if (s[i] != ' ' or s[i] != '\n'):
			if (i == values_index):
				k = int(s[i])
			elif (i == values_index + 2):
				lb = int(s[i])
			else:
				ub = int(s[i])
	words_index = values_index + 6
	k_dup = k
	while (k_dup != 0):
		word_list = []
		word = ""
		for i in range(words_index, len(s)):
			if (s[i] == '\n'):
				word_list.append(word)
				break
			else:
				word += s[i]
		k_dup = k_dup - 1
	s_dup = s.lower()
	text_list = s_dup.split()
	output = 0
	for i in range(0, len(text_list)):
		sub_text_list = text_list[i+lb:ub]
		if (text_list[i] in word_list):
			passed = True
			for j in range(0, len(word_list)):
				if (word_list[j] not in sub_text_list):
					passed = False
			if (passed):
				output += 1
	return (output)