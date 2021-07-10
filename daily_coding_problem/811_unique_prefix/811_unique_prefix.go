package unique_prefix

// naive implementation

func main(target []string) []string {
	return recursive_helper(target, 0)
}

func recursive_helper(input []string, loop int) []string {
	history := make(map[string][]string)
	answer := make([]string, len(input))

	var to_redo []string
	replace_position := []int{}
	for position, char := range input {
		current_prefix := string(char[0 : loop+1])

		// DUPLICATE EXISTS -> tag prefix for redo
		if history[current_prefix] != nil {
			if !strInArray(to_redo, current_prefix) {
				to_redo = append(to_redo, current_prefix)
			}

		}

		history[current_prefix] = append(history[current_prefix], char)
		answer[position] = current_prefix
	}

	if to_redo != nil {
		actual_redo := []string{}
		for position, char := range answer {
			if strInArray(to_redo, char) {
				actual_redo = append(actual_redo, input[position])
				replace_position = append(replace_position, position)
			}
		}
		newAnswerSlice := recursive_helper(actual_redo, loop+1)
		for position, newAnswer := range newAnswerSlice {
			answer[replace_position[position]] = newAnswer
		}

	}
	return answer
}

func strInArray(arr []string, str string) bool {
	for _, item := range arr {
		if item == str {
			return true
		}
	}
	return false
}
