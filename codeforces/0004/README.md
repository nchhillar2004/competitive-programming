## B. Before an Exam 
Explanation

Lets say we have the input:
```
3 8
0 1
4 8
1 3
```

here `d = 3`, i.e the number of days

`sumTime = 8`, total hrs he studied in `d` days

### Step 1: take the inputs d, sumTime
also initialize `minSum`, `maxSum` and `vector<pair<int, int>> v;` we'll use later

### Step 2:
now loop for `3` days:
- day1: `min = 0` & `max = 1`, min he need to study 0 hrs and maximum 1 hr
- day2: `min = 4` & `max = 8`
- day3: `min = 1` & `max = 3`

also inside the loop:
- store the min, and max hrs for each day into the vector
`v = {{0, 1}, {4, 8}, {1, 3}}`

- add all the `min` and `max` during input to get:
`minSum = 0 + 4 + 1 = 5` and `maxSum = 1 + 8 + 3 = 12`

### Step3:

if `(sumTime > maxSum) OR (sumTime < minSum)` then its wrong `PRINT 'NO'`

else we know he studied within the possible time limit and we can `PRINT 'YES'`

but now we need to print the hours he studied each day with keeping in mind:
- he should study atleast `min` hrs for each `d` days, which are stored in v[i].first
- also, all the hrs he study for `d` should be equal to `sumTime`

store these hrs for each `d` day into `vector<int> sol;`

### Step4:
iterate through minimum time required to study each day
i.e. `v[i].first`
and subtract it from `sumTime`
also subract it from `v[i].second` (i.e. the maximum time) to get the remaining maximum time

after this step:
`sol = {0, 4, 1}`
`remaining extra capacity = {1, 4, 2}`, i.e v[i].second
remaining `sumTime = 3`

`v = {{0, 1}, {4, 4}, {1, 2}}`
but we can also say: `v = {{0, 1}, {0, 4}, {0, 2}}` because now we dont need `v[i].first` (already subtracted it from `sumTime`)
so we'll only work with `{1, 4, 2}`

### Step5:
to complete the remaining study time, i.e `3` hrs
we will iterate through `v` once again make out `sumTime` equal to 0, we know this is possible because sumTime < maxSum
work with only `v[i].second`, i.e the time remaining he can study

after this loop:
`sol = {1, 6, 1}`
`v = {{0, 0}, {0, 2}, {0, 2}}`
`sumTime = 0`

### Step6:
`PRINT sol`, i.e `1 6 1`
