# d30365
* Date difference in years according to the 30/365 daycount method
* Synonyms: 30/365


## ISO 20022 -- A002

    "Method whereby interest is calculated based on a 30-day month in a way similar to the 30/360 (basic rule) and a 365-day year. Accrued interest to a value date on the last day of a month shall be the same as to the 30th calendar day of the same month, except for February. This means that a 31st is assumed to be a 30th and the 28 Feb (or 29 Feb for a leap year) is assumed to be a 28th (or 29th)."

[link](https://www.iso20022.org/15022/uhb/mt565-16-field-22f.htm)


### Installation
```
clib install hcnn/d30365
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/d30365": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/d30365/blob/master/test.c) and [demo.c](https://github.com/hcnn/d30365/blob/master/demo.c)

```
git clone git@github.com:hcnn/d30365.git
cd d30365
make validate
make showcase
```
