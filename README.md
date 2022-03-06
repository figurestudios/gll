# gll
A Lucas-Lehmer Primality Test running on Golem in C++.

## Run (on Windows)

* `yagna service run`
* Open a new command prompt
* `set YAGNA_APPKEY=<YOUR_APPKEY_HERE>` 

> (your app-key can be found with `yagna app-key list`)

* `yagna payment init --sender`
* `py requestor.py`
* Enter a number **p** from a known [mersenne prime](https://www.mersenne.org/primes/) or any number you'd like to try
* You will see an output whether it's a valid mersenne prime or not :)
