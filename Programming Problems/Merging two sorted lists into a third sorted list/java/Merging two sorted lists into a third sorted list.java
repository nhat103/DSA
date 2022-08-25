package javacode.mergtowsortlist;

import java.util.ArrayList;

public class MerTwoList {

	public ArrayList<String> merfish(ArrayList<String> sea, ArrayList<String> fresh) {

		ArrayList<String> fish = new ArrayList<String>();
		while (!sea.isEmpty() && !fresh.isEmpty()) {
			int diff = (sea.get(0)).charAt(0) - (fresh.get(0)).charAt(0);// compare alphabet two String
			if (diff < 0) {
				fish.add(sea.get(0));
				sea.remove(0);
			} else {
				fish.add(fresh.get(0));
				fresh.remove(0);
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

		ArrayList<String> saltwater_fish = new ArrayList<String>();
		String[] sea_fish = { "cod", "herring", "marlin" };
		for (String sea : sea_fish) {
			saltwater_fish.add(sea);
		}

		ArrayList<String> freshwater_fish = new ArrayList<String>();
		String[] fresh_fish = { "asp", "carp", "ide", "trout" };
		for (String fresh : fresh_fish) {
			freshwater_fish.add(fresh);
		}

		MerTwoList merTwoList = new MerTwoList();
		ArrayList<String> merfish = merTwoList.merfish(saltwater_fish, freshwater_fish);

		System.out.println("List fish after merg: " + merfish);

	}
}

