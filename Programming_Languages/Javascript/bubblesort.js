const arr = [6, 5, 1, 3]


function bubbleSort(arr) {


    let len = arr.length;
    let swap;

    do {
        swap = false;
        for (let j = 0; j < len - 1; j++) {
            //swap

            if (arr[j] > arr[j + 1]) {
                let temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = true;
            }
            console.log(j);
        }

    } while (swap);

    // for (let i = 0; i < len; i++) {

    //     for (let j = 0; j < len - 1; j++) {
    //         //swap

    //         if (arr[j] > arr[j + 1]) {
    //             let temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }

    // }

    return arr;


}

console.log(bubbleSort(arr))
