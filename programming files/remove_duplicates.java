import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class remove_duplicates {
// remove duplicates from an array
    public static List<Integer> removeDuplicates(List<Integer> arr, List<Integer> removedElements) {
        // create unique array
        List<Integer> uniqueArr = new ArrayList<>();
        // go through each element
        for (int i = 0; i < arr.size(); i++) {
            // check if element already has been found
            if (!uniqueArr.contains(arr.get(i))) {
                // if unique, add it
                uniqueArr.add(arr.get(i));
            } else {
                // if not unique, add to removed
                removedElements.add(arr.get(i));
            }
        }
        return uniqueArr;
    }

    public static void main(String[] args) {
        // Test the function
        List<Integer> arr = Arrays.asList(1, 2, 2, 3, 4, 4, 5);
        List<Integer> removedElements = new ArrayList<>();
        List<Integer> uniqueArr = removeDuplicates(arr, removedElements);
        System.out.println("Original array: " + arr);
        System.out.println("Unique array: " + uniqueArr);
        System.out.println("Removed elements: " + removedElements);
    }
}
