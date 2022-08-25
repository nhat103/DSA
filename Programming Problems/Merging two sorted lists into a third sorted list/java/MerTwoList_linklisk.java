package javacode.mergtowsortlist;

import java.util.LinkedList;

public class MerTwoList {

	public LinkedList<String> merfish(LinkedList<String> sea, LinkedList<String> fresh) {

		LinkedList<String> fish = new LinkedList<String>();
		while (!sea.isEmpty() && !fresh.isEmpty()) {
			int diff = (sea.getFirst()).charAt(0) - (fresh.getFirst()).charAt(0);// compare alphabet two String
			if (diff < 0) {
				fish.add(sea.getFirst());
				sea.removeFirst();
			} else {
				fish.add(fresh.getFirst());
				fresh.removeFirst();
			}
		}

		// if sea empty then add all fresh to fish
		if (sea.isEmpty()) {
			fish.addAll(fresh);
		} else {
			fish.addAll(sea);
		}

		return fish;
	}

	public static void main(String[] args) {

		LinkedList<String> saltwater_fish = new LinkedList<String>();
		String[] sea_fish = { "cod", "herring", "marlin" };
		for (String sea : sea_fish) {
			saltwater_fish.add(sea);
		}

		LinkedList<String> freshwater_fish = new LinkedList<String>();
		String[] fresh_fish = { "asp", "carp", "ide", "trout" };

		for (String fresh : fresh_fish) {
			freshwater_fish.add(fresh);
		}

		MerTwoList merTwoList = new MerTwoList();
		LinkedList<String> merfish = merTwoList.merfish(saltwater_fish, freshwater_fish);

		System.out.println("List fish after merg: " + merfish);

	}
}
