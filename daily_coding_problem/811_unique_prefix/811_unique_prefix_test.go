package unique_prefix

import (
	"reflect"
	"testing"
)

func TestSinglePrefix(t *testing.T) {
	got := main([]string{"a"})
	want := []string{"a"}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestSingleWord(t *testing.T) {
	got := main([]string{"abc"})
	want := []string{"a"}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestMultipleUniquePrefixWords(t *testing.T) {
	got := main([]string{"abc", "bcd"})
	want := []string{"a", "b"}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestClashingPrefixWords(t *testing.T) {
	got := main([]string{"abc", "adb"})
	want := []string{"ab", "ad"}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}

func TestWithGivenInput(t *testing.T) {
	got := main([]string{"dog", "cat", "apple", "apricot", "fish"})
	want := []string{"d", "c", "app", "apr", "f"}

	if !reflect.DeepEqual(got, want) {
		t.Errorf("got %v, want %v", got, want)
	}
}
