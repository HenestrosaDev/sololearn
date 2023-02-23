# Queue

You are making a call center application, which should handle customers in a **queue**.

The `CallCenter` class is implemented as a queue. Each element of the queue has the topic of the call as its value. The two possible values are `general` and `technical`. A `general` call takes on average **5 minutes** to handle, while a `technical` call requires **10 minutes**.

The given code adds multiple customers to the queue from user input. You need to dequeue all added customers, calculate and **output the total time** required to handle all calls.

>Use a `while` loop to dequeue all the customers from the queue, **until it is empty**.
