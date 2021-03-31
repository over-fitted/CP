package javaTools;

class Pair<S,T> {
    private S first;
    private T second;

    public Pair(S first, T second) {
        this.first = first;
        this.second = second;
    }

    S getFirst() {
        return this.first;
    }

    T getSecond() {
        return this.second;
    }
}
