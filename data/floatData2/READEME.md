# 1
- this data shows how to set and initialize a basic class constructor
- notice how the data is initialized outside of the constructor body
- notice how the data members are assigned default values after the constructor initialization

# 2
- a problem here is that, in the main function, the class methods still require parameters.
- If we want to keep the initial values assigned in the constructor when the class methods are implemented in the main function, we have to enter these values again as arguments, or else an error will occur. 
- another way of keeping the initial; values of the data members is to use a 'set' method and then call it in the main function, 
but all this does is add an extra step to the explanation above, as the data members were already set by receiving their default values
